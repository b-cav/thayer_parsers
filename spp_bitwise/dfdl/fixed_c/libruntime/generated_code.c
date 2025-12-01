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

static void prim_hdr_spp_pkt_t__parseSelf(prim_hdr_spp_pkt_t_ *instance, PState *pstate);
static void prim_hdr_spp_pkt_t__unparseSelf(const prim_hdr_spp_pkt_t_ *instance, UState *ustate);
static void array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__parseSelf(sec_hdr_spp_pkt_t_ *instance, PState *pstate);
static void array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__unparseSelf(const sec_hdr_spp_pkt_t_ *instance, UState *ustate);
static size_t array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__getArraySize(const sec_hdr_spp_pkt_t_ *instance);
static void sec_hdr_spp_pkt_t__parseSelf(sec_hdr_spp_pkt_t_ *instance, PState *pstate);
static void sec_hdr_spp_pkt_t__unparseSelf(const sec_hdr_spp_pkt_t_ *instance, UState *ustate);
static void array_sec_hdr_spp_pkt_t_spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate);
static void array_sec_hdr_spp_pkt_t_spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate);
static size_t array_sec_hdr_spp_pkt_t_spp_pkt__getArraySize(const spp_pkt_ *instance);
static void array_idle_data_idle_df_t_idle_df_udf_t__parseSelf(idle_df_udf_t_ *instance, PState *pstate);
static void array_idle_data_idle_df_t_idle_df_udf_t__unparseSelf(const idle_df_udf_t_ *instance, UState *ustate);
static size_t array_idle_data_idle_df_t_idle_df_udf_t__getArraySize(const idle_df_udf_t_ *instance);
static void idle_df_udf_t__parseSelf(idle_df_udf_t_ *instance, PState *pstate);
static void idle_df_udf_t__unparseSelf(const idle_df_udf_t_ *instance, UState *ustate);
static void array_idle_df_udf_t_udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate);
static void array_idle_df_udf_t_udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate);
static size_t array_idle_df_udf_t_udf_spp_pkt_t__getArraySize(const udf_spp_pkt_t_ *instance);
static void array_octet_other_df_t_other_df_udf_t__parseSelf(other_df_udf_t_ *instance, PState *pstate);
static void array_octet_other_df_t_other_df_udf_t__unparseSelf(const other_df_udf_t_ *instance, UState *ustate);
static size_t array_octet_other_df_t_other_df_udf_t__getArraySize(const other_df_udf_t_ *instance);
static void other_df_udf_t__parseSelf(other_df_udf_t_ *instance, PState *pstate);
static void other_df_udf_t__unparseSelf(const other_df_udf_t_ *instance, UState *ustate);
static void array_other_df_udf_t_udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate);
static void array_other_df_udf_t_udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate);
static size_t array_other_df_udf_t_udf_spp_pkt_t__getArraySize(const udf_spp_pkt_t_ *instance);
static void udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate);
static void udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate);
static void array_udf_spp_pkt_t_spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate);
static void array_udf_spp_pkt_t_spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate);
static size_t array_udf_spp_pkt_t_spp_pkt__getArraySize(const spp_pkt_ *instance);
static void spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate);
static void spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD ver_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ver", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD type_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD shf_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "shf", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD apid_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "apid", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_fl_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq_fl", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD seq_ct_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "seq_ct", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD len_prim_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "len", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const prim_hdr_spp_pkt_t_ prim_hdr_spp_pkt_t__compute_offsets;

static const size_t prim_hdr_spp_pkt_t__childrenOffsets[7] = {
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.ver - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.type - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.shf - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.apid - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.seq_fl - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.seq_ct - (const char *)&prim_hdr_spp_pkt_t__compute_offsets,
    (const char *)&prim_hdr_spp_pkt_t__compute_offsets.len - (const char *)&prim_hdr_spp_pkt_t__compute_offsets
};

static const ERD *const prim_hdr_spp_pkt_t__childrenERDs[7] = {
    &ver_prim_hdr_t_ERD,
    &type_prim_hdr_t_ERD,
    &shf_prim_hdr_t_ERD,
    &apid_prim_hdr_t_ERD,
    &seq_fl_prim_hdr_t_ERD,
    &seq_ct_prim_hdr_t_ERD,
    &len_prim_hdr_t_ERD
};

