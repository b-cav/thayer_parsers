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

static void IdleByte__parseSelf(IdleByte_ *instance, PState *pstate);
static void IdleByte__unparseSelf(const IdleByte_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD First_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "First", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Second_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Second", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Third_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Third", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Fourth_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Fourth", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Fifth_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Fifth", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Sixth_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Sixth", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Seventh_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Seventh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Eighth_IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "Eighth", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const IdleByte_ IdleByte__compute_offsets;

static const size_t IdleByte__childrenOffsets[8] = {
    (const char *)&IdleByte__compute_offsets.First - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Second - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Third - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Fourth - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Fifth - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Sixth - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Seventh - (const char *)&IdleByte__compute_offsets,
    (const char *)&IdleByte__compute_offsets.Eighth - (const char *)&IdleByte__compute_offsets
};

static const ERD *const IdleByte__childrenERDs[8] = {
    &First_IdleByte_ERD,
    &Second_IdleByte_ERD,
    &Third_IdleByte_ERD,
    &Fourth_IdleByte_ERD,
    &Fifth_IdleByte_ERD,
    &Sixth_IdleByte_ERD,
    &Seventh_IdleByte_ERD,
    &Eighth_IdleByte_ERD
};

static const ERD IdleByte_ERD = {
    {
        NULL, // namedQName.prefix
        "IdleByte", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
    IdleByte__childrenOffsets,
    IdleByte__childrenERDs,
    (ERDParseSelf)&IdleByte__parseSelf,
    (ERDUnparseSelf)&IdleByte__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
IdleByte__initERD(IdleByte_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &IdleByte_ERD;
    instance->_base.parent = parent;
}

static void
IdleByte__parseSelf(IdleByte_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->First, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->First >= 1, "First", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Second, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Second <= 0, "Second", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Third, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Third >= 1, "Third", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Fourth, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Fourth <= 0, "Fourth", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Fifth, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Fifth >= 1, "Fifth", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Sixth, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Sixth <= 0, "Sixth", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Seventh, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Seventh >= 1, "Seventh", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Eighth, 1, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->Eighth <= 0, "Eighth", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
IdleByte__unparseSelf(const IdleByte_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->First, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->First >= 1, "First", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Second, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Second <= 0, "Second", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Third, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Third >= 1, "Third", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Fourth, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Fourth <= 0, "Fourth", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Fifth, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Fifth >= 1, "Fifth", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Sixth, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Sixth <= 0, "Sixth", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Seventh, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Seventh >= 1, "Seventh", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Eighth, 1, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->Eighth <= 0, "Eighth", &ustate->pu);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static IdleByte_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        IdleByte__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
