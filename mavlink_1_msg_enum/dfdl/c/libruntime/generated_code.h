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

typedef struct M1_hb_PL_M1_hb_t_
{
    InfosetBase _base;
    HexBinary   hb_PL_cust;
    uint8_t     _a_hb_PL_cust[4];
    uint8_t     hb_PL_type;
    uint8_t     hb_PL_auto;
    HexBinary   hb_PL_base;
    uint8_t     _a_hb_PL_base[1];
    uint8_t     hb_PL_stat;
    HexBinary   hb_PL_mvrs;
    uint8_t     _a_hb_PL_mvrs[1];
} M1_hb_PL_M1_hb_t_;

typedef struct M1_hb_message_t_
{
    InfosetBase _base;
    HexBinary   len;
    uint8_t     _a_len[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   M1_msgid;
    uint8_t     _a_M1_msgid[1];
    M1_hb_PL_M1_hb_t_ M1_hb_PL[1];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
} M1_hb_message_t_;

typedef struct M2_hb_PL_L09_M2_hb_t_
{
    InfosetBase _base;
    HexBinary   hb_PL_cust;
    uint8_t     _a_hb_PL_cust[4];
    uint8_t     hb_PL_type;
    uint8_t     hb_PL_auto;
    HexBinary   hb_PL_base;
    uint8_t     _a_hb_PL_base[1];
    uint8_t     hb_PL_stat;
    HexBinary   hb_PL_mvrs;
    uint8_t     _a_hb_PL_mvrs[1];
} M2_hb_PL_L09_M2_hb_t_;

typedef struct M2_hb_message_t_
{
    InfosetBase _base;
    HexBinary   len;
    uint8_t     _a_len[1];
    HexBinary   inc_flags;
    uint8_t     _a_inc_flags[1];
    HexBinary   comp_flags;
    uint8_t     _a_comp_flags[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   M2_msgid;
    uint8_t     _a_M2_msgid[3];
    M2_hb_PL_L09_M2_hb_t_ M2_hb_PL_L09[1];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
    HexBinary   signature[1];
    uint8_t     _a_signature[1][13];
} M2_hb_message_t_;

typedef struct message_
{
    InfosetBase _base;
    HexBinary   stx;
    uint8_t     _a_stx[1];
    M1_hb_message_t_ M1_hb[1];
    M2_hb_message_t_ M2_hb[1];
} message_;

#endif // GENERATED_CODE_H
