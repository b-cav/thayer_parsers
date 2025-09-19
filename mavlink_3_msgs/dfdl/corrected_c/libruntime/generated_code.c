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

static void array_payload_sp_M1_t_sp_M1_M1_t__parseSelf(sp_M1_M1_t_ *instance, PState *pstate);
static void array_payload_sp_M1_t_sp_M1_M1_t__unparseSelf(const sp_M1_M1_t_ *instance, UState *ustate);
static size_t array_payload_sp_M1_t_sp_M1_M1_t__getArraySize(const sp_M1_M1_t_ *instance);
static void sp_M1_M1_t__parseSelf(sp_M1_M1_t_ *instance, PState *pstate);
static void sp_M1_M1_t__unparseSelf(const sp_M1_M1_t_ *instance, UState *ustate);
static void array_sp_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_sp_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_sp_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void array_payload_att_M1_t_att_M1_M1_t__parseSelf(att_M1_M1_t_ *instance, PState *pstate);
static void array_payload_att_M1_t_att_M1_M1_t__unparseSelf(const att_M1_M1_t_ *instance, UState *ustate);
static size_t array_payload_att_M1_t_att_M1_M1_t__getArraySize(const att_M1_M1_t_ *instance);
static void att_M1_M1_t__parseSelf(att_M1_M1_t_ *instance, PState *pstate);
static void att_M1_M1_t__unparseSelf(const att_M1_M1_t_ *instance, UState *ustate);
static void array_att_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_att_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_att_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void array_payload_gpi_M1_t_gpi_M1_M1_t__parseSelf(gpi_M1_M1_t_ *instance, PState *pstate);
static void array_payload_gpi_M1_t_gpi_M1_M1_t__unparseSelf(const gpi_M1_M1_t_ *instance, UState *ustate);
static size_t array_payload_gpi_M1_t_gpi_M1_M1_t__getArraySize(const gpi_M1_M1_t_ *instance);
static void gpi_M1_M1_t__parseSelf(gpi_M1_M1_t_ *instance, PState *pstate);
static void gpi_M1_M1_t__unparseSelf(const gpi_M1_M1_t_ *instance, UState *ustate);
static void array_gpi_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_gpi_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_gpi_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static void array_M1_message_t_message__parseSelf(message_ *instance, PState *pstate);
static void array_M1_message_t_message__unparseSelf(const message_ *instance, UState *ustate);
static size_t array_M1_message_t_message__getArraySize(const message_ *instance);
static void array_payload_sp_M2_t_sp_M2_M2_t__parseSelf(sp_M2_M2_t_ *instance, PState *pstate);
static void array_payload_sp_M2_t_sp_M2_M2_t__unparseSelf(const sp_M2_M2_t_ *instance, UState *ustate);
static size_t array_payload_sp_M2_t_sp_M2_M2_t__getArraySize(const sp_M2_M2_t_ *instance);
static void sp_M2_M2_t__parseSelf(sp_M2_M2_t_ *instance, PState *pstate);
static void sp_M2_M2_t__unparseSelf(const sp_M2_M2_t_ *instance, UState *ustate);
static void array_sp_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_sp_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_sp_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void array_payload_att_M2_t_att_M2_M2_t__parseSelf(att_M2_M2_t_ *instance, PState *pstate);
static void array_payload_att_M2_t_att_M2_M2_t__unparseSelf(const att_M2_M2_t_ *instance, UState *ustate);
static size_t array_payload_att_M2_t_att_M2_M2_t__getArraySize(const att_M2_M2_t_ *instance);
static void att_M2_M2_t__parseSelf(att_M2_M2_t_ *instance, PState *pstate);
static void att_M2_M2_t__unparseSelf(const att_M2_M2_t_ *instance, UState *ustate);
static void array_att_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_att_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_att_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void array_payload_gpi_M2_t_gpi_M2_M2_t__parseSelf(gpi_M2_M2_t_ *instance, PState *pstate);
static void array_payload_gpi_M2_t_gpi_M2_M2_t__unparseSelf(const gpi_M2_M2_t_ *instance, UState *ustate);
static size_t array_payload_gpi_M2_t_gpi_M2_M2_t__getArraySize(const gpi_M2_M2_t_ *instance);
static void gpi_M2_M2_t__parseSelf(gpi_M2_M2_t_ *instance, PState *pstate);
static void gpi_M2_M2_t__unparseSelf(const gpi_M2_M2_t_ *instance, UState *ustate);
static void array_gpi_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_gpi_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_gpi_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void array_signature_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_signature_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_signature_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static void array_M2_message_t_message__parseSelf(message_ *instance, PState *pstate);
static void array_M2_message_t_message__unparseSelf(const message_ *instance, UState *ustate);
static size_t array_M2_message_t_message__getArraySize(const message_ *instance);
static void message__parseSelf(message_ *instance, PState *pstate);
static void message__unparseSelf(const message_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD stx_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "stx", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sysid_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sysid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compid_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD M1_msgid_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_msgid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sp_M1_M1_t_ array_payload_sp_M1_t_sp_M1_M1_t__compute_offsets;

static const size_t array_payload_sp_M1_t_sp_M1_M1_t__childrenOffsets[1] = {
    (const char *)&array_payload_sp_M1_t_sp_M1_M1_t__compute_offsets.payload[1] - (const char *)&array_payload_sp_M1_t_sp_M1_M1_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_sp_M1_t_sp_M1_M1_t__childrenERDs[1] = {
    &payload_sp_M1_t_ERD
};

static const ERD array_payload_sp_M1_t_sp_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_sp_M1_t_sp_M1_M1_t__childrenOffsets,
    array_payload_sp_M1_t_sp_M1_M1_t__childrenERDs,
    (ERDParseSelf)&array_payload_sp_M1_t_sp_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&array_payload_sp_M1_t_sp_M1_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_sp_M1_t_sp_M1_M1_t__getArraySize}
};

