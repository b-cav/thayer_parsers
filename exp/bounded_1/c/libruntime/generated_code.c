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

static void digit_integer_t__parseSelf(digit_integer_t_ *instance, PState *pstate);
static void digit_integer_t__unparseSelf(const digit_integer_t_ *instance, UState *ustate);
static void integer_number_t__parseSelf(integer_number_t_ *instance, PState *pstate);
static void integer_number_t__unparseSelf(const integer_number_t_ *instance, UState *ustate);
static void digit_fraction_t__parseSelf(digit_fraction_t_ *instance, PState *pstate);
static void digit_fraction_t__unparseSelf(const digit_fraction_t_ *instance, UState *ustate);
static void fraction_number_t__parseSelf(fraction_number_t_ *instance, PState *pstate);
static void fraction_number_t__unparseSelf(const fraction_number_t_ *instance, UState *ustate);
static void sign_exponent_t__parseSelf(sign_exponent_t_ *instance, PState *pstate);
static void sign_exponent_t__unparseSelf(const sign_exponent_t_ *instance, UState *ustate);
static void digit_exponent_t__parseSelf(digit_exponent_t_ *instance, PState *pstate);
static void digit_exponent_t__unparseSelf(const digit_exponent_t_ *instance, UState *ustate);
static void exponent_number_t__parseSelf(exponent_number_t_ *instance, PState *pstate);
static void exponent_number_t__unparseSelf(const exponent_number_t_ *instance, UState *ustate);
static void JSON_number__parseSelf(JSON_number_ *instance, PState *pstate);
static void JSON_number__unparseSelf(const JSON_number_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD minus_integer_t_ERD = {
    {
        NULL, // namedQName.prefix
        "minus", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD zero_integer_t_ERD = {
    {
        NULL, // namedQName.prefix
        "zero", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD onenine_integer_t_ERD = {
    {
        NULL, // namedQName.prefix
        "onenine", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD zero_digit_t_ERD = {
    {
        NULL, // namedQName.prefix
        "zero", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD onenine_digit_t_ERD = {
    {
        NULL, // namedQName.prefix
        "onenine", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const digit_integer_t_ digit_integer_t__compute_offsets;

static const size_t digit_integer_t__childrenOffsets[2] = {
    (const char *)&digit_integer_t__compute_offsets.zero - (const char *)&digit_integer_t__compute_offsets,
    (const char *)&digit_integer_t__compute_offsets.onenine - (const char *)&digit_integer_t__compute_offsets
};

static const ERD *const digit_integer_t__childrenERDs[2] = {
    &zero_digit_t_ERD,
    &onenine_digit_t_ERD
};

static const ERD digit_integer_t_ERD = {
    {
        NULL, // namedQName.prefix
        "digit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    digit_integer_t__childrenOffsets,
    digit_integer_t__childrenERDs,
    (ERDParseSelf)&digit_integer_t__parseSelf,
    (ERDUnparseSelf)&digit_integer_t__unparseSelf,
    {.initChoice = NULL}
};

static const integer_number_t_ integer_number_t__compute_offsets;

static const size_t integer_number_t__childrenOffsets[4] = {
    (const char *)&integer_number_t__compute_offsets.minus[0] - (const char *)&integer_number_t__compute_offsets,
    (const char *)&integer_number_t__compute_offsets.zero - (const char *)&integer_number_t__compute_offsets,
    (const char *)&integer_number_t__compute_offsets.onenine[0] - (const char *)&integer_number_t__compute_offsets,
    (const char *)&integer_number_t__compute_offsets.digit[0] - (const char *)&integer_number_t__compute_offsets
};

static const ERD *const integer_number_t__childrenERDs[4] = {
    &array_minus_integer_t_integer_number_t_ERD,
    &zero_integer_t_ERD,
    &array_onenine_integer_t_integer_number_t_ERD,
    &array_digit_integer_t_integer_number_t_ERD
};

static const ERD integer_number_t_ERD = {
    {
        NULL, // namedQName.prefix
        "integer", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    integer_number_t__childrenOffsets,
    integer_number_t__childrenERDs,
    (ERDParseSelf)&integer_number_t__parseSelf,
    (ERDUnparseSelf)&integer_number_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD dot_fraction_t_ERD = {
    {
        NULL, // namedQName.prefix
        "dot", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const digit_fraction_t_ digit_fraction_t__compute_offsets;

static const size_t digit_fraction_t__childrenOffsets[2] = {
    (const char *)&digit_fraction_t__compute_offsets.zero - (const char *)&digit_fraction_t__compute_offsets,
    (const char *)&digit_fraction_t__compute_offsets.onenine - (const char *)&digit_fraction_t__compute_offsets
};

static const ERD *const digit_fraction_t__childrenERDs[2] = {
    &zero_digit_t_ERD,
    &onenine_digit_t_ERD
};

static const ERD digit_fraction_t_ERD = {
    {
        NULL, // namedQName.prefix
        "digit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    digit_fraction_t__childrenOffsets,
    digit_fraction_t__childrenERDs,
    (ERDParseSelf)&digit_fraction_t__parseSelf,
    (ERDUnparseSelf)&digit_fraction_t__unparseSelf,
    {.initChoice = NULL}
};

static const fraction_number_t_ fraction_number_t__compute_offsets;

static const size_t fraction_number_t__childrenOffsets[2] = {
    (const char *)&fraction_number_t__compute_offsets.dot - (const char *)&fraction_number_t__compute_offsets,
    (const char *)&fraction_number_t__compute_offsets.digit[0] - (const char *)&fraction_number_t__compute_offsets
};

static const ERD *const fraction_number_t__childrenERDs[2] = {
    &dot_fraction_t_ERD,
    &array_digit_fraction_t_fraction_number_t_ERD
};

static const ERD fraction_number_t_ERD = {
    {
        NULL, // namedQName.prefix
        "fraction", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    fraction_number_t__childrenOffsets,
    fraction_number_t__childrenERDs,
    (ERDParseSelf)&fraction_number_t__parseSelf,
    (ERDUnparseSelf)&fraction_number_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD exp_exponent_t_ERD = {
    {
        NULL, // namedQName.prefix
        "exp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD minus_sign_t_ERD = {
    {
        NULL, // namedQName.prefix
        "minus", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD plus_sign_t_ERD = {
    {
        NULL, // namedQName.prefix
        "plus", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sign_exponent_t_ sign_exponent_t__compute_offsets;

static const size_t sign_exponent_t__childrenOffsets[2] = {
    (const char *)&sign_exponent_t__compute_offsets.minus - (const char *)&sign_exponent_t__compute_offsets,
    (const char *)&sign_exponent_t__compute_offsets.plus - (const char *)&sign_exponent_t__compute_offsets
};

static const ERD *const sign_exponent_t__childrenERDs[2] = {
    &minus_sign_t_ERD,
    &plus_sign_t_ERD
};

static const ERD sign_exponent_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sign", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    sign_exponent_t__childrenOffsets,
    sign_exponent_t__childrenERDs,
    (ERDParseSelf)&sign_exponent_t__parseSelf,
    (ERDUnparseSelf)&sign_exponent_t__unparseSelf,
    {.initChoice = NULL}
};

static const digit_exponent_t_ digit_exponent_t__compute_offsets;

static const size_t digit_exponent_t__childrenOffsets[2] = {
    (const char *)&digit_exponent_t__compute_offsets.zero - (const char *)&digit_exponent_t__compute_offsets,
    (const char *)&digit_exponent_t__compute_offsets.onenine - (const char *)&digit_exponent_t__compute_offsets
};

static const ERD *const digit_exponent_t__childrenERDs[2] = {
    &zero_digit_t_ERD,
    &onenine_digit_t_ERD
};

static const ERD digit_exponent_t_ERD = {
    {
        NULL, // namedQName.prefix
        "digit", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    digit_exponent_t__childrenOffsets,
    digit_exponent_t__childrenERDs,
    (ERDParseSelf)&digit_exponent_t__parseSelf,
    (ERDUnparseSelf)&digit_exponent_t__unparseSelf,
    {.initChoice = NULL}
};

static const exponent_number_t_ exponent_number_t__compute_offsets;

static const size_t exponent_number_t__childrenOffsets[3] = {
    (const char *)&exponent_number_t__compute_offsets.exp - (const char *)&exponent_number_t__compute_offsets,
    (const char *)&exponent_number_t__compute_offsets.sign[0] - (const char *)&exponent_number_t__compute_offsets,
    (const char *)&exponent_number_t__compute_offsets.digit[0] - (const char *)&exponent_number_t__compute_offsets
};

static const ERD *const exponent_number_t__childrenERDs[3] = {
    &exp_exponent_t_ERD,
    &array_sign_exponent_t_exponent_number_t_ERD,
    &array_digit_exponent_t_exponent_number_t_ERD
};

static const ERD exponent_number_t_ERD = {
    {
        NULL, // namedQName.prefix
        "exponent", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    exponent_number_t__childrenOffsets,
    exponent_number_t__childrenERDs,
    (ERDParseSelf)&exponent_number_t__parseSelf,
    (ERDUnparseSelf)&exponent_number_t__unparseSelf,
    {.initChoice = NULL}
};

static const JSON_number_ JSON_number__compute_offsets;

static const size_t JSON_number__childrenOffsets[3] = {
    (const char *)&JSON_number__compute_offsets.integer - (const char *)&JSON_number__compute_offsets,
    (const char *)&JSON_number__compute_offsets.fraction[0] - (const char *)&JSON_number__compute_offsets,
    (const char *)&JSON_number__compute_offsets.exponent[0] - (const char *)&JSON_number__compute_offsets
};

static const ERD *const JSON_number__childrenERDs[3] = {
    &integer_number_t_ERD,
    &array_fraction_number_t_JSON_number_ERD,
    &array_exponent_number_t_JSON_number_ERD
};

static const ERD JSON_number_ERD = {
    {
        NULL, // namedQName.prefix
        "JSON_number", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    JSON_number__childrenOffsets,
    JSON_number__childrenERDs,
    (ERDParseSelf)&JSON_number__parseSelf,
    (ERDUnparseSelf)&JSON_number__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
digit_integer_t__initERD(digit_integer_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &digit_integer_t_ERD;
    instance->_base.parent = parent;
}

static void
digit_integer_t__parseSelf(digit_integer_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->zero, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->onenine, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
digit_integer_t__unparseSelf(const digit_integer_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->zero, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->onenine, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
integer_number_t__initERD(integer_number_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &integer_number_t_ERD;
    instance->_base.parent = parent;
    digit_integer_t__initERD(&instance->digit, (InfosetBase *)instance);
}

static void
integer_number_t__parseSelf(integer_number_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->minus, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_minus[] = {45};
    validate_integer_enumeration(instance->minus, 1, enums_minus, "minus", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->zero, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->onenine, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &pstate->pu);
    if (pstate->pu.error) return;
    digit_integer_t__parseSelf(&instance->digit, pstate);
    if (pstate->pu.error) return;
}

static void
integer_number_t__unparseSelf(const integer_number_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->minus, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_minus[] = {45};
    validate_integer_enumeration(instance->minus, 1, enums_minus, "minus", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->zero, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->onenine, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &ustate->pu);
    if (ustate->pu.error) return;
    digit_integer_t__unparseSelf(&instance->digit, ustate);
    if (ustate->pu.error) return;
}

static void
digit_fraction_t__initERD(digit_fraction_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &digit_fraction_t_ERD;
    instance->_base.parent = parent;
}

static void
digit_fraction_t__parseSelf(digit_fraction_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->zero, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->onenine, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
digit_fraction_t__unparseSelf(const digit_fraction_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->zero, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->onenine, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
fraction_number_t__initERD(fraction_number_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &fraction_number_t_ERD;
    instance->_base.parent = parent;
    digit_fraction_t__initERD(&instance->digit, (InfosetBase *)instance);
}

static void
fraction_number_t__parseSelf(fraction_number_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->dot, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_dot[] = {46};
    validate_integer_enumeration(instance->dot, 1, enums_dot, "dot", &pstate->pu);
    if (pstate->pu.error) return;
    digit_fraction_t__parseSelf(&instance->digit, pstate);
    if (pstate->pu.error) return;
}

static void
fraction_number_t__unparseSelf(const fraction_number_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->dot, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_dot[] = {46};
    validate_integer_enumeration(instance->dot, 1, enums_dot, "dot", &ustate->pu);
    if (ustate->pu.error) return;
    digit_fraction_t__unparseSelf(&instance->digit, ustate);
    if (ustate->pu.error) return;
}

static void
sign_exponent_t__initERD(sign_exponent_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sign_exponent_t_ERD;
    instance->_base.parent = parent;
}

static void
sign_exponent_t__parseSelf(sign_exponent_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->minus, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_minus[] = {45};
    validate_integer_enumeration(instance->minus, 1, enums_minus, "minus", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->plus, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_plus[] = {43};
    validate_integer_enumeration(instance->plus, 1, enums_plus, "plus", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
sign_exponent_t__unparseSelf(const sign_exponent_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->minus, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_minus[] = {45};
    validate_integer_enumeration(instance->minus, 1, enums_minus, "minus", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->plus, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_plus[] = {43};
    validate_integer_enumeration(instance->plus, 1, enums_plus, "plus", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
digit_exponent_t__initERD(digit_exponent_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &digit_exponent_t_ERD;
    instance->_base.parent = parent;
}

static void
digit_exponent_t__parseSelf(digit_exponent_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->zero, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->onenine, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
digit_exponent_t__unparseSelf(const digit_exponent_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->zero, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_zero[] = {48};
    validate_integer_enumeration(instance->zero, 1, enums_zero, "zero", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->onenine, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->onenine >= 49 && instance->onenine <= 57, "onenine", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
exponent_number_t__initERD(exponent_number_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &exponent_number_t_ERD;
    instance->_base.parent = parent;
    sign_exponent_t__initERD(&instance->sign, (InfosetBase *)instance);
    digit_exponent_t__initERD(&instance->digit, (InfosetBase *)instance);
}

static void
exponent_number_t__parseSelf(exponent_number_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->exp, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_exp[] = {101};
    validate_integer_enumeration(instance->exp, 1, enums_exp, "exp", &pstate->pu);
    if (pstate->pu.error) return;
    sign_exponent_t__parseSelf(&instance->sign, pstate);
    if (pstate->pu.error) return;
    digit_exponent_t__parseSelf(&instance->digit, pstate);
    if (pstate->pu.error) return;
}

static void
exponent_number_t__unparseSelf(const exponent_number_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->exp, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_exp[] = {101};
    validate_integer_enumeration(instance->exp, 1, enums_exp, "exp", &ustate->pu);
    if (ustate->pu.error) return;
    sign_exponent_t__unparseSelf(&instance->sign, ustate);
    if (ustate->pu.error) return;
    digit_exponent_t__unparseSelf(&instance->digit, ustate);
    if (ustate->pu.error) return;
}

static void
JSON_number__initERD(JSON_number_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &JSON_number_ERD;
    instance->_base.parent = parent;
    integer_number_t__initERD(&instance->integer, (InfosetBase *)instance);
    fraction_number_t__initERD(&instance->fraction, (InfosetBase *)instance);
    exponent_number_t__initERD(&instance->exponent, (InfosetBase *)instance);
}

static void
JSON_number__parseSelf(JSON_number_ *instance, PState *pstate)
{
    integer_number_t__parseSelf(&instance->integer, pstate);
    if (pstate->pu.error) return;
    fraction_number_t__parseSelf(&instance->fraction, pstate);
    if (pstate->pu.error) return;
    exponent_number_t__parseSelf(&instance->exponent, pstate);
    if (pstate->pu.error) return;
}

static void
JSON_number__unparseSelf(const JSON_number_ *instance, UState *ustate)
{
    integer_number_t__unparseSelf(&instance->integer, ustate);
    if (ustate->pu.error) return;
    fraction_number_t__unparseSelf(&instance->fraction, ustate);
    if (ustate->pu.error) return;
    exponent_number_t__unparseSelf(&instance->exponent, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static JSON_number_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        JSON_number__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
