// auto-maintained by iwyu
// clang-format off
#include "generated_code.h"
#include <stdbool.h>    // for false, bool, true
#include <stddef.h>     // for NULL, size_t
#include <string.h>     // for memcmp, memset
#include "errors.h"     // for Error, PState, UState, ERR_CHOICE_KEY, Error::(anonymous), UNUSED
#include "parsers.h"    // for alloc_hexBinary, parse_hexBinary, parse_be_float, parse_be_int16, parse_be_bool32, parse_be_bool16, parse_be_int32, parse_be_uint16, parse_be_uint32, parse_le_bool32, parse_le_int64, parse_le_uint16, parse_le_uint8, parse_be_bool8, parse_be_double, parse_be_int64, parse_be_int8, parse_be_uint64, parse_be_uint8, parse_le_bool16, parse_le_bool8, parse_le_double, parse_le_float, parse_le_int16, parse_le_int32, parse_le_int8, parse_le_uint32, parse_le_uint64
#include "unparsers.h"  // for unparse_hexBinary, unparse_be_float, unparse_be_int16, unparse_be_bool32, unparse_be_bool16, unparse_be_int32, unparse_be_uint16, unparse_be_uint32, unparse_le_bool32, unparse_le_int64, unparse_le_uint16, unparse_le_uint8, unparse_be_bool8, unparse_be_double, unparse_be_int64, unparse_be_int8, unparse_be_uint64, unparse_be_uint8, unparse_le_bool16, unparse_le_bool8, unparse_le_double, unparse_le_float, unparse_le_int16, unparse_le_int32, unparse_le_int8, unparse_le_uint32, unparse_le_uint64
#include "validators.h" // for validate_array_bounds, validate_fixed_attribute, validate_floatpt_enumeration, validate_integer_enumeration, validate_schema_range
// clang-format on

// Declare prototypes for easier compilation

static void PrimaryHeader_SpacePacket__parseSelf(PrimaryHeader_SpacePacket_ *instance, PState *pstate);
static void PrimaryHeader_SpacePacket__unparseSelf(const PrimaryHeader_SpacePacket_ *instance, UState *ustate);
static void SecondaryHeader_PacketDataField_SpacePacket__parseSelf(SecondaryHeader_PacketDataField_SpacePacket_ *instance, PState *pstate);
static void SecondaryHeader_PacketDataField_SpacePacket__unparseSelf(const SecondaryHeader_PacketDataField_SpacePacket_ *instance, UState *ustate);
static void array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__parseSelf(PacketDataField_SpacePacket_ *instance, PState *pstate);
static void array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__unparseSelf(const PacketDataField_SpacePacket_ *instance, UState *ustate);
static size_t array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__getArraySize(const PacketDataField_SpacePacket_ *instance);
static void UserDataField_PacketDataField_SpacePacket__parseSelf(UserDataField_PacketDataField_SpacePacket_ *instance, PState *pstate);
static void UserDataField_PacketDataField_SpacePacket__unparseSelf(const UserDataField_PacketDataField_SpacePacket_ *instance, UState *ustate);
static void PacketDataField_SpacePacket__parseSelf(PacketDataField_SpacePacket_ *instance, PState *pstate);
static void PacketDataField_SpacePacket__unparseSelf(const PacketDataField_SpacePacket_ *instance, UState *ustate);
static void SpacePacket__parseSelf(SpacePacket_ *instance, PState *pstate);
static void SpacePacket__unparseSelf(const SpacePacket_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD Version_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "Version", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Type_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "Type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SecondaryHeaderFlag_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SecondaryHeaderFlag", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD APID_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "APID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SequenceFlags_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SequenceFlags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SequenceCount_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SequenceCount", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD PacketDataLength_PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "PacketDataLength", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const PrimaryHeader_SpacePacket_ PrimaryHeader_SpacePacket__compute_offsets;

static const size_t PrimaryHeader_SpacePacket__childrenOffsets[7] = {
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.Version - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.Type - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.SecondaryHeaderFlag - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.APID - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.SequenceFlags - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.SequenceCount - (const char *)&PrimaryHeader_SpacePacket__compute_offsets,
    (const char *)&PrimaryHeader_SpacePacket__compute_offsets.PacketDataLength - (const char *)&PrimaryHeader_SpacePacket__compute_offsets
};

static const ERD *const PrimaryHeader_SpacePacket__childrenERDs[7] = {
    &Version_PrimaryHeader_SpacePacket_ERD,
    &Type_PrimaryHeader_SpacePacket_ERD,
    &SecondaryHeaderFlag_PrimaryHeader_SpacePacket_ERD,
    &APID_PrimaryHeader_SpacePacket_ERD,
    &SequenceFlags_PrimaryHeader_SpacePacket_ERD,
    &SequenceCount_PrimaryHeader_SpacePacket_ERD,
    &PacketDataLength_PrimaryHeader_SpacePacket_ERD
};

static const ERD PrimaryHeader_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "PrimaryHeader", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    PrimaryHeader_SpacePacket__childrenOffsets,
    PrimaryHeader_SpacePacket__childrenERDs,
    (ERDParseSelf)&PrimaryHeader_SpacePacket__parseSelf,
    (ERDUnparseSelf)&PrimaryHeader_SpacePacket__unparseSelf,
    {.initChoice = NULL}
};

