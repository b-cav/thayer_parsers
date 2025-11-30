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

typedef struct IdleByte_
{
    InfosetBase _base;
    uint8_t     First;
    uint8_t     Second;
    uint8_t     Third;
    uint8_t     Fourth;
    uint8_t     Fifth;
    uint8_t     Sixth;
    uint8_t     Seventh;
    uint8_t     Eighth;
} IdleByte_;

#endif // GENERATED_CODE_H