static const sp_M1_M1_t_ sp_M1_M1_t__compute_offsets;

static const size_t sp_M1_M1_t__childrenOffsets[1] = {
    (const char *)&sp_M1_M1_t__compute_offsets.payload[0] - (const char *)&sp_M1_M1_t__compute_offsets
};

static const ERD *const sp_M1_M1_t__childrenERDs[1] = {
    &array_payload_sp_M1_t_sp_M1_M1_t_ERD
};

static const ERD sp_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    sp_M1_M1_t__childrenOffsets,
    sp_M1_M1_t__childrenERDs,
    (ERDParseSelf)&sp_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&sp_M1_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_sp_M1_M1_t_M1_message_t__compute_offsets;

static const size_t array_sp_M1_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_sp_M1_M1_t_M1_message_t__compute_offsets.sp_M1[1] - (const char *)&array_sp_M1_M1_t_M1_message_t__compute_offsets.sp_M1[0]
};

static const ERD *const array_sp_M1_M1_t_M1_message_t__childrenERDs[1] = {
    &sp_M1_M1_t_ERD
};

static const ERD array_sp_M1_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_sp_M1_M1_t_M1_message_t__childrenOffsets,
    array_sp_M1_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_sp_M1_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_sp_M1_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_sp_M1_M1_t_M1_message_t__getArraySize}
};

static const ERD payload_att_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const att_M1_M1_t_ array_payload_att_M1_t_att_M1_M1_t__compute_offsets;

static const size_t array_payload_att_M1_t_att_M1_M1_t__childrenOffsets[1] = {
    (const char *)&array_payload_att_M1_t_att_M1_M1_t__compute_offsets.payload[1] - (const char *)&array_payload_att_M1_t_att_M1_M1_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_att_M1_t_att_M1_M1_t__childrenERDs[1] = {
    &payload_att_M1_t_ERD
};

static const ERD array_payload_att_M1_t_att_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_att_M1_t_att_M1_M1_t__childrenOffsets,
    array_payload_att_M1_t_att_M1_M1_t__childrenERDs,
    (ERDParseSelf)&array_payload_att_M1_t_att_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&array_payload_att_M1_t_att_M1_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_att_M1_t_att_M1_M1_t__getArraySize}
};

static const att_M1_M1_t_ att_M1_M1_t__compute_offsets;

static const size_t att_M1_M1_t__childrenOffsets[1] = {
    (const char *)&att_M1_M1_t__compute_offsets.payload[0] - (const char *)&att_M1_M1_t__compute_offsets
};

static const ERD *const att_M1_M1_t__childrenERDs[1] = {
    &array_payload_att_M1_t_att_M1_M1_t_ERD
};

static const ERD att_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "att_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    att_M1_M1_t__childrenOffsets,
    att_M1_M1_t__childrenERDs,
    (ERDParseSelf)&att_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&att_M1_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_att_M1_M1_t_M1_message_t__compute_offsets;

static const size_t array_att_M1_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_att_M1_M1_t_M1_message_t__compute_offsets.att_M1[1] - (const char *)&array_att_M1_M1_t_M1_message_t__compute_offsets.att_M1[0]
};

static const ERD *const array_att_M1_M1_t_M1_message_t__childrenERDs[1] = {
    &att_M1_M1_t_ERD
};

static const ERD array_att_M1_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "att_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_att_M1_M1_t_M1_message_t__childrenOffsets,
    array_att_M1_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_att_M1_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_att_M1_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_att_M1_M1_t_M1_message_t__getArraySize}
};

static const ERD payload_gpi_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const gpi_M1_M1_t_ array_payload_gpi_M1_t_gpi_M1_M1_t__compute_offsets;

static const size_t array_payload_gpi_M1_t_gpi_M1_M1_t__childrenOffsets[1] = {
    (const char *)&array_payload_gpi_M1_t_gpi_M1_M1_t__compute_offsets.payload[1] - (const char *)&array_payload_gpi_M1_t_gpi_M1_M1_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_gpi_M1_t_gpi_M1_M1_t__childrenERDs[1] = {
    &payload_gpi_M1_t_ERD
};

static const ERD array_payload_gpi_M1_t_gpi_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_gpi_M1_t_gpi_M1_M1_t__childrenOffsets,
    array_payload_gpi_M1_t_gpi_M1_M1_t__childrenERDs,
    (ERDParseSelf)&array_payload_gpi_M1_t_gpi_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&array_payload_gpi_M1_t_gpi_M1_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_gpi_M1_t_gpi_M1_M1_t__getArraySize}
};

static const gpi_M1_M1_t_ gpi_M1_M1_t__compute_offsets;

static const size_t gpi_M1_M1_t__childrenOffsets[1] = {
    (const char *)&gpi_M1_M1_t__compute_offsets.payload[0] - (const char *)&gpi_M1_M1_t__compute_offsets
};

static const ERD *const gpi_M1_M1_t__childrenERDs[1] = {
    &array_payload_gpi_M1_t_gpi_M1_M1_t_ERD
};

