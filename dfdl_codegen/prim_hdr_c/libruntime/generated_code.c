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

static void PrimaryHeader__parseSelf(PrimaryHeader_ *instance, PState *pstate);
static void PrimaryHeader__unparseSelf(const PrimaryHeader_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD Version_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "Version", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Type_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "Type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SecondaryHeaderFlag_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "SecondaryHeaderFlag", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD APID_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "APID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SequenceFlags_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "SequenceFlags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD SequenceCount_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "SequenceCount", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD PacketDataLength_PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "PacketDataLength", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const PrimaryHeader_ PrimaryHeader__compute_offsets;

static const size_t PrimaryHeader__childrenOffsets[7] = {
    (const char *)&PrimaryHeader__compute_offsets.Version - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.Type - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.SecondaryHeaderFlag - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.APID - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.SequenceFlags - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.SequenceCount - (const char *)&PrimaryHeader__compute_offsets,
    (const char *)&PrimaryHeader__compute_offsets.PacketDataLength - (const char *)&PrimaryHeader__compute_offsets
};

static const ERD *const PrimaryHeader__childrenERDs[7] = {
    &Version_PrimaryHeader_ERD,
    &Type_PrimaryHeader_ERD,
    &SecondaryHeaderFlag_PrimaryHeader_ERD,
    &APID_PrimaryHeader_ERD,
    &SequenceFlags_PrimaryHeader_ERD,
    &SequenceCount_PrimaryHeader_ERD,
    &PacketDataLength_PrimaryHeader_ERD
};

static const ERD PrimaryHeader_ERD = {
    {
        NULL, // namedQName.prefix
        "PrimaryHeader", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    PrimaryHeader__childrenOffsets,
    PrimaryHeader__childrenERDs,
    (ERDParseSelf)&PrimaryHeader__parseSelf,
    (ERDUnparseSelf)&PrimaryHeader__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
PrimaryHeader__initERD(PrimaryHeader_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &PrimaryHeader_ERD;
    instance->_base.parent = parent;
}

static void
PrimaryHeader__parseSelf(PrimaryHeader_ *instance, PState *pstate)
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
PrimaryHeader__unparseSelf(const PrimaryHeader_ *instance, UState *ustate)
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

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static PrimaryHeader_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        PrimaryHeader__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
