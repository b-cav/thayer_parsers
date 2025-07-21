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

static void zero_t__parseSelf(zero_t_ *instance, PState *pstate);
static void zero_t__unparseSelf(const zero_t_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const zero_t_ zero_t__compute_offsets;

static const size_t zero_t__childrenOffsets[1] = {
    (const char *)&zero_t__compute_offsets.zero_t - (const char *)&zero_t__compute_offsets
};

static const ERD zero_t_ERD = {
    {
        NULL, // namedQName.prefix
        "zero_t", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, // numChildren
    zero_t__childrenOffsets,
    NULL, // childrenERDs
    (ERDParseSelf)&zero_t__parseSelf,
    (ERDUnparseSelf)&zero_t__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
zero_t__initERD(zero_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &zero_t_ERD;
    instance->_base.parent = parent;
}

static void
zero_t__parseSelf(zero_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->zero_t, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_zero_t[] = {48};
    validate_integer_enumeration(instance->zero_t, 1, enums_zero_t, "zero_t", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
zero_t__unparseSelf(const zero_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->zero_t, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_zero_t[] = {48};
    validate_integer_enumeration(instance->zero_t, 1, enums_zero_t, "zero_t", &ustate->pu);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static zero_t_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        zero_t__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
