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

static void sp_M1_message_t__parseSelf(sp_M1_message_t_ *instance, PState *pstate);
static void sp_M1_message_t__unparseSelf(const sp_M1_message_t_ *instance, UState *ustate);
static void checksum_and_signature_sp_M2_t__parseSelf(checksum_and_signature_sp_M2_t_ *instance, PState *pstate);
static void checksum_and_signature_sp_M2_t__unparseSelf(const checksum_and_signature_sp_M2_t_ *instance, UState *ustate);
static void sp_M2_message_t__parseSelf(sp_M2_message_t_ *instance, PState *pstate);
static void sp_M2_message_t__unparseSelf(const sp_M2_message_t_ *instance, UState *ustate);
static void message__parseSelf(message_ *instance, PState *pstate);
static void message__unparseSelf(const message_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD stx_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "stx", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sysid_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sysid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compid_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD msgid_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "msgid", // namedQName.local
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

static const ERD checksum_sp_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sp_M1_message_t_ sp_M1_message_t__compute_offsets;

static const size_t sp_M1_message_t__childrenOffsets[8] = {
    (const char *)&sp_M1_message_t__compute_offsets.stx - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.len - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.seq - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.sysid - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.compid - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.msgid - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.payload - (const char *)&sp_M1_message_t__compute_offsets,
    (const char *)&sp_M1_message_t__compute_offsets.checksum - (const char *)&sp_M1_message_t__compute_offsets
};

static const ERD *const sp_M1_message_t__childrenERDs[8] = {
    &stx_sp_M1_t_ERD,
    &len_sp_M1_t_ERD,
    &seq_sp_M1_t_ERD,
    &sysid_sp_M1_t_ERD,
    &compid_sp_M1_t_ERD,
    &msgid_sp_M1_t_ERD,
    &payload_sp_M1_t_ERD,
    &checksum_sp_M1_t_ERD
};

static const ERD sp_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M1", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
    sp_M1_message_t__childrenOffsets,
    sp_M1_message_t__childrenERDs,
    (ERDParseSelf)&sp_M1_message_t__parseSelf,
    (ERDUnparseSelf)&sp_M1_message_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD stx_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "stx", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_1_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_2_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_3_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_4_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_4", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_5_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_5", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_6_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_6", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_7_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_7", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_8_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_8", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_9_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_9", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_10_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_10", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_11_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_11", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_12_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_12", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_13_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_13", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_14_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_14", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_15_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_15", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_16_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len_16", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD incompat_flags_us_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "incompat_flags_us", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD incompat_flags_s_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "incompat_flags_s", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compat_flags_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compat_flags", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sysid_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sysid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compid_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD msgid_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "msgid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_1_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_2_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_3_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_4_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_4", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_5_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_5", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_6_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_6", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_7_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_7", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_8_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_8", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_9_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_9", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_10_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_10", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_11_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_11", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_12_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_12", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_13_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_13", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_14_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_14", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_15_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_15", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD payload_16_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload_16", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD checksum_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD checksum_checksum_and_signature_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD signature_checksum_and_signature_t_ERD = {
    {
        NULL, // namedQName.prefix
        "signature", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const checksum_and_signature_sp_M2_t_ checksum_and_signature_sp_M2_t__compute_offsets;

static const size_t checksum_and_signature_sp_M2_t__childrenOffsets[2] = {
    (const char *)&checksum_and_signature_sp_M2_t__compute_offsets.checksum - (const char *)&checksum_and_signature_sp_M2_t__compute_offsets,
    (const char *)&checksum_and_signature_sp_M2_t__compute_offsets.signature - (const char *)&checksum_and_signature_sp_M2_t__compute_offsets
};

static const ERD *const checksum_and_signature_sp_M2_t__childrenERDs[2] = {
    &checksum_checksum_and_signature_t_ERD,
    &signature_checksum_and_signature_t_ERD
};

static const ERD checksum_and_signature_sp_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum_and_signature", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    checksum_and_signature_sp_M2_t__childrenOffsets,
    checksum_and_signature_sp_M2_t__childrenERDs,
    (ERDParseSelf)&checksum_and_signature_sp_M2_t__parseSelf,
    (ERDUnparseSelf)&checksum_and_signature_sp_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const sp_M2_message_t_ sp_M2_message_t__compute_offsets;

static const size_t sp_M2_message_t__childrenOffsets[42] = {
    (const char *)&sp_M2_message_t__compute_offsets.stx - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_1 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_2 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_3 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_4 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_5 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_6 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_7 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_8 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_9 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_10 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_11 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_12 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_13 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_14 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_15 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.len_16 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.incompat_flags_us - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.incompat_flags_s - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.compat_flags - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.seq - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.sysid - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.compid - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.msgid - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_1 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_2 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_3 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_4 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_5 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_6 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_7 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_8 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_9 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_10 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_11 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_12 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_13 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_14 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_15 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.payload_16 - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.checksum - (const char *)&sp_M2_message_t__compute_offsets,
    (const char *)&sp_M2_message_t__compute_offsets.checksum_and_signature - (const char *)&sp_M2_message_t__compute_offsets
};

static const ERD *const sp_M2_message_t__childrenERDs[42] = {
    &stx_sp_M2_t_ERD,
    &len_1_sp_M2_t_ERD,
    &len_2_sp_M2_t_ERD,
    &len_3_sp_M2_t_ERD,
    &len_4_sp_M2_t_ERD,
    &len_5_sp_M2_t_ERD,
    &len_6_sp_M2_t_ERD,
    &len_7_sp_M2_t_ERD,
    &len_8_sp_M2_t_ERD,
    &len_9_sp_M2_t_ERD,
    &len_10_sp_M2_t_ERD,
    &len_11_sp_M2_t_ERD,
    &len_12_sp_M2_t_ERD,
    &len_13_sp_M2_t_ERD,
    &len_14_sp_M2_t_ERD,
    &len_15_sp_M2_t_ERD,
    &len_16_sp_M2_t_ERD,
    &incompat_flags_us_sp_M2_t_ERD,
    &incompat_flags_s_sp_M2_t_ERD,
    &compat_flags_sp_M2_t_ERD,
    &seq_sp_M2_t_ERD,
    &sysid_sp_M2_t_ERD,
    &compid_sp_M2_t_ERD,
    &msgid_sp_M2_t_ERD,
    &payload_1_sp_M2_t_ERD,
    &payload_2_sp_M2_t_ERD,
    &payload_3_sp_M2_t_ERD,
    &payload_4_sp_M2_t_ERD,
    &payload_5_sp_M2_t_ERD,
    &payload_6_sp_M2_t_ERD,
    &payload_7_sp_M2_t_ERD,
    &payload_8_sp_M2_t_ERD,
    &payload_9_sp_M2_t_ERD,
    &payload_10_sp_M2_t_ERD,
    &payload_11_sp_M2_t_ERD,
    &payload_12_sp_M2_t_ERD,
    &payload_13_sp_M2_t_ERD,
    &payload_14_sp_M2_t_ERD,
    &payload_15_sp_M2_t_ERD,
    &payload_16_sp_M2_t_ERD,
    &checksum_sp_M2_t_ERD,
    &checksum_and_signature_sp_M2_t_ERD
};

static const ERD sp_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sp_M2", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    42, // numChildren
    sp_M2_message_t__childrenOffsets,
    sp_M2_message_t__childrenERDs,
    (ERDParseSelf)&sp_M2_message_t__parseSelf,
    (ERDUnparseSelf)&sp_M2_message_t__unparseSelf,
    {.initChoice = NULL}
};

static const message_ message__compute_offsets;

static const size_t message__childrenOffsets[2] = {
    (const char *)&message__compute_offsets.sp_M1 - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.sp_M2 - (const char *)&message__compute_offsets
};

static const ERD *const message__childrenERDs[2] = {
    &sp_M1_message_t_ERD,
    &sp_M2_message_t_ERD
};

static const ERD message_ERD = {
    {
        NULL, // namedQName.prefix
        "message", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    message__childrenOffsets,
    message__childrenERDs,
    (ERDParseSelf)&message__parseSelf,
    (ERDUnparseSelf)&message__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
sp_M1_message_t__initERD(sp_M1_message_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sp_M1_message_t_ERD;
    instance->_base.parent = parent;
    instance->stx.array = instance->_a_stx;
    instance->stx.lengthInBytes = sizeof(instance->_a_stx);
    instance->stx.dynamic = false;
    instance->len.array = instance->_a_len;
    instance->len.lengthInBytes = sizeof(instance->_a_len);
    instance->len.dynamic = false;
    instance->seq.array = instance->_a_seq;
    instance->seq.lengthInBytes = sizeof(instance->_a_seq);
    instance->seq.dynamic = false;
    instance->sysid.array = instance->_a_sysid;
    instance->sysid.lengthInBytes = sizeof(instance->_a_sysid);
    instance->sysid.dynamic = false;
    instance->compid.array = instance->_a_compid;
    instance->compid.lengthInBytes = sizeof(instance->_a_compid);
    instance->compid.dynamic = false;
    instance->msgid.array = instance->_a_msgid;
    instance->msgid.lengthInBytes = sizeof(instance->_a_msgid);
    instance->msgid.dynamic = false;
    instance->payload.array = instance->_a_payload;
    instance->payload.lengthInBytes = sizeof(instance->_a_payload);
    instance->payload.dynamic = false;
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
}

static void
sp_M1_message_t__parseSelf(sp_M1_message_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->stx, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len[][1] = {{0x0E}};
    HexBinary enums_len[] = {{arrays_len[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len, 1, enums_len, "len", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_msgid[][1] = {{0x1D}};
    HexBinary enums_msgid[] = {{arrays_msgid[0], 1, false}};
    validate_hexbinary_enumeration(&instance->msgid, 1, enums_msgid, "msgid", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
}

static void
sp_M1_message_t__unparseSelf(const sp_M1_message_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->stx, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len[][1] = {{0x0E}};
    HexBinary enums_len[] = {{arrays_len[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len, 1, enums_len, "len", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_msgid[][1] = {{0x1D}};
    HexBinary enums_msgid[] = {{arrays_msgid[0], 1, false}};
    validate_hexbinary_enumeration(&instance->msgid, 1, enums_msgid, "msgid", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
}

static void
checksum_and_signature_sp_M2_t__initERD(checksum_and_signature_sp_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &checksum_and_signature_sp_M2_t_ERD;
    instance->_base.parent = parent;
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
    instance->signature.array = instance->_a_signature;
    instance->signature.lengthInBytes = sizeof(instance->_a_signature);
    instance->signature.dynamic = false;
}

static void
checksum_and_signature_sp_M2_t__parseSelf(checksum_and_signature_sp_M2_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->signature, pstate);
    if (pstate->pu.error) return;
}

static void
checksum_and_signature_sp_M2_t__unparseSelf(const checksum_and_signature_sp_M2_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->signature, ustate);
    if (ustate->pu.error) return;
}

static void
sp_M2_message_t__initERD(sp_M2_message_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sp_M2_message_t_ERD;
    instance->_base.parent = parent;
    instance->stx.array = instance->_a_stx;
    instance->stx.lengthInBytes = sizeof(instance->_a_stx);
    instance->stx.dynamic = false;
    instance->len_1.array = instance->_a_len_1;
    instance->len_1.lengthInBytes = sizeof(instance->_a_len_1);
    instance->len_1.dynamic = false;
    instance->len_2.array = instance->_a_len_2;
    instance->len_2.lengthInBytes = sizeof(instance->_a_len_2);
    instance->len_2.dynamic = false;
    instance->len_3.array = instance->_a_len_3;
    instance->len_3.lengthInBytes = sizeof(instance->_a_len_3);
    instance->len_3.dynamic = false;
    instance->len_4.array = instance->_a_len_4;
    instance->len_4.lengthInBytes = sizeof(instance->_a_len_4);
    instance->len_4.dynamic = false;
    instance->len_5.array = instance->_a_len_5;
    instance->len_5.lengthInBytes = sizeof(instance->_a_len_5);
    instance->len_5.dynamic = false;
    instance->len_6.array = instance->_a_len_6;
    instance->len_6.lengthInBytes = sizeof(instance->_a_len_6);
    instance->len_6.dynamic = false;
    instance->len_7.array = instance->_a_len_7;
    instance->len_7.lengthInBytes = sizeof(instance->_a_len_7);
    instance->len_7.dynamic = false;
    instance->len_8.array = instance->_a_len_8;
    instance->len_8.lengthInBytes = sizeof(instance->_a_len_8);
    instance->len_8.dynamic = false;
    instance->len_9.array = instance->_a_len_9;
    instance->len_9.lengthInBytes = sizeof(instance->_a_len_9);
    instance->len_9.dynamic = false;
    instance->len_10.array = instance->_a_len_10;
    instance->len_10.lengthInBytes = sizeof(instance->_a_len_10);
    instance->len_10.dynamic = false;
    instance->len_11.array = instance->_a_len_11;
    instance->len_11.lengthInBytes = sizeof(instance->_a_len_11);
    instance->len_11.dynamic = false;
    instance->len_12.array = instance->_a_len_12;
    instance->len_12.lengthInBytes = sizeof(instance->_a_len_12);
    instance->len_12.dynamic = false;
    instance->len_13.array = instance->_a_len_13;
    instance->len_13.lengthInBytes = sizeof(instance->_a_len_13);
    instance->len_13.dynamic = false;
    instance->len_14.array = instance->_a_len_14;
    instance->len_14.lengthInBytes = sizeof(instance->_a_len_14);
    instance->len_14.dynamic = false;
    instance->len_15.array = instance->_a_len_15;
    instance->len_15.lengthInBytes = sizeof(instance->_a_len_15);
    instance->len_15.dynamic = false;
    instance->len_16.array = instance->_a_len_16;
    instance->len_16.lengthInBytes = sizeof(instance->_a_len_16);
    instance->len_16.dynamic = false;
    instance->incompat_flags_us.array = instance->_a_incompat_flags_us;
    instance->incompat_flags_us.lengthInBytes = sizeof(instance->_a_incompat_flags_us);
    instance->incompat_flags_us.dynamic = false;
    instance->incompat_flags_s.array = instance->_a_incompat_flags_s;
    instance->incompat_flags_s.lengthInBytes = sizeof(instance->_a_incompat_flags_s);
    instance->incompat_flags_s.dynamic = false;
    instance->compat_flags.array = instance->_a_compat_flags;
    instance->compat_flags.lengthInBytes = sizeof(instance->_a_compat_flags);
    instance->compat_flags.dynamic = false;
    instance->seq.array = instance->_a_seq;
    instance->seq.lengthInBytes = sizeof(instance->_a_seq);
    instance->seq.dynamic = false;
    instance->sysid.array = instance->_a_sysid;
    instance->sysid.lengthInBytes = sizeof(instance->_a_sysid);
    instance->sysid.dynamic = false;
    instance->compid.array = instance->_a_compid;
    instance->compid.lengthInBytes = sizeof(instance->_a_compid);
    instance->compid.dynamic = false;
    instance->msgid.array = instance->_a_msgid;
    instance->msgid.lengthInBytes = sizeof(instance->_a_msgid);
    instance->msgid.dynamic = false;
    instance->payload_1.array = instance->_a_payload_1;
    instance->payload_1.lengthInBytes = sizeof(instance->_a_payload_1);
    instance->payload_1.dynamic = false;
    instance->payload_2.array = instance->_a_payload_2;
    instance->payload_2.lengthInBytes = sizeof(instance->_a_payload_2);
    instance->payload_2.dynamic = false;
    instance->payload_3.array = instance->_a_payload_3;
    instance->payload_3.lengthInBytes = sizeof(instance->_a_payload_3);
    instance->payload_3.dynamic = false;
    instance->payload_4.array = instance->_a_payload_4;
    instance->payload_4.lengthInBytes = sizeof(instance->_a_payload_4);
    instance->payload_4.dynamic = false;
    instance->payload_5.array = instance->_a_payload_5;
    instance->payload_5.lengthInBytes = sizeof(instance->_a_payload_5);
    instance->payload_5.dynamic = false;
    instance->payload_6.array = instance->_a_payload_6;
    instance->payload_6.lengthInBytes = sizeof(instance->_a_payload_6);
    instance->payload_6.dynamic = false;
    instance->payload_7.array = instance->_a_payload_7;
    instance->payload_7.lengthInBytes = sizeof(instance->_a_payload_7);
    instance->payload_7.dynamic = false;
    instance->payload_8.array = instance->_a_payload_8;
    instance->payload_8.lengthInBytes = sizeof(instance->_a_payload_8);
    instance->payload_8.dynamic = false;
    instance->payload_9.array = instance->_a_payload_9;
    instance->payload_9.lengthInBytes = sizeof(instance->_a_payload_9);
    instance->payload_9.dynamic = false;
    instance->payload_10.array = instance->_a_payload_10;
    instance->payload_10.lengthInBytes = sizeof(instance->_a_payload_10);
    instance->payload_10.dynamic = false;
    instance->payload_11.array = instance->_a_payload_11;
    instance->payload_11.lengthInBytes = sizeof(instance->_a_payload_11);
    instance->payload_11.dynamic = false;
    instance->payload_12.array = instance->_a_payload_12;
    instance->payload_12.lengthInBytes = sizeof(instance->_a_payload_12);
    instance->payload_12.dynamic = false;
    instance->payload_13.array = instance->_a_payload_13;
    instance->payload_13.lengthInBytes = sizeof(instance->_a_payload_13);
    instance->payload_13.dynamic = false;
    instance->payload_14.array = instance->_a_payload_14;
    instance->payload_14.lengthInBytes = sizeof(instance->_a_payload_14);
    instance->payload_14.dynamic = false;
    instance->payload_15.array = instance->_a_payload_15;
    instance->payload_15.lengthInBytes = sizeof(instance->_a_payload_15);
    instance->payload_15.dynamic = false;
    instance->payload_16.array = instance->_a_payload_16;
    instance->payload_16.lengthInBytes = sizeof(instance->_a_payload_16);
    instance->payload_16.dynamic = false;
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
    checksum_and_signature_sp_M2_t__initERD(&instance->checksum_and_signature, (InfosetBase *)instance);
}

static void
sp_M2_message_t__parseSelf(sp_M2_message_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->stx, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFD}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_1, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_1[][1] = {{0x01}};
    HexBinary enums_len_1[] = {{arrays_len_1[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_1, 1, enums_len_1, "len_1", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_2, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_2[][1] = {{0x02}};
    HexBinary enums_len_2[] = {{arrays_len_2[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_2, 1, enums_len_2, "len_2", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_3, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_3[][1] = {{0x03}};
    HexBinary enums_len_3[] = {{arrays_len_3[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_3, 1, enums_len_3, "len_3", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_4, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_4[][1] = {{0x04}};
    HexBinary enums_len_4[] = {{arrays_len_4[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_4, 1, enums_len_4, "len_4", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_5, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_5[][1] = {{0x05}};
    HexBinary enums_len_5[] = {{arrays_len_5[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_5, 1, enums_len_5, "len_5", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_6, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_6[][1] = {{0x06}};
    HexBinary enums_len_6[] = {{arrays_len_6[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_6, 1, enums_len_6, "len_6", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_7, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_7[][1] = {{0x07}};
    HexBinary enums_len_7[] = {{arrays_len_7[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_7, 1, enums_len_7, "len_7", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_8, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_8[][1] = {{0x08}};
    HexBinary enums_len_8[] = {{arrays_len_8[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_8, 1, enums_len_8, "len_8", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_9, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_9[][1] = {{0x09}};
    HexBinary enums_len_9[] = {{arrays_len_9[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_9, 1, enums_len_9, "len_9", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_10, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_10[][1] = {{0x0A}};
    HexBinary enums_len_10[] = {{arrays_len_10[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_10, 1, enums_len_10, "len_10", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_11, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_11[][1] = {{0x0B}};
    HexBinary enums_len_11[] = {{arrays_len_11[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_11, 1, enums_len_11, "len_11", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_12, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_12[][1] = {{0x0C}};
    HexBinary enums_len_12[] = {{arrays_len_12[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_12, 1, enums_len_12, "len_12", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_13, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_13[][1] = {{0x0D}};
    HexBinary enums_len_13[] = {{arrays_len_13[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_13, 1, enums_len_13, "len_13", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_14, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_14[][1] = {{0x0E}};
    HexBinary enums_len_14[] = {{arrays_len_14[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_14, 1, enums_len_14, "len_14", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_15, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_15[][1] = {{0x0F}};
    HexBinary enums_len_15[] = {{arrays_len_15[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_15, 1, enums_len_15, "len_15", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->len_16, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_len_16[][1] = {{0x10}};
    HexBinary enums_len_16[] = {{arrays_len_16[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_16, 1, enums_len_16, "len_16", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->incompat_flags_us, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_incompat_flags_us[][1] = {{0x00}};
    HexBinary enums_incompat_flags_us[] = {{arrays_incompat_flags_us[0], 1, false}};
    validate_hexbinary_enumeration(&instance->incompat_flags_us, 1, enums_incompat_flags_us, "incompat_flags_us", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->incompat_flags_s, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_incompat_flags_s[][1] = {{0x01}};
    HexBinary enums_incompat_flags_s[] = {{arrays_incompat_flags_s[0], 1, false}};
    validate_hexbinary_enumeration(&instance->incompat_flags_s, 1, enums_incompat_flags_s, "incompat_flags_s", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compat_flags, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_compat_flags[][1] = {{0x00}};
    HexBinary enums_compat_flags[] = {{arrays_compat_flags[0], 1, false}};
    validate_hexbinary_enumeration(&instance->compat_flags, 1, enums_compat_flags, "compat_flags", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_msgid[][3] = {{0x1D, 0x00, 0x00}};
    HexBinary enums_msgid[] = {{arrays_msgid[0], 3, false}};
    validate_hexbinary_enumeration(&instance->msgid, 1, enums_msgid, "msgid", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_3, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_4, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_5, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_6, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_7, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_8, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_9, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_10, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_11, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_12, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_13, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_14, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_15, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->payload_16, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
    checksum_and_signature_sp_M2_t__parseSelf(&instance->checksum_and_signature, pstate);
    if (pstate->pu.error) return;
}

static void
sp_M2_message_t__unparseSelf(const sp_M2_message_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->stx, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFD}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_1, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_1[][1] = {{0x01}};
    HexBinary enums_len_1[] = {{arrays_len_1[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_1, 1, enums_len_1, "len_1", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_2, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_2[][1] = {{0x02}};
    HexBinary enums_len_2[] = {{arrays_len_2[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_2, 1, enums_len_2, "len_2", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_3, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_3[][1] = {{0x03}};
    HexBinary enums_len_3[] = {{arrays_len_3[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_3, 1, enums_len_3, "len_3", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_4, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_4[][1] = {{0x04}};
    HexBinary enums_len_4[] = {{arrays_len_4[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_4, 1, enums_len_4, "len_4", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_5, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_5[][1] = {{0x05}};
    HexBinary enums_len_5[] = {{arrays_len_5[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_5, 1, enums_len_5, "len_5", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_6, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_6[][1] = {{0x06}};
    HexBinary enums_len_6[] = {{arrays_len_6[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_6, 1, enums_len_6, "len_6", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_7, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_7[][1] = {{0x07}};
    HexBinary enums_len_7[] = {{arrays_len_7[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_7, 1, enums_len_7, "len_7", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_8, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_8[][1] = {{0x08}};
    HexBinary enums_len_8[] = {{arrays_len_8[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_8, 1, enums_len_8, "len_8", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_9, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_9[][1] = {{0x09}};
    HexBinary enums_len_9[] = {{arrays_len_9[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_9, 1, enums_len_9, "len_9", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_10, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_10[][1] = {{0x0A}};
    HexBinary enums_len_10[] = {{arrays_len_10[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_10, 1, enums_len_10, "len_10", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_11, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_11[][1] = {{0x0B}};
    HexBinary enums_len_11[] = {{arrays_len_11[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_11, 1, enums_len_11, "len_11", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_12, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_12[][1] = {{0x0C}};
    HexBinary enums_len_12[] = {{arrays_len_12[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_12, 1, enums_len_12, "len_12", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_13, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_13[][1] = {{0x0D}};
    HexBinary enums_len_13[] = {{arrays_len_13[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_13, 1, enums_len_13, "len_13", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_14, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_14[][1] = {{0x0E}};
    HexBinary enums_len_14[] = {{arrays_len_14[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_14, 1, enums_len_14, "len_14", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_15, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_15[][1] = {{0x0F}};
    HexBinary enums_len_15[] = {{arrays_len_15[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_15, 1, enums_len_15, "len_15", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->len_16, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_len_16[][1] = {{0x10}};
    HexBinary enums_len_16[] = {{arrays_len_16[0], 1, false}};
    validate_hexbinary_enumeration(&instance->len_16, 1, enums_len_16, "len_16", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->incompat_flags_us, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_incompat_flags_us[][1] = {{0x00}};
    HexBinary enums_incompat_flags_us[] = {{arrays_incompat_flags_us[0], 1, false}};
    validate_hexbinary_enumeration(&instance->incompat_flags_us, 1, enums_incompat_flags_us, "incompat_flags_us", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->incompat_flags_s, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_incompat_flags_s[][1] = {{0x01}};
    HexBinary enums_incompat_flags_s[] = {{arrays_incompat_flags_s[0], 1, false}};
    validate_hexbinary_enumeration(&instance->incompat_flags_s, 1, enums_incompat_flags_s, "incompat_flags_s", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compat_flags, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_compat_flags[][1] = {{0x00}};
    HexBinary enums_compat_flags[] = {{arrays_compat_flags[0], 1, false}};
    validate_hexbinary_enumeration(&instance->compat_flags, 1, enums_compat_flags, "compat_flags", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_msgid[][3] = {{0x1D, 0x00, 0x00}};
    HexBinary enums_msgid[] = {{arrays_msgid[0], 3, false}};
    validate_hexbinary_enumeration(&instance->msgid, 1, enums_msgid, "msgid", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_3, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_4, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_5, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_6, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_7, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_8, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_9, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_10, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_11, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_12, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_13, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_14, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_15, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->payload_16, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
    checksum_and_signature_sp_M2_t__unparseSelf(&instance->checksum_and_signature, ustate);
    if (ustate->pu.error) return;
}

static void
message__initERD(message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &message_ERD;
    instance->_base.parent = parent;
    sp_M1_message_t__initERD(&instance->sp_M1, (InfosetBase *)instance);
    sp_M2_message_t__initERD(&instance->sp_M2, (InfosetBase *)instance);
}

static void
message__parseSelf(message_ *instance, PState *pstate)
{
    sp_M1_message_t__parseSelf(&instance->sp_M1, pstate);
    if (pstate->pu.error) return;
    sp_M2_message_t__parseSelf(&instance->sp_M2, pstate);
    if (pstate->pu.error) return;
}

static void
message__unparseSelf(const message_ *instance, UState *ustate)
{
    sp_M1_message_t__unparseSelf(&instance->sp_M1, ustate);
    if (ustate->pu.error) return;
    sp_M2_message_t__unparseSelf(&instance->sp_M2, ustate);
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