static const ERD gpi_M1_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "gpi_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    gpi_M1_M1_t__childrenOffsets,
    gpi_M1_M1_t__childrenERDs,
    (ERDParseSelf)&gpi_M1_M1_t__parseSelf,
    (ERDUnparseSelf)&gpi_M1_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_gpi_M1_M1_t_M1_message_t__compute_offsets;

static const size_t array_gpi_M1_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_gpi_M1_M1_t_M1_message_t__compute_offsets.gpi_M1[1] - (const char *)&array_gpi_M1_M1_t_M1_message_t__compute_offsets.gpi_M1[0]
};

static const ERD *const array_gpi_M1_M1_t_M1_message_t__childrenERDs[1] = {
    &gpi_M1_M1_t_ERD
};

static const ERD array_gpi_M1_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "gpi_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_gpi_M1_M1_t_M1_message_t__childrenOffsets,
    array_gpi_M1_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_gpi_M1_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_gpi_M1_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_gpi_M1_M1_t_M1_message_t__getArraySize}
};

static const ERD checksum_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M1_message_t_ M1_message_t__compute_offsets;

static const size_t M1_message_t__childrenOffsets[9] = {
    (const char *)&M1_message_t__compute_offsets.len - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.seq - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.sysid - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.compid - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.M1_msgid - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.sp_M1[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.att_M1[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.gpi_M1[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.checksum - (const char *)&M1_message_t__compute_offsets
};

static const ERD *const M1_message_t__childrenERDs[9] = {
    &len_M1_t_ERD,
    &seq_M1_t_ERD,
    &sysid_M1_t_ERD,
    &compid_M1_t_ERD,
    &M1_msgid_M1_t_ERD,
    &array_sp_M1_M1_t_M1_message_t_ERD,
    &array_att_M1_M1_t_M1_message_t_ERD,
    &array_gpi_M1_M1_t_M1_message_t_ERD,
    &checksum_M1_t_ERD
};

static const ERD M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    9, // numChildren
    M1_message_t__childrenOffsets,
    M1_message_t__childrenERDs,
    (ERDParseSelf)&M1_message_t__parseSelf,
    (ERDUnparseSelf)&M1_message_t__unparseSelf,
    {.initChoice = NULL}
};

static const message_ array_M1_message_t_message__compute_offsets;

static const size_t array_M1_message_t_message__childrenOffsets[1] = {
    (const char *)&array_M1_message_t_message__compute_offsets.M1[1] - (const char *)&array_M1_message_t_message__compute_offsets.M1[0]
};

static const ERD *const array_M1_message_t_message__childrenERDs[1] = {
    &M1_message_t_ERD
};

static const ERD array_M1_message_t_message_ERD = {
    {
        NULL, // namedQName.prefix
        "M1", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_message_t_message__childrenOffsets,
    array_M1_message_t_message__childrenERDs,
    (ERDParseSelf)&array_M1_message_t_message__parseSelf,
    (ERDUnparseSelf)&array_M1_message_t_message__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_message_t_message__getArraySize}
};

static const ERD len_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD inc_flags_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "inc_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD comp_flags_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "comp_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sysid_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sysid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compid_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD M2_msgid_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_msgid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sp_M2_M2_t_ array_payload_sp_M2_t_sp_M2_M2_t__compute_offsets;

static const size_t array_payload_sp_M2_t_sp_M2_M2_t__childrenOffsets[1] = {
    (const char *)&array_payload_sp_M2_t_sp_M2_M2_t__compute_offsets.payload[1] - (const char *)&array_payload_sp_M2_t_sp_M2_M2_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_sp_M2_t_sp_M2_M2_t__childrenERDs[1] = {
    &payload_sp_M2_t_ERD
};

static const ERD array_payload_sp_M2_t_sp_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_sp_M2_t_sp_M2_M2_t__childrenOffsets,
    array_payload_sp_M2_t_sp_M2_M2_t__childrenERDs,
    (ERDParseSelf)&array_payload_sp_M2_t_sp_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&array_payload_sp_M2_t_sp_M2_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_sp_M2_t_sp_M2_M2_t__getArraySize}
};

static const sp_M2_M2_t_ sp_M2_M2_t__compute_offsets;

static const size_t sp_M2_M2_t__childrenOffsets[1] = {
    (const char *)&sp_M2_M2_t__compute_offsets.payload[0] - (const char *)&sp_M2_M2_t__compute_offsets
};

static const ERD *const sp_M2_M2_t__childrenERDs[1] = {
    &array_payload_sp_M2_t_sp_M2_M2_t_ERD
};

static const ERD sp_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    sp_M2_M2_t__childrenOffsets,
    sp_M2_M2_t__childrenERDs,
    (ERDParseSelf)&sp_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&sp_M2_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_sp_M2_M2_t_M2_message_t__compute_offsets;

static const size_t array_sp_M2_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_sp_M2_M2_t_M2_message_t__compute_offsets.sp_M2[1] - (const char *)&array_sp_M2_M2_t_M2_message_t__compute_offsets.sp_M2[0]
};

static const ERD *const array_sp_M2_M2_t_M2_message_t__childrenERDs[1] = {
    &sp_M2_M2_t_ERD
};

static const ERD array_sp_M2_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_sp_M2_M2_t_M2_message_t__childrenOffsets,
    array_sp_M2_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_sp_M2_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_sp_M2_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_sp_M2_M2_t_M2_message_t__getArraySize}
};

static const ERD payload_att_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const att_M2_M2_t_ array_payload_att_M2_t_att_M2_M2_t__compute_offsets;

