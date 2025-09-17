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

static void header_spM1_t__parseSelf(header_spM1_t_ *instance, PState *pstate);
static void header_spM1_t__unparseSelf(const header_spM1_t_ *instance, UState *ustate);
static void payload_spM1_t__parseSelf(payload_spM1_t_ *instance, PState *pstate);
static void payload_spM1_t__unparseSelf(const payload_spM1_t_ *instance, UState *ustate);
static void P__parseSelf(P_ *instance, PState *pstate);
static void P__unparseSelf(const P_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD MAV1CODE_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "MAV1CODE", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD lengthM1_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "lengthM1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD packetSequence_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "packetSequence", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD sysID_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "sysID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD compID_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "compID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD messageID_messageHeaderM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "messageID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const header_spM1_t_ header_spM1_t__compute_offsets;

static const size_t header_spM1_t__childrenOffsets[6] = {
    (const char *)&header_spM1_t__compute_offsets.MAV1CODE - (const char *)&header_spM1_t__compute_offsets,
    (const char *)&header_spM1_t__compute_offsets.lengthM1 - (const char *)&header_spM1_t__compute_offsets,
    (const char *)&header_spM1_t__compute_offsets.packetSequence - (const char *)&header_spM1_t__compute_offsets,
    (const char *)&header_spM1_t__compute_offsets.sysID - (const char *)&header_spM1_t__compute_offsets,
    (const char *)&header_spM1_t__compute_offsets.compID - (const char *)&header_spM1_t__compute_offsets,
    (const char *)&header_spM1_t__compute_offsets.messageID - (const char *)&header_spM1_t__compute_offsets
};

static const ERD *const header_spM1_t__childrenERDs[6] = {
    &MAV1CODE_messageHeaderM1_t_ERD,
    &lengthM1_messageHeaderM1_t_ERD,
    &packetSequence_messageHeaderM1_t_ERD,
    &sysID_messageHeaderM1_t_ERD,
    &compID_messageHeaderM1_t_ERD,
    &messageID_messageHeaderM1_t_ERD
};

static const ERD header_spM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "header", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    header_spM1_t__childrenOffsets,
    header_spM1_t__childrenERDs,
    (ERDParseSelf)&header_spM1_t__parseSelf,
    (ERDUnparseSelf)&header_spM1_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD payload_M1Payload_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const payload_spM1_t_ payload_spM1_t__compute_offsets;

static const size_t payload_spM1_t__childrenOffsets[1] = {
    (const char *)&payload_spM1_t__compute_offsets.payload[0] - (const char *)&payload_spM1_t__compute_offsets
};

static const ERD *const payload_spM1_t__childrenERDs[1] = {
    &array_payload_M1Payload_t_payload_spM1_t_ERD
};

static const ERD payload_spM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "payload", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    payload_spM1_t__childrenOffsets,
    payload_spM1_t__childrenERDs,
    (ERDParseSelf)&payload_spM1_t__parseSelf,
    (ERDUnparseSelf)&payload_spM1_t__unparseSelf,
    {.initChoice = NULL}
};

static const ERD checksum_spM1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "checksum", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const P_ P__compute_offsets;

static const size_t P__childrenOffsets[3] = {
    (const char *)&P__compute_offsets.header - (const char *)&P__compute_offsets,
    (const char *)&P__compute_offsets.payload - (const char *)&P__compute_offsets,
    (const char *)&P__compute_offsets.checksum - (const char *)&P__compute_offsets
};

static const ERD *const P__childrenERDs[3] = {
    &header_spM1_t_ERD,
    &payload_spM1_t_ERD,
    &checksum_spM1_t_ERD
};

