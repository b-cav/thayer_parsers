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

static void message__parseSelf(message_ *instance, PState *pstate);
static void message__unparseSelf(const message_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD stx_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "stx_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD stx_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "stx_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD NL_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "NL", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const message_ message__compute_offsets;

static const size_t message__childrenOffsets[3] = {
    (const char *)&message__compute_offsets.stx_M1 - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.stx_M2 - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.NL - (const char *)&message__compute_offsets
};

static const ERD *const message__childrenERDs[3] = {
    &stx_M1_message_t_ERD,
    &stx_M2_message_t_ERD,
    &NL_message_t_ERD
};

static const ERD message_ERD = {
    {
        NULL, // namedQName.prefix
        "message", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    message__childrenOffsets,
    message__childrenERDs,
    (ERDParseSelf)&message__parseSelf,
    (ERDUnparseSelf)&message__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
message__initERD(message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &message_ERD;
    instance->_base.parent = parent;
    instance->stx_M1.array = instance->_a_stx_M1;
    instance->stx_M1.lengthInBytes = sizeof(instance->_a_stx_M1);
    instance->stx_M1.dynamic = false;
    instance->stx_M2.array = instance->_a_stx_M2;
    instance->stx_M2.lengthInBytes = sizeof(instance->_a_stx_M2);
    instance->stx_M2.dynamic = false;
    instance->NL.array = instance->_a_NL;
    instance->NL.lengthInBytes = sizeof(instance->_a_NL);
    instance->NL.dynamic = false;
}

static void
message__parseSelf(message_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->stx_M1, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx_M1[][1] = {{0xFE}};
    HexBinary enums_stx_M1[] = {{arrays_stx_M1[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx_M1, 1, enums_stx_M1, "stx_M1", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->stx_M2, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx_M2[][1] = {{0xFD}};
    HexBinary enums_stx_M2[] = {{arrays_stx_M2[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx_M2, 1, enums_stx_M2, "stx_M2", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->NL, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_NL[][1] = {{0x0A}};
    HexBinary enums_NL[] = {{arrays_NL[0], 1, false}};
    validate_hexbinary_enumeration(&instance->NL, 1, enums_NL, "NL", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
message__unparseSelf(const message_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->stx_M1, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx_M1[][1] = {{0xFE}};
    HexBinary enums_stx_M1[] = {{arrays_stx_M1[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx_M1, 1, enums_stx_M1, "stx_M1", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->stx_M2, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx_M2[][1] = {{0xFD}};
    HexBinary enums_stx_M2[] = {{arrays_stx_M2[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx_M2, 1, enums_stx_M2, "stx_M2", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->NL, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_NL[][1] = {{0x0A}};
    HexBinary enums_NL[] = {{arrays_NL[0], 1, false}};
    validate_hexbinary_enumeration(&instance->NL, 1, enums_NL, "NL", &ustate->pu);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static message_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        message__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