static const ERD Octet_SecondaryHeader_PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "Octet", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const SecondaryHeader_PacketDataField_SpacePacket_ SecondaryHeader_PacketDataField_SpacePacket__compute_offsets;

static const size_t SecondaryHeader_PacketDataField_SpacePacket__childrenOffsets[1] = {
    (const char *)&SecondaryHeader_PacketDataField_SpacePacket__compute_offsets.Octet[0] - (const char *)&SecondaryHeader_PacketDataField_SpacePacket__compute_offsets
};

static const ERD *const SecondaryHeader_PacketDataField_SpacePacket__childrenERDs[1] = {
    &array_Octet_SecondaryHeader_PacketDataField_SpacePacket_SecondaryHeader_PacketDataField_SpacePacket_ERD
};

static const ERD SecondaryHeader_PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SecondaryHeader", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    SecondaryHeader_PacketDataField_SpacePacket__childrenOffsets,
    SecondaryHeader_PacketDataField_SpacePacket__childrenERDs,
    (ERDParseSelf)&SecondaryHeader_PacketDataField_SpacePacket__parseSelf,
    (ERDUnparseSelf)&SecondaryHeader_PacketDataField_SpacePacket__unparseSelf,
    {.initChoice = NULL}
};

static const PacketDataField_SpacePacket_ array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__compute_offsets;

static const size_t array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__childrenOffsets[1] = {
    (const char *)&array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__compute_offsets.SecondaryHeader[1] - (const char *)&array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__compute_offsets.SecondaryHeader[0]
};

static const ERD *const array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__childrenERDs[1] = {
    &SecondaryHeader_PacketDataField_SpacePacket_ERD
};

static const ERD array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SecondaryHeader", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__childrenOffsets,
    array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__childrenERDs,
    (ERDParseSelf)&array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__parseSelf,
    (ERDUnparseSelf)&array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__unparseSelf,
    {.getArraySize = (GetArraySize)&array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__getArraySize}
};

static const ERD Octet_UserDataField_PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "Octet", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const UserDataField_PacketDataField_SpacePacket_ UserDataField_PacketDataField_SpacePacket__compute_offsets;

static const size_t UserDataField_PacketDataField_SpacePacket__childrenOffsets[1] = {
    (const char *)&UserDataField_PacketDataField_SpacePacket__compute_offsets.Octet[0] - (const char *)&UserDataField_PacketDataField_SpacePacket__compute_offsets
};

static const ERD *const UserDataField_PacketDataField_SpacePacket__childrenERDs[1] = {
    &array_Octet_UserDataField_PacketDataField_SpacePacket_UserDataField_PacketDataField_SpacePacket_ERD
};

