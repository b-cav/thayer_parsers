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

typedef struct MV1_0_Header_SP_Message_
{
    InfosetBase _base;
    uint8_t     Version;
    uint8_t     Payload_Length;
    uint8_t     Packet_Sequence;
    uint8_t     System_ID;
    uint8_t     Component_ID;
    uint8_t     Message_ID;
} MV1_0_Header_SP_Message_;

typedef struct MV2_0_Header_SP_Message_
{
    InfosetBase _base;
    uint8_t     Version;
    uint8_t     Payload_Length;
    uint8_t     Incomp_Flag;
    uint8_t     Comp_Flag;
    uint8_t     Packet_Sequence;
    uint8_t     System_ID;
    uint8_t     Component_ID;
    uint32_t    Message_ID;
} MV2_0_Header_SP_Message_;

typedef struct SCALED_PRESSURE_SP_Message_
{
    InfosetBase _base;
    uint32_t    time_boot_ms;
    uint32_t    press_abs;
    uint32_t    press_diff;
    uint16_t    temperature;
    uint16_t    temperature_press_diff;
} SCALED_PRESSURE_SP_Message_;

typedef struct SP_Message_
{
    InfosetBase _base;
    MV1_0_Header_SP_Message_ MV1_0_Header;
    MV2_0_Header_SP_Message_ MV2_0_Header;
    SCALED_PRESSURE_SP_Message_ SCALED_PRESSURE;
} SP_Message_;

#endif // GENERATED_CODE_H