static const size_t array_payload_att_M2_t_att_M2_M2_t__childrenOffsets[1] = {
    (const char *)&array_payload_att_M2_t_att_M2_M2_t__compute_offsets.payload[1] - (const char *)&array_payload_att_M2_t_att_M2_M2_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_att_M2_t_att_M2_M2_t__childrenERDs[1] = {
    &payload_att_M2_t_ERD
};

static const ERD array_payload_att_M2_t_att_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_att_M2_t_att_M2_M2_t__childrenOffsets,
    array_payload_att_M2_t_att_M2_M2_t__childrenERDs,
    (ERDParseSelf)&array_payload_att_M2_t_att_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&array_payload_att_M2_t_att_M2_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_att_M2_t_att_M2_M2_t__getArraySize}
};

static const att_M2_M2_t_ att_M2_M2_t__compute_offsets;

static const size_t att_M2_M2_t__childrenOffsets[1] = {
    (const char *)&att_M2_M2_t__compute_offsets.payload[0] - (const char *)&att_M2_M2_t__compute_offsets
};

static const ERD *const att_M2_M2_t__childrenERDs[1] = {
    &array_payload_att_M2_t_att_M2_M2_t_ERD
};

static const ERD att_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "att_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    att_M2_M2_t__childrenOffsets,
    att_M2_M2_t__childrenERDs,
    (ERDParseSelf)&att_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&att_M2_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_att_M2_M2_t_M2_message_t__compute_offsets;

static const size_t array_att_M2_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_att_M2_M2_t_M2_message_t__compute_offsets.att_M2[1] - (const char *)&array_att_M2_M2_t_M2_message_t__compute_offsets.att_M2[0]
};

static const ERD *const array_att_M2_M2_t_M2_message_t__childrenERDs[1] = {
    &att_M2_M2_t_ERD
};

static const ERD array_att_M2_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "att_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_att_M2_M2_t_M2_message_t__childrenOffsets,
    array_att_M2_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_att_M2_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_att_M2_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_att_M2_M2_t_M2_message_t__getArraySize}
};

static const ERD payload_gpi_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const gpi_M2_M2_t_ array_payload_gpi_M2_t_gpi_M2_M2_t__compute_offsets;

static const size_t array_payload_gpi_M2_t_gpi_M2_M2_t__childrenOffsets[1] = {
    (const char *)&array_payload_gpi_M2_t_gpi_M2_M2_t__compute_offsets.payload[1] - (const char *)&array_payload_gpi_M2_t_gpi_M2_M2_t__compute_offsets.payload[0]
};

static const ERD *const array_payload_gpi_M2_t_gpi_M2_M2_t__childrenERDs[1] = {
    &payload_gpi_M2_t_ERD
};

static const ERD array_payload_gpi_M2_t_gpi_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    255, // maxOccurs
    array_payload_gpi_M2_t_gpi_M2_M2_t__childrenOffsets,
    array_payload_gpi_M2_t_gpi_M2_M2_t__childrenERDs,
    (ERDParseSelf)&array_payload_gpi_M2_t_gpi_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&array_payload_gpi_M2_t_gpi_M2_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_payload_gpi_M2_t_gpi_M2_M2_t__getArraySize}
};

static const gpi_M2_M2_t_ gpi_M2_M2_t__compute_offsets;

static const size_t gpi_M2_M2_t__childrenOffsets[1] = {
    (const char *)&gpi_M2_M2_t__compute_offsets.payload[0] - (const char *)&gpi_M2_M2_t__compute_offsets
};

static const ERD *const gpi_M2_M2_t__childrenERDs[1] = {
    &array_payload_gpi_M2_t_gpi_M2_M2_t_ERD
};

static const ERD gpi_M2_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "gpi_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    gpi_M2_M2_t__childrenOffsets,
    gpi_M2_M2_t__childrenERDs,
    (ERDParseSelf)&gpi_M2_M2_t__parseSelf,
    (ERDUnparseSelf)&gpi_M2_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_gpi_M2_M2_t_M2_message_t__compute_offsets;

static const size_t array_gpi_M2_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_gpi_M2_M2_t_M2_message_t__compute_offsets.gpi_M2[1] - (const char *)&array_gpi_M2_M2_t_M2_message_t__compute_offsets.gpi_M2[0]
};

static const ERD *const array_gpi_M2_M2_t_M2_message_t__childrenERDs[1] = {
    &gpi_M2_M2_t_ERD
};

static const ERD array_gpi_M2_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "gpi_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_gpi_M2_M2_t_M2_message_t__childrenOffsets,
    array_gpi_M2_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_gpi_M2_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_gpi_M2_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_gpi_M2_M2_t_M2_message_t__getArraySize}
};

static const ERD checksum_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD signature_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "signature", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_message_t_ array_signature_M2_t_M2_message_t__compute_offsets;

static const size_t array_signature_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_signature_M2_t_M2_message_t__compute_offsets.signature[1] - (const char *)&array_signature_M2_t_M2_message_t__compute_offsets.signature[0]
};

static const ERD *const array_signature_M2_t_M2_message_t__childrenERDs[1] = {
    &signature_M2_t_ERD
};

static const ERD array_signature_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "signature", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_signature_M2_t_M2_message_t__childrenOffsets,
    array_signature_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_signature_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_signature_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_signature_M2_t_M2_message_t__getArraySize}
};

static const M2_message_t_ M2_message_t__compute_offsets;

static const size_t M2_message_t__childrenOffsets[12] = {
    (const char *)&M2_message_t__compute_offsets.len - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.inc_flags - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.comp_flags - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.seq - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.sysid - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.compid - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.M2_msgid - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.sp_M2[0] - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.att_M2[0] - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.gpi_M2[0] - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.checksum - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.signature[0] - (const char *)&M2_message_t__compute_offsets
};