static const ERD prim_hdr_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "prim_hdr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    prim_hdr_spp_pkt_t__childrenOffsets,
    prim_hdr_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&prim_hdr_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&prim_hdr_spp_pkt_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD octet_sec_hdr_t_ERD = {
    {
        NULL, // namedQName.prefix
        "octet", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const sec_hdr_spp_pkt_t_ array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__compute_offsets;

static const size_t array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__childrenOffsets[1] = {
    (const char *)&array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__compute_offsets.octet[1] - (const char *)&array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__compute_offsets.octet[0]
};

static const ERD *const array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__childrenERDs[1] = {
    &octet_sec_hdr_t_ERD
};

static const ERD array_octet_sec_hdr_t_sec_hdr_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "octet", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    65536, // maxOccurs
    array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__childrenOffsets,
    array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__getArraySize}
};

static const sec_hdr_spp_pkt_t_ sec_hdr_spp_pkt_t__compute_offsets;

static const size_t sec_hdr_spp_pkt_t__childrenOffsets[1] = {
    (const char *)&sec_hdr_spp_pkt_t__compute_offsets.octet[0] - (const char *)&sec_hdr_spp_pkt_t__compute_offsets
};

static const ERD *const sec_hdr_spp_pkt_t__childrenERDs[1] = {
    &array_octet_sec_hdr_t_sec_hdr_spp_pkt_t_ERD
};

static const ERD sec_hdr_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sec_hdr", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    sec_hdr_spp_pkt_t__childrenOffsets,
    sec_hdr_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&sec_hdr_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&sec_hdr_spp_pkt_t__unparseSelf,
    {.initChoice = NULL}
};

static const spp_pkt_ array_sec_hdr_spp_pkt_t_spp_pkt__compute_offsets;

static const size_t array_sec_hdr_spp_pkt_t_spp_pkt__childrenOffsets[1] = {
    (const char *)&array_sec_hdr_spp_pkt_t_spp_pkt__compute_offsets.sec_hdr[1] - (const char *)&array_sec_hdr_spp_pkt_t_spp_pkt__compute_offsets.sec_hdr[0]
};

static const ERD *const array_sec_hdr_spp_pkt_t_spp_pkt__childrenERDs[1] = {
    &sec_hdr_spp_pkt_t_ERD
};

