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

typedef struct PrimaryHeader_SpacePacket_
{
    InfosetBase _base;
    uint8_t     Version;
    uint8_t     Type;
    uint8_t     SecondaryHeaderFlag;
    uint16_t    APID;
    uint8_t     SequenceFlags;
    uint16_t    SequenceCount;
    uint16_t    PacketDataLength;
} PrimaryHeader_SpacePacket_;

typedef struct SecondaryHeader_PacketDataField_SpacePacket_
{
    InfosetBase _base;
    HexBinary   Octet[65536];
    uint8_t     _a_Octet[65536][1];
} SecondaryHeader_PacketDataField_SpacePacket_;

typedef struct UserDataField_PacketDataField_SpacePacket_
{
    InfosetBase _base;
    HexBinary   Octet[65536];
    uint8_t     _a_Octet[65536][1];
} UserDataField_PacketDataField_SpacePacket_;

typedef struct PacketDataField_SpacePacket_
{
    InfosetBase _base;
    SecondaryHeader_PacketDataField_SpacePacket_ SecondaryHeader[1];
    UserDataField_PacketDataField_SpacePacket_ UserDataField[1];
} PacketDataField_SpacePacket_;

typedef struct SpacePacket_
{
    InfosetBase _base;
    PrimaryHeader_SpacePacket_ PrimaryHeader;
    PacketDataField_SpacePacket_ PacketDataField;
} SpacePacket_;

#endif // GENERATED_CODE_H