static const ERD UserDataField_PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "UserDataField", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    UserDataField_PacketDataField_SpacePacket__childrenOffsets,
    UserDataField_PacketDataField_SpacePacket__childrenERDs,
    (ERDParseSelf)&UserDataField_PacketDataField_SpacePacket__parseSelf,
    (ERDUnparseSelf)&UserDataField_PacketDataField_SpacePacket__unparseSelf,
    {.initChoice = NULL}
};

static const PacketDataField_SpacePacket_ PacketDataField_SpacePacket__compute_offsets;

static const size_t PacketDataField_SpacePacket__childrenOffsets[2] = {
    (const char *)&PacketDataField_SpacePacket__compute_offsets.SecondaryHeader[0] - (const char *)&PacketDataField_SpacePacket__compute_offsets,
    (const char *)&PacketDataField_SpacePacket__compute_offsets.UserDataField[0] - (const char *)&PacketDataField_SpacePacket__compute_offsets
};

static const ERD *const PacketDataField_SpacePacket__childrenERDs[2] = {
    &array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket_ERD,
    &array_UserDataField_PacketDataField_SpacePacket_PacketDataField_SpacePacket_ERD
};

static const ERD PacketDataField_SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "PacketDataField", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    PacketDataField_SpacePacket__childrenOffsets,
    PacketDataField_SpacePacket__childrenERDs,
    (ERDParseSelf)&PacketDataField_SpacePacket__parseSelf,
    (ERDUnparseSelf)&PacketDataField_SpacePacket__unparseSelf,
    {.initChoice = NULL}
};

static const SpacePacket_ SpacePacket__compute_offsets;

static const size_t SpacePacket__childrenOffsets[2] = {
    (const char *)&SpacePacket__compute_offsets.PrimaryHeader - (const char *)&SpacePacket__compute_offsets,
    (const char *)&SpacePacket__compute_offsets.PacketDataField - (const char *)&SpacePacket__compute_offsets
};

static const ERD *const SpacePacket__childrenERDs[2] = {
    &PrimaryHeader_SpacePacket_ERD,
    &PacketDataField_SpacePacket_ERD
};

static const ERD SpacePacket_ERD = {
    {
        NULL, // namedQName.prefix
        "SpacePacket", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    SpacePacket__childrenOffsets,
    SpacePacket__childrenERDs,
    (ERDParseSelf)&SpacePacket__parseSelf,
    (ERDUnparseSelf)&SpacePacket__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
PrimaryHeader_SpacePacket__initERD(PrimaryHeader_SpacePacket_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &PrimaryHeader_SpacePacket_ERD;
    instance->_base.parent = parent;
}

static void
PrimaryHeader_SpacePacket__parseSelf(PrimaryHeader_SpacePacket_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->Version, 3, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Version <= 0, "Version", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Type, 1, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->SecondaryHeaderFlag, 1, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->APID, 11, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->SequenceFlags, 2, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->SequenceCount, 14, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->PacketDataLength, 16, pstate);
    if (pstate->pu.error) return;
}

static void
PrimaryHeader_SpacePacket__unparseSelf(const PrimaryHeader_SpacePacket_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->Version, 3, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Version <= 0, "Version", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Type, 1, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->SecondaryHeaderFlag, 1, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->APID, 11, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->SequenceFlags, 2, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->SequenceCount, 14, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->PacketDataLength, 16, ustate);
    if (ustate->pu.error) return;
}

static void
SecondaryHeader_PacketDataField_SpacePacket__initERD(SecondaryHeader_PacketDataField_SpacePacket_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &SecondaryHeader_PacketDataField_SpacePacket_ERD;
    instance->_base.parent = parent;
    instance->Octet.array = instance->_a_Octet;
    instance->Octet.lengthInBytes = sizeof(instance->_a_Octet);
    instance->Octet.dynamic = false;
}

static void
SecondaryHeader_PacketDataField_SpacePacket__parseSelf(SecondaryHeader_PacketDataField_SpacePacket_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->Octet, pstate);
    if (pstate->pu.error) return;
}

static void
SecondaryHeader_PacketDataField_SpacePacket__unparseSelf(const SecondaryHeader_PacketDataField_SpacePacket_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->Octet, ustate);
    if (ustate->pu.error) return;
}

