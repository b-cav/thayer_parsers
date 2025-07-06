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

typedef struct PrimaryHeader_
{
    InfosetBase _base;
    uint8_t     Version;
    uint8_t     Type;
    uint8_t     SecondaryHeaderFlag;
    uint16_t    APID;
    uint8_t     SequenceFlags;
    uint16_t    SequenceCount;
    uint16_t    PacketDataLength;
} PrimaryHeader_;

#endif // GENERATED_CODE_H