static const ERD array_sec_hdr_spp_pkt_t_spp_pkt_ERD = {
    {
        NULL, // namedQName.prefix
        "sec_hdr", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_sec_hdr_spp_pkt_t_spp_pkt__childrenOffsets,
    array_sec_hdr_spp_pkt_t_spp_pkt__childrenERDs,
    (ERDParseSelf)&array_sec_hdr_spp_pkt_t_spp_pkt__parseSelf,
    (ERDUnparseSelf)&array_sec_hdr_spp_pkt_t_spp_pkt__unparseSelf,
    {.getArraySize = (GetArraySize)&array_sec_hdr_spp_pkt_t_spp_pkt__getArraySize}
};

static const ERD idle_data_idle_df_t_ERD = {
    {
        NULL, // namedQName.prefix
        "idle_data", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const idle_df_udf_t_ array_idle_data_idle_df_t_idle_df_udf_t__compute_offsets;

static const size_t array_idle_data_idle_df_t_idle_df_udf_t__childrenOffsets[1] = {
    (const char *)&array_idle_data_idle_df_t_idle_df_udf_t__compute_offsets.idle_data[1] - (const char *)&array_idle_data_idle_df_t_idle_df_udf_t__compute_offsets.idle_data[0]
};

static const ERD *const array_idle_data_idle_df_t_idle_df_udf_t__childrenERDs[1] = {
    &idle_data_idle_df_t_ERD
};

static const ERD array_idle_data_idle_df_t_idle_df_udf_t_ERD = {
    {
        NULL, // namedQName.prefix
        "idle_data", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    65536, // maxOccurs
    array_idle_data_idle_df_t_idle_df_udf_t__childrenOffsets,
    array_idle_data_idle_df_t_idle_df_udf_t__childrenERDs,
    (ERDParseSelf)&array_idle_data_idle_df_t_idle_df_udf_t__parseSelf,
    (ERDUnparseSelf)&array_idle_data_idle_df_t_idle_df_udf_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_idle_data_idle_df_t_idle_df_udf_t__getArraySize}
};

static const idle_df_udf_t_ idle_df_udf_t__compute_offsets;

static const size_t idle_df_udf_t__childrenOffsets[1] = {
    (const char *)&idle_df_udf_t__compute_offsets.idle_data[0] - (const char *)&idle_df_udf_t__compute_offsets
};

static const ERD *const idle_df_udf_t__childrenERDs[1] = {
    &array_idle_data_idle_df_t_idle_df_udf_t_ERD
};

static const ERD idle_df_udf_t_ERD = {
    {
        NULL, // namedQName.prefix
        "idle_df", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    idle_df_udf_t__childrenOffsets,
    idle_df_udf_t__childrenERDs,
    (ERDParseSelf)&idle_df_udf_t__parseSelf,
    (ERDUnparseSelf)&idle_df_udf_t__unparseSelf,
    {.initChoice = NULL}
};

static const udf_spp_pkt_t_ array_idle_df_udf_t_udf_spp_pkt_t__compute_offsets;

static const size_t array_idle_df_udf_t_udf_spp_pkt_t__childrenOffsets[1] = {
    (const char *)&array_idle_df_udf_t_udf_spp_pkt_t__compute_offsets.idle_df[1] - (const char *)&array_idle_df_udf_t_udf_spp_pkt_t__compute_offsets.idle_df[0]
};

static const ERD *const array_idle_df_udf_t_udf_spp_pkt_t__childrenERDs[1] = {
    &idle_df_udf_t_ERD
};

static const ERD array_idle_df_udf_t_udf_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "idle_df", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_idle_df_udf_t_udf_spp_pkt_t__childrenOffsets,
    array_idle_df_udf_t_udf_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&array_idle_df_udf_t_udf_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&array_idle_df_udf_t_udf_spp_pkt_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_idle_df_udf_t_udf_spp_pkt_t__getArraySize}
};

static const ERD octet_other_df_t_ERD = {
    {
        NULL, // namedQName.prefix
        "octet", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const other_df_udf_t_ array_octet_other_df_t_other_df_udf_t__compute_offsets;

static const size_t array_octet_other_df_t_other_df_udf_t__childrenOffsets[1] = {
    (const char *)&array_octet_other_df_t_other_df_udf_t__compute_offsets.octet[1] - (const char *)&array_octet_other_df_t_other_df_udf_t__compute_offsets.octet[0]
};

static const ERD *const array_octet_other_df_t_other_df_udf_t__childrenERDs[1] = {
    &octet_other_df_t_ERD
};

static const ERD array_octet_other_df_t_other_df_udf_t_ERD = {
    {
        NULL, // namedQName.prefix
        "octet", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    65536, // maxOccurs
    array_octet_other_df_t_other_df_udf_t__childrenOffsets,
    array_octet_other_df_t_other_df_udf_t__childrenERDs,
    (ERDParseSelf)&array_octet_other_df_t_other_df_udf_t__parseSelf,
    (ERDUnparseSelf)&array_octet_other_df_t_other_df_udf_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_octet_other_df_t_other_df_udf_t__getArraySize}
};

static const other_df_udf_t_ other_df_udf_t__compute_offsets;

static const size_t other_df_udf_t__childrenOffsets[1] = {
    (const char *)&other_df_udf_t__compute_offsets.octet[0] - (const char *)&other_df_udf_t__compute_offsets
};

static const ERD *const other_df_udf_t__childrenERDs[1] = {
    &array_octet_other_df_t_other_df_udf_t_ERD
};

static const ERD other_df_udf_t_ERD = {
    {
        NULL, // namedQName.prefix
        "other_df", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    other_df_udf_t__childrenOffsets,
    other_df_udf_t__childrenERDs,
    (ERDParseSelf)&other_df_udf_t__parseSelf,
    (ERDUnparseSelf)&other_df_udf_t__unparseSelf,
    {.initChoice = NULL}
};

static const udf_spp_pkt_t_ array_other_df_udf_t_udf_spp_pkt_t__compute_offsets;

static const size_t array_other_df_udf_t_udf_spp_pkt_t__childrenOffsets[1] = {
    (const char *)&array_other_df_udf_t_udf_spp_pkt_t__compute_offsets.other_df[1] - (const char *)&array_other_df_udf_t_udf_spp_pkt_t__compute_offsets.other_df[0]
};

static const ERD *const array_other_df_udf_t_udf_spp_pkt_t__childrenERDs[1] = {
    &other_df_udf_t_ERD
};

static const ERD array_other_df_udf_t_udf_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "other_df", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_other_df_udf_t_udf_spp_pkt_t__childrenOffsets,
    array_other_df_udf_t_udf_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&array_other_df_udf_t_udf_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&array_other_df_udf_t_udf_spp_pkt_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_other_df_udf_t_udf_spp_pkt_t__getArraySize}
};

static const udf_spp_pkt_t_ udf_spp_pkt_t__compute_offsets;

static const size_t udf_spp_pkt_t__childrenOffsets[2] = {
    (const char *)&udf_spp_pkt_t__compute_offsets.idle_df[0] - (const char *)&udf_spp_pkt_t__compute_offsets,
    (const char *)&udf_spp_pkt_t__compute_offsets.other_df[0] - (const char *)&udf_spp_pkt_t__compute_offsets
};

static const ERD *const udf_spp_pkt_t__childrenERDs[2] = {
    &array_idle_df_udf_t_udf_spp_pkt_t_ERD,
    &array_other_df_udf_t_udf_spp_pkt_t_ERD
};

static const ERD udf_spp_pkt_t_ERD = {
    {
        NULL, // namedQName.prefix
        "udf", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    udf_spp_pkt_t__childrenOffsets,
    udf_spp_pkt_t__childrenERDs,
    (ERDParseSelf)&udf_spp_pkt_t__parseSelf,
    (ERDUnparseSelf)&udf_spp_pkt_t__unparseSelf,
    {.initChoice = NULL}
};

static const spp_pkt_ array_udf_spp_pkt_t_spp_pkt__compute_offsets;

static const size_t array_udf_spp_pkt_t_spp_pkt__childrenOffsets[1] = {
    (const char *)&array_udf_spp_pkt_t_spp_pkt__compute_offsets.udf[1] - (const char *)&array_udf_spp_pkt_t_spp_pkt__compute_offsets.udf[0]
};

static const ERD *const array_udf_spp_pkt_t_spp_pkt__childrenERDs[1] = {
    &udf_spp_pkt_t_ERD
};

static const ERD array_udf_spp_pkt_t_spp_pkt_ERD = {
    {
        NULL, // namedQName.prefix
        "udf", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_udf_spp_pkt_t_spp_pkt__childrenOffsets,
    array_udf_spp_pkt_t_spp_pkt__childrenERDs,
    (ERDParseSelf)&array_udf_spp_pkt_t_spp_pkt__parseSelf,
    (ERDUnparseSelf)&array_udf_spp_pkt_t_spp_pkt__unparseSelf,
    {.getArraySize = (GetArraySize)&array_udf_spp_pkt_t_spp_pkt__getArraySize}
};

static const spp_pkt_ spp_pkt__compute_offsets;

static const size_t spp_pkt__childrenOffsets[3] = {
    (const char *)&spp_pkt__compute_offsets.prim_hdr - (const char *)&spp_pkt__compute_offsets,
    (const char *)&spp_pkt__compute_offsets.sec_hdr[0] - (const char *)&spp_pkt__compute_offsets,
    (const char *)&spp_pkt__compute_offsets.udf[0] - (const char *)&spp_pkt__compute_offsets
};

static const ERD *const spp_pkt__childrenERDs[3] = {
    &prim_hdr_spp_pkt_t_ERD,
    &array_sec_hdr_spp_pkt_t_spp_pkt_ERD,
    &array_udf_spp_pkt_t_spp_pkt_ERD
};

static const ERD spp_pkt_ERD = {
    {
        NULL, // namedQName.prefix
        "spp_pkt", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    spp_pkt__childrenOffsets,
    spp_pkt__childrenERDs,
    (ERDParseSelf)&spp_pkt__parseSelf,
    (ERDUnparseSelf)&spp_pkt__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
prim_hdr_spp_pkt_t__initERD(prim_hdr_spp_pkt_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &prim_hdr_spp_pkt_t_ERD;
    instance->_base.parent = parent;
}

static void
prim_hdr_spp_pkt_t__parseSelf(prim_hdr_spp_pkt_t_ *instance, PState *pstate)
{
    parse_be_uint8(&instance->ver, 3, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ver <= 0, "ver", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->type, 1, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->shf, 1, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->apid, 11, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->seq_fl, 2, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->seq_ct, 14, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->len, 16, pstate);
    if (pstate->pu.error) return;
}

static void
prim_hdr_spp_pkt_t__unparseSelf(const prim_hdr_spp_pkt_t_ *instance, UState *ustate)
{
    unparse_be_uint8(instance->ver, 3, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ver <= 0, "ver", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->type, 1, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->shf, 1, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->apid, 11, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->seq_fl, 2, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->seq_ct, 14, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->len, 16, ustate);
    if (ustate->pu.error) return;
}

static void
array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__initERD(sec_hdr_spp_pkt_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 65536; i++)
    {
        instance->octet[i].array = instance->_a_octet[i];
        instance->octet[i].lengthInBytes = sizeof(instance->_a_octet[i]);
        instance->octet[i].dynamic = false;
    }
}

static void
array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__parseSelf(sec_hdr_spp_pkt_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_octet_sec_hdr_t_sec_hdr_spp_pkt_t_", arraySize, 0, 65536, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->octet[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__unparseSelf(const sec_hdr_spp_pkt_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_octet_sec_hdr_t_sec_hdr_spp_pkt_t_", arraySize, 0, 65536, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->octet[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__getArraySize(const sec_hdr_spp_pkt_t_ *instance)
{
    UNUSED(instance);
    return ((spp_pkt_ *)instance->_base.parent)->prim_hdr.len+1;
}

static void
sec_hdr_spp_pkt_t__initERD(sec_hdr_spp_pkt_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &sec_hdr_spp_pkt_t_ERD;
    instance->_base.parent = parent;
    array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__initERD(instance, parent);
}

static void
sec_hdr_spp_pkt_t__parseSelf(sec_hdr_spp_pkt_t_ *instance, PState *pstate)
{
    array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
sec_hdr_spp_pkt_t__unparseSelf(const sec_hdr_spp_pkt_t_ *instance, UState *ustate)
{
    array_octet_sec_hdr_t_sec_hdr_spp_pkt_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_sec_hdr_spp_pkt_t_spp_pkt__initERD(spp_pkt_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        sec_hdr_spp_pkt_t__initERD(&instance->sec_hdr[i], (InfosetBase *)instance);
    }
}

static void
array_sec_hdr_spp_pkt_t_spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate)
{
    const size_t arraySize = array_sec_hdr_spp_pkt_t_spp_pkt__getArraySize(instance);
    validate_array_bounds("array_sec_hdr_spp_pkt_t_spp_pkt_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sec_hdr_spp_pkt_t__parseSelf(&instance->sec_hdr[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_sec_hdr_spp_pkt_t_spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate)
{
    const size_t arraySize = array_sec_hdr_spp_pkt_t_spp_pkt__getArraySize(instance);
    validate_array_bounds("array_sec_hdr_spp_pkt_t_spp_pkt_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        sec_hdr_spp_pkt_t__unparseSelf(&instance->sec_hdr[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_sec_hdr_spp_pkt_t_spp_pkt__getArraySize(const spp_pkt_ *instance)
{
if (instance->prim_hdr.shf == 1) {
    return(1);
} else {
    return(0);
}
}

static void
array_idle_data_idle_df_t_idle_df_udf_t__initERD(idle_df_udf_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 65536; i++)
    {
        instance->idle_data[i].array = instance->_a_idle_data[i];
        instance->idle_data[i].lengthInBytes = sizeof(instance->_a_idle_data[i]);
        instance->idle_data[i].dynamic = false;
    }
}

static void
array_idle_data_idle_df_t_idle_df_udf_t__parseSelf(idle_df_udf_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_idle_data_idle_df_t_idle_df_udf_t__getArraySize(instance);
    validate_array_bounds("array_idle_data_idle_df_t_idle_df_udf_t_", arraySize, 0, 65536, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->idle_data[i], pstate);
        if (pstate->pu.error) return;
        uint8_t arrays_idle_data[][2] = {{0xAA, 0xAA}};
        HexBinary enums_idle_data[] = {{arrays_idle_data[0], 2, false}};
        validate_hexbinary_enumeration(&instance->idle_data[i], 1, enums_idle_data, "idle_data", &pstate->pu);
        if (pstate->pu.error) return;
    }
}

static void
array_idle_data_idle_df_t_idle_df_udf_t__unparseSelf(const idle_df_udf_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_idle_data_idle_df_t_idle_df_udf_t__getArraySize(instance);
    validate_array_bounds("array_idle_data_idle_df_t_idle_df_udf_t_", arraySize, 0, 65536, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->idle_data[i], ustate);
        if (ustate->pu.error) return;
        uint8_t arrays_idle_data[][2] = {{0xAA, 0xAA}};
        HexBinary enums_idle_data[] = {{arrays_idle_data[0], 2, false}};
        validate_hexbinary_enumeration(&instance->idle_data[i], 1, enums_idle_data, "idle_data", &ustate->pu);
        if (ustate->pu.error) return;
    }
}

static size_t
array_idle_data_idle_df_t_idle_df_udf_t__getArraySize(const idle_df_udf_t_ *instance)
{
if (((spp_pkt_ *)instance->_base.parent->parent)->prim_hdr.len == 1) {
    return(1);
} else {
    return(0);
}
}

static void
idle_df_udf_t__initERD(idle_df_udf_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &idle_df_udf_t_ERD;
    instance->_base.parent = parent;
    array_idle_data_idle_df_t_idle_df_udf_t__initERD(instance, parent);
}

static void
idle_df_udf_t__parseSelf(idle_df_udf_t_ *instance, PState *pstate)
{
    array_idle_data_idle_df_t_idle_df_udf_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
idle_df_udf_t__unparseSelf(const idle_df_udf_t_ *instance, UState *ustate)
{
    array_idle_data_idle_df_t_idle_df_udf_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_idle_df_udf_t_udf_spp_pkt_t__initERD(udf_spp_pkt_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        idle_df_udf_t__initERD(&instance->idle_df[i], (InfosetBase *)instance);
    }
}

static void
array_idle_df_udf_t_udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_idle_df_udf_t_udf_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_idle_df_udf_t_udf_spp_pkt_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        idle_df_udf_t__parseSelf(&instance->idle_df[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_idle_df_udf_t_udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_idle_df_udf_t_udf_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_idle_df_udf_t_udf_spp_pkt_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        idle_df_udf_t__unparseSelf(&instance->idle_df[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_idle_df_udf_t_udf_spp_pkt_t__getArraySize(const udf_spp_pkt_t_ *instance)
{
if (((spp_pkt_ *)instance->_base.parent)->prim_hdr.apid == 2047) {
    return(1);
} else {
    return(0);
}
}

static void
array_octet_other_df_t_other_df_udf_t__initERD(other_df_udf_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 65536; i++)
    {
        instance->octet[i].array = instance->_a_octet[i];
        instance->octet[i].lengthInBytes = sizeof(instance->_a_octet[i]);
        instance->octet[i].dynamic = false;
    }
}

static void
array_octet_other_df_t_other_df_udf_t__parseSelf(other_df_udf_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_octet_other_df_t_other_df_udf_t__getArraySize(instance);
    validate_array_bounds("array_octet_other_df_t_other_df_udf_t_", arraySize, 0, 65536, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        parse_hexBinary(&instance->octet[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_octet_other_df_t_other_df_udf_t__unparseSelf(const other_df_udf_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_octet_other_df_t_other_df_udf_t__getArraySize(instance);
    validate_array_bounds("array_octet_other_df_t_other_df_udf_t_", arraySize, 0, 65536, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        unparse_hexBinary(instance->octet[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_octet_other_df_t_other_df_udf_t__getArraySize(const other_df_udf_t_ *instance)
{
    UNUSED(instance);
    return ((spp_pkt_ *)instance->_base.parent->parent)->prim_hdr.len+1;
}

static void
other_df_udf_t__initERD(other_df_udf_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &other_df_udf_t_ERD;
    instance->_base.parent = parent;
    array_octet_other_df_t_other_df_udf_t__initERD(instance, parent);
}

static void
other_df_udf_t__parseSelf(other_df_udf_t_ *instance, PState *pstate)
{
    array_octet_other_df_t_other_df_udf_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
other_df_udf_t__unparseSelf(const other_df_udf_t_ *instance, UState *ustate)
{
    array_octet_other_df_t_other_df_udf_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_other_df_udf_t_udf_spp_pkt_t__initERD(udf_spp_pkt_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        other_df_udf_t__initERD(&instance->other_df[i], (InfosetBase *)instance);
    }
}

static void
array_other_df_udf_t_udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_other_df_udf_t_udf_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_other_df_udf_t_udf_spp_pkt_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        other_df_udf_t__parseSelf(&instance->other_df[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_other_df_udf_t_udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_other_df_udf_t_udf_spp_pkt_t__getArraySize(instance);
    validate_array_bounds("array_other_df_udf_t_udf_spp_pkt_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        other_df_udf_t__unparseSelf(&instance->other_df[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_other_df_udf_t_udf_spp_pkt_t__getArraySize(const udf_spp_pkt_t_ *instance)
{
if (((spp_pkt_ *)instance->_base.parent)->prim_hdr.apid == 2047) {
    return(0);
} else {
    return(1);
}
}

static void
udf_spp_pkt_t__initERD(udf_spp_pkt_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &udf_spp_pkt_t_ERD;
    instance->_base.parent = parent;
    array_idle_df_udf_t_udf_spp_pkt_t__initERD(instance, parent);
    array_other_df_udf_t_udf_spp_pkt_t__initERD(instance, parent);
}

static void
udf_spp_pkt_t__parseSelf(udf_spp_pkt_t_ *instance, PState *pstate)
{
    array_idle_df_udf_t_udf_spp_pkt_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_other_df_udf_t_udf_spp_pkt_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
udf_spp_pkt_t__unparseSelf(const udf_spp_pkt_t_ *instance, UState *ustate)
{
    array_idle_df_udf_t_udf_spp_pkt_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_other_df_udf_t_udf_spp_pkt_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_udf_spp_pkt_t_spp_pkt__initERD(spp_pkt_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        udf_spp_pkt_t__initERD(&instance->udf[i], (InfosetBase *)instance);
    }
}

static void
array_udf_spp_pkt_t_spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate)
{
    const size_t arraySize = array_udf_spp_pkt_t_spp_pkt__getArraySize(instance);
    validate_array_bounds("array_udf_spp_pkt_t_spp_pkt_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        udf_spp_pkt_t__parseSelf(&instance->udf[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_udf_spp_pkt_t_spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate)
{
    const size_t arraySize = array_udf_spp_pkt_t_spp_pkt__getArraySize(instance);
    validate_array_bounds("array_udf_spp_pkt_t_spp_pkt_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        udf_spp_pkt_t__unparseSelf(&instance->udf[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_udf_spp_pkt_t_spp_pkt__getArraySize(const spp_pkt_ *instance)
{
if (instance->prim_hdr.shf == 0) {
    return(1);
} else {
    return(0);
}
}

static void
spp_pkt__initERD(spp_pkt_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &spp_pkt_ERD;
    instance->_base.parent = parent;
    prim_hdr_spp_pkt_t__initERD(&instance->prim_hdr, (InfosetBase *)instance);
    array_sec_hdr_spp_pkt_t_spp_pkt__initERD(instance, parent);
    array_udf_spp_pkt_t_spp_pkt__initERD(instance, parent);
}

static void
spp_pkt__parseSelf(spp_pkt_ *instance, PState *pstate)
{
    prim_hdr_spp_pkt_t__parseSelf(&instance->prim_hdr, pstate);
    if (pstate->pu.error) return;
    array_sec_hdr_spp_pkt_t_spp_pkt__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_udf_spp_pkt_t_spp_pkt__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
spp_pkt__unparseSelf(const spp_pkt_ *instance, UState *ustate)
{
    prim_hdr_spp_pkt_t__unparseSelf(&instance->prim_hdr, ustate);
    if (ustate->pu.error) return;
    array_sec_hdr_spp_pkt_t_spp_pkt__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_udf_spp_pkt_t_spp_pkt__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static spp_pkt_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        spp_pkt__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
