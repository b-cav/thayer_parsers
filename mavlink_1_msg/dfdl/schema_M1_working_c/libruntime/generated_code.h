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

typedef struct message_
{
    InfosetBase _base;
    HexBinary   stx;
    uint8_t     _a_stx[1];
    uint8_t     len;
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
} message_;

#endif // GENERATED_CODE_H
