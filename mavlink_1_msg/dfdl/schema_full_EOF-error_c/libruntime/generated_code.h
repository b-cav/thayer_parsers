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

typedef struct sp_M1_message_t_
{
    InfosetBase _base;
    HexBinary   stx;
    uint8_t     _a_stx[1];
    HexBinary   len;
    uint8_t     _a_len[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   msgid;
    uint8_t     _a_msgid[1];
    HexBinary   payload;
    uint8_t     _a_payload[14];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
} sp_M1_message_t_;

typedef struct checksum_and_signature_sp_M2_t_
{
    InfosetBase _base;
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
    HexBinary   signature;
    uint8_t     _a_signature[13];
} checksum_and_signature_sp_M2_t_;

typedef struct sp_M2_message_t_
{
    InfosetBase _base;
    HexBinary   stx;
    uint8_t     _a_stx[1];
    HexBinary   len_1;
    uint8_t     _a_len_1[1];
    HexBinary   len_2;
    uint8_t     _a_len_2[1];
    HexBinary   len_3;
    uint8_t     _a_len_3[1];
    HexBinary   len_4;
    uint8_t     _a_len_4[1];
    HexBinary   len_5;
    uint8_t     _a_len_5[1];
    HexBinary   len_6;
    uint8_t     _a_len_6[1];
    HexBinary   len_7;
    uint8_t     _a_len_7[1];
    HexBinary   len_8;
    uint8_t     _a_len_8[1];
    HexBinary   len_9;
    uint8_t     _a_len_9[1];
    HexBinary   len_10;
    uint8_t     _a_len_10[1];
    HexBinary   len_11;
    uint8_t     _a_len_11[1];
    HexBinary   len_12;
    uint8_t     _a_len_12[1];
    HexBinary   len_13;
    uint8_t     _a_len_13[1];
    HexBinary   len_14;
    uint8_t     _a_len_14[1];
    HexBinary   len_15;
    uint8_t     _a_len_15[1];
    HexBinary   len_16;
    uint8_t     _a_len_16[1];
    HexBinary   incompat_flags_us;
    uint8_t     _a_incompat_flags_us[1];
    HexBinary   incompat_flags_s;
    uint8_t     _a_incompat_flags_s[1];
    HexBinary   compat_flags;
    uint8_t     _a_compat_flags[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   msgid;
    uint8_t     _a_msgid[3];
    HexBinary   payload_1;
    uint8_t     _a_payload_1[1];
    HexBinary   payload_2;
    uint8_t     _a_payload_2[2];
    HexBinary   payload_3;
    uint8_t     _a_payload_3[3];
    HexBinary   payload_4;
    uint8_t     _a_payload_4[4];
    HexBinary   payload_5;
    uint8_t     _a_payload_5[5];
    HexBinary   payload_6;
    uint8_t     _a_payload_6[6];
    HexBinary   payload_7;
    uint8_t     _a_payload_7[7];
    HexBinary   payload_8;
    uint8_t     _a_payload_8[8];
    HexBinary   payload_9;
    uint8_t     _a_payload_9[9];
    HexBinary   payload_10;
    uint8_t     _a_payload_10[10];
    HexBinary   payload_11;
    uint8_t     _a_payload_11[11];
    HexBinary   payload_12;
    uint8_t     _a_payload_12[12];
    HexBinary   payload_13;
    uint8_t     _a_payload_13[13];
    HexBinary   payload_14;
    uint8_t     _a_payload_14[14];
    HexBinary   payload_15;
    uint8_t     _a_payload_15[15];
    HexBinary   payload_16;
    uint8_t     _a_payload_16[16];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
    checksum_and_signature_sp_M2_t_ checksum_and_signature;
} sp_M2_message_t_;

typedef struct message_
{
    InfosetBase _base;
    sp_M1_message_t_ sp_M1;
    sp_M2_message_t_ sp_M2;
} message_;

#endif // GENERATED_CODE_H