static const ERD *const M2_message_t__childrenERDs[12] = {
    &len_M2_t_ERD,
    &inc_flags_M2_t_ERD,
    &comp_flags_M2_t_ERD,
    &seq_M2_t_ERD,
    &sysid_M2_t_ERD,
    &compid_M2_t_ERD,
    &M2_msgid_M2_t_ERD,
    &array_sp_M2_M2_t_M2_message_t_ERD,
    &array_att_M2_M2_t_M2_message_t_ERD,
    &array_gpi_M2_M2_t_M2_message_t_ERD,
    &checksum_M2_t_ERD,
    &array_signature_M2_t_M2_message_t_ERD
};

static const ERD M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    12, // numChildren
    M2_message_t__childrenOffsets,
    M2_message_t__childrenERDs,
    (ERDParseSelf)&M2_message_t__parseSelf,
    (ERDUnparseSelf)&M2_message_t__unparseSelf,
    {.initChoice = NULL}
};

static const message_ array_M2_message_t_message__compute_offsets;

static const size_t array_M2_message_t_message__childrenOffsets[1] = {
    (const char *)&array_M2_message_t_message__compute_offsets.M2[1] - (const char *)&array_M2_message_t_message__compute_offsets.M2[0]
};

static const ERD *const array_M2_message_t_message__childrenERDs[1] = {
    &M2_message_t_ERD
};

static const ERD array_M2_message_t_message_ERD = {
    {
        NULL, // namedQName.prefix
        "M2", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_message_t_message__childrenOffsets,
    array_M2_message_t_message__childrenERDs,
    (ERDParseSelf)&array_M2_message_t_message__parseSelf,
    (ERDUnparseSelf)&array_M2_message_t_message__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_message_t_message__getArraySize}
};

static const message_ message__compute_offsets;

static const size_t message__childrenOffsets[3] = {
    (const char *)&message__compute_offsets.stx - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.M1[0] - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.M2[0] - (const char *)&message__compute_offsets
};

