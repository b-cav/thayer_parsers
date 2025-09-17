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
    PRIMITIVE_UINT8, // typeCode
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

static const message_ message__compute_offsets;

static const size_t message__childrenOffsets[8] = {
    (const char *)&message__compute_offsets.stx - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.len - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.seq - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.sysid - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.compid - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.msgid - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.payload - (const char *)&message__compute_offsets,
    (const char *)&message__compute_offsets.checksum - (const char *)&message__compute_offsets
};

static const ERD *const message__childrenERDs[8] = {
    &stx_sp_M1_t_ERD,
    &len_sp_M1_t_ERD,
    &seq_sp_M1_t_ERD,
    &sysid_sp_M1_t_ERD,
    &compid_sp_M1_t_ERD,
    &msgid_sp_M1_t_ERD,
    &payload_sp_M1_t_ERD,
    &checksum_sp_M1_t_ERD
};

static const ERD message_ERD = {
    {
        NULL, // namedQName.prefix
        "message", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
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
    instance->stx.array = instance->_a_stx;
    instance->stx.lengthInBytes = sizeof(instance->_a_stx);
    instance->stx.dynamic = false;
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
message__parseSelf(message_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->stx, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->len, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_len[] = {14};
    validate_integer_enumeration(instance->len, 1, enums_len, "len", &pstate->pu);
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
message__unparseSelf(const message_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->stx, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_stx[][1] = {{0xFE}};
    HexBinary enums_stx[] = {{arrays_stx[0], 1, false}};
    validate_hexbinary_enumeration(&instance->stx, 1, enums_stx, "stx", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->len, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_len[] = {14};
    validate_integer_enumeration(instance->len, 1, enums_len, "len", &ustate->pu);
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