static void
array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__initERD(PacketDataField_SpacePacket_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        SecondaryHeader_PacketDataField_SpacePacket__initERD(&instance->SecondaryHeader[i], (InfosetBase *)instance);
    }
}

static void
array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__parseSelf(PacketDataField_SpacePacket_ *instance, PState *pstate)
{
    const size_t arraySize = array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__getArraySize(instance);
    validate_array_bounds("array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        SecondaryHeader_PacketDataField_SpacePacket__parseSelf(&instance->SecondaryHeader[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__unparseSelf(const PacketDataField_SpacePacket_ *instance, UState *ustate)
{
    const size_t arraySize = array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__getArraySize(instance);
    validate_array_bounds("array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        SecondaryHeader_PacketDataField_SpacePacket__unparseSelf(&instance->SecondaryHeader[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__getArraySize(const PacketDataField_SpacePacket_ *instance)
{
    UNUSED(instance);
    return ((SpacePacket_ *)instance->_base.parent)->PrimaryHeader.SecondaryHeaderFlag;
}

static void
UserDataField_PacketDataField_SpacePacket__initERD(UserDataField_PacketDataField_SpacePacket_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &UserDataField_PacketDataField_SpacePacket_ERD;
    instance->_base.parent = parent;
    instance->Octet.array = instance->_a_Octet;
    instance->Octet.lengthInBytes = sizeof(instance->_a_Octet);
    instance->Octet.dynamic = false;
}

static void
UserDataField_PacketDataField_SpacePacket__parseSelf(UserDataField_PacketDataField_SpacePacket_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->Octet, pstate);
    if (pstate->pu.error) return;
}

static void
UserDataField_PacketDataField_SpacePacket__unparseSelf(const UserDataField_PacketDataField_SpacePacket_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->Octet, ustate);
    if (ustate->pu.error) return;
}

static void
PacketDataField_SpacePacket__initERD(PacketDataField_SpacePacket_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &PacketDataField_SpacePacket_ERD;
    instance->_base.parent = parent;
    array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__initERD(instance, parent);
    UserDataField_PacketDataField_SpacePacket__initERD(&instance->UserDataField, (InfosetBase *)instance);
}

static void
PacketDataField_SpacePacket__parseSelf(PacketDataField_SpacePacket_ *instance, PState *pstate)
{
    array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    UserDataField_PacketDataField_SpacePacket__parseSelf(&instance->UserDataField, pstate);
    if (pstate->pu.error) return;
}

static void
PacketDataField_SpacePacket__unparseSelf(const PacketDataField_SpacePacket_ *instance, UState *ustate)
{
    array_SecondaryHeader_PacketDataField_SpacePacket_PacketDataField_SpacePacket__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    UserDataField_PacketDataField_SpacePacket__unparseSelf(&instance->UserDataField, ustate);
    if (ustate->pu.error) return;
}

static void
SpacePacket__initERD(SpacePacket_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &SpacePacket_ERD;
    instance->_base.parent = parent;
    PrimaryHeader_SpacePacket__initERD(&instance->PrimaryHeader, (InfosetBase *)instance);
    PacketDataField_SpacePacket__initERD(&instance->PacketDataField, (InfosetBase *)instance);
}

static void
SpacePacket__parseSelf(SpacePacket_ *instance, PState *pstate)
{
    PrimaryHeader_SpacePacket__parseSelf(&instance->PrimaryHeader, pstate);
    if (pstate->pu.error) return;
    PacketDataField_SpacePacket__parseSelf(&instance->PacketDataField, pstate);
    if (pstate->pu.error) return;
}

static void
SpacePacket__unparseSelf(const SpacePacket_ *instance, UState *ustate)
{
    PrimaryHeader_SpacePacket__unparseSelf(&instance->PrimaryHeader, ustate);
    if (ustate->pu.error) return;
    PacketDataField_SpacePacket__unparseSelf(&instance->PacketDataField, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static SpacePacket_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        SpacePacket__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