static const ERD P_ERD = {
    {
        NULL, // namedQName.prefix
        "P", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    P__childrenOffsets,
    P__childrenERDs,
    (ERDParseSelf)&P__parseSelf,
    (ERDUnparseSelf)&P__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
header_spM1_t__initERD(header_spM1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &header_spM1_t_ERD;
    instance->_base.parent = parent;
    instance->MAV1CODE.array = instance->_a_MAV1CODE;
    instance->MAV1CODE.lengthInBytes = sizeof(instance->_a_MAV1CODE);
    instance->MAV1CODE.dynamic = false;
    instance->packetSequence.array = instance->_a_packetSequence;
    instance->packetSequence.lengthInBytes = sizeof(instance->_a_packetSequence);
    instance->packetSequence.dynamic = false;
    instance->sysID.array = instance->_a_sysID;
    instance->sysID.lengthInBytes = sizeof(instance->_a_sysID);
    instance->sysID.dynamic = false;
    instance->compID.array = instance->_a_compID;
    instance->compID.lengthInBytes = sizeof(instance->_a_compID);
    instance->compID.dynamic = false;
    instance->messageID.array = instance->_a_messageID;
    instance->messageID.lengthInBytes = sizeof(instance->_a_messageID);
    instance->messageID.dynamic = false;
}

static void
header_spM1_t__parseSelf(header_spM1_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->MAV1CODE, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_MAV1CODE[][1] = {{0xFE}};
    HexBinary enums_MAV1CODE[] = {{arrays_MAV1CODE[0], 1, false}};
    validate_hexbinary_enumeration(&instance->MAV1CODE, 1, enums_MAV1CODE, "MAV1CODE", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->lengthM1, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_lengthM1[] = {14};
    validate_integer_enumeration(instance->lengthM1, 1, enums_lengthM1, "lengthM1", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->packetSequence, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysID, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compID, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->messageID, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_messageID[][1] = {{0x1D}};
    HexBinary enums_messageID[] = {{arrays_messageID[0], 1, false}};
    validate_hexbinary_enumeration(&instance->messageID, 1, enums_messageID, "messageID", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
header_spM1_t__unparseSelf(const header_spM1_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->MAV1CODE, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_MAV1CODE[][1] = {{0xFE}};
    HexBinary enums_MAV1CODE[] = {{arrays_MAV1CODE[0], 1, false}};
    validate_hexbinary_enumeration(&instance->MAV1CODE, 1, enums_MAV1CODE, "MAV1CODE", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->lengthM1, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_lengthM1[] = {14};
    validate_integer_enumeration(instance->lengthM1, 1, enums_lengthM1, "lengthM1", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->packetSequence, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysID, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compID, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->messageID, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_messageID[][1] = {{0x1D}};
    HexBinary enums_messageID[] = {{arrays_messageID[0], 1, false}};
    validate_hexbinary_enumeration(&instance->messageID, 1, enums_messageID, "messageID", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
payload_spM1_t__initERD(payload_spM1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &payload_spM1_t_ERD;
    instance->_base.parent = parent;
    instance->payload.array = instance->_a_payload;
    instance->payload.lengthInBytes = sizeof(instance->_a_payload);
    instance->payload.dynamic = false;
}

static void
payload_spM1_t__parseSelf(payload_spM1_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->payload, pstate);
    if (pstate->pu.error) return;
}

static void
payload_spM1_t__unparseSelf(const payload_spM1_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->payload, ustate);
    if (ustate->pu.error) return;
}

static void
P__initERD(P_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &P_ERD;
    instance->_base.parent = parent;
    header_spM1_t__initERD(&instance->header, (InfosetBase *)instance);
    payload_spM1_t__initERD(&instance->payload, (InfosetBase *)instance);
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
}

static void
P__parseSelf(P_ *instance, PState *pstate)
{
    header_spM1_t__parseSelf(&instance->header, pstate);
    if (pstate->pu.error) return;
    payload_spM1_t__parseSelf(&instance->payload, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
}

static void
P__unparseSelf(const P_ *instance, UState *ustate)
{
    header_spM1_t__unparseSelf(&instance->header, ustate);
    if (ustate->pu.error) return;
    payload_spM1_t__unparseSelf(&instance->payload, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->checksum, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static P_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        P__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