static const ERD *const message__childrenERDs[3] = {
    &stx_message_t_ERD,
    &array_M1_message_t_message_ERD,
    &array_M2_message_t_message_ERD
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
array_payload_sp_M1_t_sp_M1_M1_t__initERD(sp_M1_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_sp_M1_t_sp_M1_M1_t__parseSelf(sp_M1_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_sp_M1_t_sp_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_sp_M1_t_sp_M1_M1_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_sp_M1_t_sp_M1_M1_t__unparseSelf(const sp_M1_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_sp_M1_t_sp_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_sp_M1_t_sp_M1_M1_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_sp_M1_t_sp_M1_M1_t__getArraySize(const sp_M1_M1_t_ *instance)
{
    UNUSED(instance);
    return (((sp_M1_M1_t_ *)instance->_base.parent)->_base.parent)->len;
}

static void
sp_M1_M1_t__initERD(sp_M1_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sp_M1_M1_t_ERD;
    instance->_base.parent = parent;
    array_payload_sp_M1_t_sp_M1_M1_t__initERD(instance, parent);
}

static void
sp_M1_M1_t__parseSelf(sp_M1_M1_t_ *instance, PState *pstate)
{
    array_payload_sp_M1_t_sp_M1_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
sp_M1_M1_t__unparseSelf(const sp_M1_M1_t_ *instance, UState *ustate)
{
    array_payload_sp_M1_t_sp_M1_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_sp_M1_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        sp_M1_M1_t__initERD(&instance->sp_M1[i], (InfosetBase *)instance);
    }
}

static void
array_sp_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_sp_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_sp_M1_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sp_M1_M1_t__parseSelf(&instance->sp_M1[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_sp_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_sp_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_sp_M1_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sp_M1_M1_t__unparseSelf(&instance->sp_M1[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_sp_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
    if (instance->M1_msgid.array[0] == 0x1D) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_payload_att_M1_t_att_M1_M1_t__initERD(att_M1_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_att_M1_t_att_M1_M1_t__parseSelf(att_M1_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_att_M1_t_att_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_att_M1_t_att_M1_M1_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_att_M1_t_att_M1_M1_t__unparseSelf(const att_M1_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_att_M1_t_att_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_att_M1_t_att_M1_M1_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_att_M1_t_att_M1_M1_t__getArraySize(const att_M1_M1_t_ *instance)
{
    UNUSED(instance);
    return ((att_M1_M1_t_ *)instance->_base.parent)->len;
}

static void
att_M1_M1_t__initERD(att_M1_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &att_M1_M1_t_ERD;
    instance->_base.parent = parent;
    array_payload_att_M1_t_att_M1_M1_t__initERD(instance, parent);
}

static void
att_M1_M1_t__parseSelf(att_M1_M1_t_ *instance, PState *pstate)
{
    array_payload_att_M1_t_att_M1_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
att_M1_M1_t__unparseSelf(const att_M1_M1_t_ *instance, UState *ustate)
{
    array_payload_att_M1_t_att_M1_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_att_M1_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        att_M1_M1_t__initERD(&instance->att_M1[i], (InfosetBase *)instance);
    }
}

static void
array_att_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_att_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_att_M1_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        att_M1_M1_t__parseSelf(&instance->att_M1[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_att_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_att_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_att_M1_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        att_M1_M1_t__unparseSelf(&instance->att_M1[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_att_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
    if (instance->M1_msgid.array[0] == 0x1E) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_payload_gpi_M1_t_gpi_M1_M1_t__initERD(gpi_M1_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_gpi_M1_t_gpi_M1_M1_t__parseSelf(gpi_M1_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_gpi_M1_t_gpi_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_gpi_M1_t_gpi_M1_M1_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_gpi_M1_t_gpi_M1_M1_t__unparseSelf(const gpi_M1_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_gpi_M1_t_gpi_M1_M1_t__getArraySize(instance);
    validate_array_bounds("array_payload_gpi_M1_t_gpi_M1_M1_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_gpi_M1_t_gpi_M1_M1_t__getArraySize(const gpi_M1_M1_t_ *instance)
{
    UNUSED(instance);
    return ((gpi_M1_M1_t_ *)instance->_base.parent)->len;
}

static void
gpi_M1_M1_t__initERD(gpi_M1_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gpi_M1_M1_t_ERD;
    instance->_base.parent = parent;
    array_payload_gpi_M1_t_gpi_M1_M1_t__initERD(instance, parent);
}

static void
gpi_M1_M1_t__parseSelf(gpi_M1_M1_t_ *instance, PState *pstate)
{
    array_payload_gpi_M1_t_gpi_M1_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
gpi_M1_M1_t__unparseSelf(const gpi_M1_M1_t_ *instance, UState *ustate)
{
    array_payload_gpi_M1_t_gpi_M1_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_gpi_M1_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        gpi_M1_M1_t__initERD(&instance->gpi_M1[i], (InfosetBase *)instance);
    }
}

static void
array_gpi_M1_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_gpi_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_gpi_M1_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        gpi_M1_M1_t__parseSelf(&instance->gpi_M1[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_gpi_M1_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_gpi_M1_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_gpi_M1_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        gpi_M1_M1_t__unparseSelf(&instance->gpi_M1[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_gpi_M1_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
    if (instance->M1_msgid.array[0] == 0x21) {
        return(1);
    } else {
        return(0);
    }
}

static void
M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_message_t_ERD;
    instance->_base.parent = parent;
    instance->seq.array = instance->_a_seq;
    instance->seq.lengthInBytes = sizeof(instance->_a_seq);
    instance->seq.dynamic = false;
    instance->sysid.array = instance->_a_sysid;
    instance->sysid.lengthInBytes = sizeof(instance->_a_sysid);
    instance->sysid.dynamic = false;
    instance->compid.array = instance->_a_compid;
    instance->compid.lengthInBytes = sizeof(instance->_a_compid);
    instance->compid.dynamic = false;
    instance->M1_msgid.array = instance->_a_M1_msgid;
    instance->M1_msgid.lengthInBytes = sizeof(instance->_a_M1_msgid);
    instance->M1_msgid.dynamic = false;
    array_sp_M1_M1_t_M1_message_t__initERD(instance, parent);
    array_att_M1_M1_t_M1_message_t__initERD(instance, parent);
    array_gpi_M1_M1_t_M1_message_t__initERD(instance, parent);
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
}

static void
M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->len, 8, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->M1_msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_M1_msgid[][1] = {{0x1D}, {0x1E}, {0x21}};
    HexBinary enums_M1_msgid[] = {{arrays_M1_msgid[0], 1, false}, {arrays_M1_msgid[1], 1, false}, {arrays_M1_msgid[2], 1, false}};
    validate_hexbinary_enumeration(&instance->M1_msgid, 3, enums_M1_msgid, "M1_msgid", &pstate->pu);
    if (pstate->pu.error) return;
    array_sp_M1_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_att_M1_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_gpi_M1_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
}

static void
M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->len, 8, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->M1_msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_M1_msgid[][1] = {{0x1D}, {0x1E}, {0x21}};
    HexBinary enums_M1_msgid[] = {{arrays_M1_msgid[0], 1, false}, {arrays_M1_msgid[1], 1, false}, {arrays_M1_msgid[2], 1, false}};
    validate_hexbinary_enumeration(&instance->M1_msgid, 3, enums_M1_msgid, "M1_msgid", &ustate->pu);
    if (ustate->pu.error) return;
    array_sp_M1_M1_t_M1_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_att_M1_M1_t_M1_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_gpi_M1_M1_t_M1_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
}

static void
array_M1_message_t_message__initERD(message_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_message_t__initERD(&instance->M1[i], (InfosetBase *)instance);
    }
}

static void
array_M1_message_t_message__parseSelf(message_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_message_t_message__getArraySize(instance);
    validate_array_bounds("array_M1_message_t_message_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_message_t__parseSelf(&instance->M1[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_message_t_message__unparseSelf(const message_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_message_t_message__getArraySize(instance);
    validate_array_bounds("array_M1_message_t_message_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_message_t__unparseSelf(&instance->M1[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_message_t_message__getArraySize(const message_ *instance)
{
    if (instance->stx.array[0] == 0xFE) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_payload_sp_M2_t_sp_M2_M2_t__initERD(sp_M2_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_sp_M2_t_sp_M2_M2_t__parseSelf(sp_M2_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_sp_M2_t_sp_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_sp_M2_t_sp_M2_M2_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_sp_M2_t_sp_M2_M2_t__unparseSelf(const sp_M2_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_sp_M2_t_sp_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_sp_M2_t_sp_M2_M2_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_sp_M2_t_sp_M2_M2_t__getArraySize(const sp_M2_M2_t_ *instance)
{
    UNUSED(instance);
    return ((sp_M2_M2_t_ *)instance->_base.parent)->len;
}

static void
sp_M2_M2_t__initERD(sp_M2_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sp_M2_M2_t_ERD;
    instance->_base.parent = parent;
    array_payload_sp_M2_t_sp_M2_M2_t__initERD(instance, parent);
}

static void
sp_M2_M2_t__parseSelf(sp_M2_M2_t_ *instance, PState *pstate)
{
    array_payload_sp_M2_t_sp_M2_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
sp_M2_M2_t__unparseSelf(const sp_M2_M2_t_ *instance, UState *ustate)
{
    array_payload_sp_M2_t_sp_M2_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_sp_M2_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        sp_M2_M2_t__initERD(&instance->sp_M2[i], (InfosetBase *)instance);
    }
}

static void
array_sp_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_sp_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_sp_M2_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sp_M2_M2_t__parseSelf(&instance->sp_M2[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_sp_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_sp_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_sp_M2_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sp_M2_M2_t__unparseSelf(&instance->sp_M2[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_sp_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
    if (instance->M2_msgid.array[0] == 0x1D && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_payload_att_M2_t_att_M2_M2_t__initERD(att_M2_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_att_M2_t_att_M2_M2_t__parseSelf(att_M2_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_att_M2_t_att_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_att_M2_t_att_M2_M2_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_att_M2_t_att_M2_M2_t__unparseSelf(const att_M2_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_att_M2_t_att_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_att_M2_t_att_M2_M2_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_att_M2_t_att_M2_M2_t__getArraySize(const att_M2_M2_t_ *instance)
{
    UNUSED(instance);
    return ((att_M2_M2_t_ *)instance->_base.parent)->len;
}

static void
att_M2_M2_t__initERD(att_M2_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &att_M2_M2_t_ERD;
    instance->_base.parent = parent;
    array_payload_att_M2_t_att_M2_M2_t__initERD(instance, parent);
}

static void
att_M2_M2_t__parseSelf(att_M2_M2_t_ *instance, PState *pstate)
{
    array_payload_att_M2_t_att_M2_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
att_M2_M2_t__unparseSelf(const att_M2_M2_t_ *instance, UState *ustate)
{
    array_payload_att_M2_t_att_M2_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_att_M2_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        att_M2_M2_t__initERD(&instance->att_M2[i], (InfosetBase *)instance);
    }
}

static void
array_att_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_att_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_att_M2_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        att_M2_M2_t__parseSelf(&instance->att_M2[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_att_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_att_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_att_M2_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        att_M2_M2_t__unparseSelf(&instance->att_M2[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_att_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
    if (instance->M2_msgid.array[0] == 0x1E && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_payload_gpi_M2_t_gpi_M2_M2_t__initERD(gpi_M2_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 255; i++)
    {
        instance->payload[i].array = instance->_a_payload[i];
        instance->payload[i].lengthInBytes = sizeof(instance->_a_payload[i]);
        instance->payload[i].dynamic = false;
    }
}

static void
array_payload_gpi_M2_t_gpi_M2_M2_t__parseSelf(gpi_M2_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_payload_gpi_M2_t_gpi_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_gpi_M2_t_gpi_M2_M2_t_", arraySize, 0, 255, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->payload[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_payload_gpi_M2_t_gpi_M2_M2_t__unparseSelf(const gpi_M2_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_payload_gpi_M2_t_gpi_M2_M2_t__getArraySize(instance);
    validate_array_bounds("array_payload_gpi_M2_t_gpi_M2_M2_t_", arraySize, 0, 255, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->payload[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_payload_gpi_M2_t_gpi_M2_M2_t__getArraySize(const gpi_M2_M2_t_ *instance)
{
    UNUSED(instance);
    return ((gpi_M2_M2_t_ *)instance->_base.parent)->len;
}

static void
gpi_M2_M2_t__initERD(gpi_M2_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &gpi_M2_M2_t_ERD;
    instance->_base.parent = parent;
    array_payload_gpi_M2_t_gpi_M2_M2_t__initERD(instance, parent);
}

static void
gpi_M2_M2_t__parseSelf(gpi_M2_M2_t_ *instance, PState *pstate)
{
    array_payload_gpi_M2_t_gpi_M2_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
gpi_M2_M2_t__unparseSelf(const gpi_M2_M2_t_ *instance, UState *ustate)
{
    array_payload_gpi_M2_t_gpi_M2_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_gpi_M2_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        gpi_M2_M2_t__initERD(&instance->gpi_M2[i], (InfosetBase *)instance);
    }
}

static void
array_gpi_M2_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_gpi_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_gpi_M2_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        gpi_M2_M2_t__parseSelf(&instance->gpi_M2[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_gpi_M2_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_gpi_M2_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_gpi_M2_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        gpi_M2_M2_t__unparseSelf(&instance->gpi_M2[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_gpi_M2_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
    if (instance->M2_msgid.array[0] == 0x21 && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
        return(1);
    } else {
        return(0);
    }
}

static void
array_signature_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        instance->signature[i].array = instance->_a_signature[i];
        instance->signature[i].lengthInBytes = sizeof(instance->_a_signature[i]);
        instance->signature[i].dynamic = false;
    }
}

static void
array_signature_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_signature_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_signature_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->signature[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_signature_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_signature_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_signature_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->signature[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_signature_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
    if (instance->inc_flags.array[0] == 0x01) {
        return(1);
    } else {
        return(0);
    }
}

static void
M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_message_t_ERD;
    instance->_base.parent = parent;
    instance->inc_flags.array = instance->_a_inc_flags;
    instance->inc_flags.lengthInBytes = sizeof(instance->_a_inc_flags);
    instance->inc_flags.dynamic = false;
    instance->comp_flags.array = instance->_a_comp_flags;
    instance->comp_flags.lengthInBytes = sizeof(instance->_a_comp_flags);
    instance->comp_flags.dynamic = false;
    instance->seq.array = instance->_a_seq;
    instance->seq.lengthInBytes = sizeof(instance->_a_seq);
    instance->seq.dynamic = false;
    instance->sysid.array = instance->_a_sysid;
    instance->sysid.lengthInBytes = sizeof(instance->_a_sysid);
    instance->sysid.dynamic = false;
    instance->compid.array = instance->_a_compid;
    instance->compid.lengthInBytes = sizeof(instance->_a_compid);
    instance->compid.dynamic = false;
    instance->M2_msgid.array = instance->_a_M2_msgid;
    instance->M2_msgid.lengthInBytes = sizeof(instance->_a_M2_msgid);
    instance->M2_msgid.dynamic = false;
    array_sp_M2_M2_t_M2_message_t__initERD(instance, parent);
    array_att_M2_M2_t_M2_message_t__initERD(instance, parent);
    array_gpi_M2_M2_t_M2_message_t__initERD(instance, parent);
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
    array_signature_M2_t_M2_message_t__initERD(instance, parent);
}

static void
M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->len, 8, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->inc_flags, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_inc_flags[][1] = {{0x00}, {0x01}};
    HexBinary enums_inc_flags[] = {{arrays_inc_flags[0], 1, false}, {arrays_inc_flags[1], 1, false}};
    validate_hexbinary_enumeration(&instance->inc_flags, 2, enums_inc_flags, "inc_flags", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->comp_flags, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_comp_flags[][1] = {{0x00}};
    HexBinary enums_comp_flags[] = {{arrays_comp_flags[0], 1, false}};
    validate_hexbinary_enumeration(&instance->comp_flags, 1, enums_comp_flags, "comp_flags", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->M2_msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_M2_msgid[][3] = {{0x1D, 0x00, 0x00}, {0x1E, 0x00, 0x00}, {0x21, 0x00, 0x00}};
    HexBinary enums_M2_msgid[] = {{arrays_M2_msgid[0], 3, false}, {arrays_M2_msgid[1], 3, false}, {arrays_M2_msgid[2], 3, false}};
    validate_hexbinary_enumeration(&instance->M2_msgid, 3, enums_M2_msgid, "M2_msgid", &pstate->pu);
    if (pstate->pu.error) return;
    array_sp_M2_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_att_M2_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_gpi_M2_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
    array_signature_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->len, 8, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->inc_flags, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_inc_flags[][1] = {{0x00}, {0x01}};
    HexBinary enums_inc_flags[] = {{arrays_inc_flags[0], 1, false}, {arrays_inc_flags[1], 1, false}};
    validate_hexbinary_enumeration(&instance->inc_flags, 2, enums_inc_flags, "inc_flags", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->comp_flags, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_comp_flags[][1] = {{0x00}};
    HexBinary enums_comp_flags[] = {{arrays_comp_flags[0], 1, false}};
    validate_hexbinary_enumeration(&instance->comp_flags, 1, enums_comp_flags, "comp_flags", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->M2_msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_M2_msgid[][3] = {{0x1D, 0x00, 0x00}, {0x1E, 0x00, 0x00}, {0x21, 0x00, 0x00}};
    HexBinary enums_M2_msgid[] = {{arrays_M2_msgid[0], 3, false}, {arrays_M2_msgid[1], 3, false}, {arrays_M2_msgid[2], 3, false}};
    validate_hexbinary_enumeration(&instance->M2_msgid, 3, enums_M2_msgid, "M2_msgid", &ustate->pu);
    if (ustate->pu.error) return;
    array_sp_M2_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_att_M2_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_gpi_M2_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
    array_signature_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_message_t_message__initERD(message_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_message_t__initERD(&instance->M2[i], (InfosetBase *)instance);
    }
}

static void
array_M2_message_t_message__parseSelf(message_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_message_t_message__getArraySize(instance);
    validate_array_bounds("array_M2_message_t_message_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_message_t__parseSelf(&instance->M2[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_message_t_message__unparseSelf(const message_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_message_t_message__getArraySize(instance);
    validate_array_bounds("array_M2_message_t_message_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_message_t__unparseSelf(&instance->M2[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_message_t_message__getArraySize(const message_ *instance)
{
    if(instance->stx.array[0] == 0xFD) {
        return(1);
    } else {
        return(0);
    }
}

static void
message__initERD(message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &message_ERD;
    instance->_base.parent = parent;
    instance->stx.array = instance->_a_stx;
    instance->stx.lengthInBytes = sizeof(instance->_a_stx);
    instance->stx.dynamic = false;
    array_M1_message_t_message__initERD(instance, parent);
    array_M2_message_t_message__initERD(instance, parent);
}

static void
message__parseSelf(message_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->stx, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}, {0xFD}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}, {arrays_stx[1], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 2, enums_stx, "stx", &pstate->pu);
    if (pstate->pu.error) return;
    array_M1_message_t_message__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_message_t_message__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
message__unparseSelf(const message_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->stx, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}, {0xFD}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}, {arrays_stx[1], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 2, enums_stx, "stx", &ustate->pu);
    if (ustate->pu.error) return;
    array_M1_message_t_message__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_message_t_message__unparseSelf(instance, ustate);
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
