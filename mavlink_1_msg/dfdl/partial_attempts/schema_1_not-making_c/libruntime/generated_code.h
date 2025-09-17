#ifndef GENERATED_CODE_H
#define GENERATED_CODE_H

// auto-maintained by iwyu
// clang-format off
#include <stdbool.h>  // for bool
#include <stddef.h>   // for size_t
#include <stdint.h>   // for uint8_t, int16_t, int32_t, int64_t, uint32_t, int8_t, uint16_t, uint64_t
#include "infoset.h"  // for InfosetBase, HexBinary
// clang-format on

// Define schema version (will be empty if schema did not define any version string)

extern const char *schema_version;

// Define infoset structures

typedef struct header_spM1_t_
{
    InfosetBase _base;
    HexBinary   MAV1CODE;
    uint8_t     _a_MAV1CODE[1];
    uint8_t     lengthM1;
    HexBinary   packetSequence;
    uint8_t     _a_packetSequence[1];
    HexBinary   sysID;
    uint8_t     _a_sysID[1];
    HexBinary   compID;
    uint8_t     _a_compID[1];
    HexBinary   messageID;
    uint8_t     _a_messageID[1];
} header_spM1_t_;

typedef struct payload_spM1_t_
{
    InfosetBase _base;
    HexBinary   payload[1];
    uint8_t     _a_payload[1][1];
} payload_spM1_t_;

typedef struct P_
{
    InfosetBase _base;
    header_spM1_t_ header;
    payload_spM1_t_ payload;
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
} P_;

#endif // GENERATED_CODE_H
