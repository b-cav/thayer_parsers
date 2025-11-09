/*
 * gen_v2_HB.c - Generate MAVLink v2 HEARTBEAT messages
 *
 * Ben Cavanagh
 * 10-19-2025
 *
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <common/mavlink.h>

int main(void) {
    FILE *ofile;

    mavlink_message_t message;

    const uint8_t system_id = 239; //EF
    const uint8_t base_mode = 205; //CD
    const uint32_t custom_mode = 2880154539; //ABABABAB

    mavlink_msg_heartbeat_pack(
        system_id,
        MAV_COMP_ID_PERIPHERAL, // 0x9e
        &message,
        MAV_TYPE_QUADROTOR, // 0x02
        MAV_AUTOPILOT_GENERIC_MISSION_FULL, //0x07
        base_mode,
        custom_mode,
        MAV_STATE_ACTIVE); //0x04

    // Magic version number 0x03 gets added on as well

    // MAVLINK_CORE_HEADER_LEN 5
    // Length of core header (of the comm. layer):
    // message length (1 byte) + message sequence (1 byte) + message system id (1 byte)
	// + message component id (1 byte) + message type id (1 byte)

    // MAVLINK_NUM_HEADER_BYTES (MAVLINK_CORE_HEADER_LEN + 1) ///< Length of all header bytes, including core and checksum
    // MAVLINK_NUM_CHECKSUM_BYTES 2
    // MAVLINK_NUM_NON_PAYLOAD_BYTES (MAVLINK_NUM_HEADER_BYTES + MAVLINK_NUM_CHECKSUM_BYTES)

    int msg_len = MAVLINK_NUM_NON_PAYLOAD_BYTES + message.len;
	printf("Message has header len %d (incl. chksum) and payload len %d\n", MAVLINK_NUM_NON_PAYLOAD_BYTES, message.len);
    uint8_t buffer[msg_len];
    mavlink_msg_to_send_buffer(buffer, &message);


    // Sign the packet
    
    // Print to file
    char fname[] = "pass.v2";
    if ((ofile = fopen(fname, "wb")) == NULL) {
        fprintf(stderr, "Couldn't open %s.\n", fname);
        exit(EXIT_FAILURE);
    }

    int buflen = sizeof(buffer);
    int bytelen = sizeof(buffer)/sizeof(buffer[0]);
    printf("Buffer has %d elems and is %d bytes long.\n", buflen, bytelen);

    int retval = fwrite(&buffer, sizeof(buffer[0]), buflen, ofile);
    if (retval != buflen) {
        fprintf(stderr, "Couldn't write buffer to file. Return val %d\n", retval);
    }

    exit(EXIT_SUCCESS);
}
