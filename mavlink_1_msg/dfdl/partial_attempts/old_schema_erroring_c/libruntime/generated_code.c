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

static void MV1_0_Header_SP_Message__parseSelf(MV1_0_Header_SP_Message_ *instance, PState *pstate);
static void MV1_0_Header_SP_Message__unparseSelf(const MV1_0_Header_SP_Message_ *instance, UState *ustate);
static void MV2_0_Header_SP_Message__parseSelf(MV2_0_Header_SP_Message_ *instance, PState *pstate);
static void MV2_0_Header_SP_Message__unparseSelf(const MV2_0_Header_SP_Message_ *instance, UState *ustate);
static void SCALED_PRESSURE_SP_Message__parseSelf(SCALED_PRESSURE_SP_Message_ *instance, PState *pstate);
static void SCALED_PRESSURE_SP_Message__unparseSelf(const SCALED_PRESSURE_SP_Message_ *instance, UState *ustate);
static void SP_Message__parseSelf(SP_Message_ *instance, PState *pstate);
static void SP_Message__unparseSelf(const SP_Message_ *instance, UState *ustate);

// Define schema version (will be empty if schema did not define any version string)

const char *schema_version = "";

// Define metadata for the infoset

static const ERD Version_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Version", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Payload_Length_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Payload_Length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Packet_Sequence_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Packet_Sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD System_ID_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "System_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Component_ID_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Component_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Message_ID_MV1_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Message_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const MV1_0_Header_SP_Message_ MV1_0_Header_SP_Message__compute_offsets;

static const size_t MV1_0_Header_SP_Message__childrenOffsets[6] = {
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.Version - (const char *)&MV1_0_Header_SP_Message__compute_offsets,
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.Payload_Length - (const char *)&MV1_0_Header_SP_Message__compute_offsets,
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.Packet_Sequence - (const char *)&MV1_0_Header_SP_Message__compute_offsets,
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.System_ID - (const char *)&MV1_0_Header_SP_Message__compute_offsets,
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.Component_ID - (const char *)&MV1_0_Header_SP_Message__compute_offsets,
    (const char *)&MV1_0_Header_SP_Message__compute_offsets.Message_ID - (const char *)&MV1_0_Header_SP_Message__compute_offsets
};

static const ERD *const MV1_0_Header_SP_Message__childrenERDs[6] = {
    &Version_MV1_0_Header_t_ERD,
    &Payload_Length_MV1_0_Header_t_ERD,
    &Packet_Sequence_MV1_0_Header_t_ERD,
    &System_ID_MV1_0_Header_t_ERD,
    &Component_ID_MV1_0_Header_t_ERD,
    &Message_ID_MV1_0_Header_t_ERD
};

static const ERD MV1_0_Header_SP_Message_ERD = {
    {
        NULL, // namedQName.prefix
        "MV1.0_Header", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    MV1_0_Header_SP_Message__childrenOffsets,
    MV1_0_Header_SP_Message__childrenERDs,
    (ERDParseSelf)&MV1_0_Header_SP_Message__parseSelf,
    (ERDUnparseSelf)&MV1_0_Header_SP_Message__unparseSelf,
    {.initChoice = NULL}
};

static const ERD Version_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Version", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Payload_Length_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Payload_Length", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Incomp_Flag_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Incomp_Flag", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Comp_Flag_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Comp_Flag", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Packet_Sequence_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Packet_Sequence", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD System_ID_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "System_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Component_ID_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Component_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD Message_ID_MV2_0_Header_t_ERD = {
    {
        NULL, // namedQName.prefix
        "Message_ID", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const MV2_0_Header_SP_Message_ MV2_0_Header_SP_Message__compute_offsets;

static const size_t MV2_0_Header_SP_Message__childrenOffsets[8] = {
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Version - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Payload_Length - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Incomp_Flag - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Comp_Flag - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Packet_Sequence - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.System_ID - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Component_ID - (const char *)&MV2_0_Header_SP_Message__compute_offsets,
    (const char *)&MV2_0_Header_SP_Message__compute_offsets.Message_ID - (const char *)&MV2_0_Header_SP_Message__compute_offsets
};

static const ERD *const MV2_0_Header_SP_Message__childrenERDs[8] = {
    &Version_MV2_0_Header_t_ERD,
    &Payload_Length_MV2_0_Header_t_ERD,
    &Incomp_Flag_MV2_0_Header_t_ERD,
    &Comp_Flag_MV2_0_Header_t_ERD,
    &Packet_Sequence_MV2_0_Header_t_ERD,
    &System_ID_MV2_0_Header_t_ERD,
    &Component_ID_MV2_0_Header_t_ERD,
    &Message_ID_MV2_0_Header_t_ERD
};

static const ERD MV2_0_Header_SP_Message_ERD = {
    {
        NULL, // namedQName.prefix
        "MV2.0_Header", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
    MV2_0_Header_SP_Message__childrenOffsets,
    MV2_0_Header_SP_Message__childrenERDs,
    (ERDParseSelf)&MV2_0_Header_SP_Message__parseSelf,
    (ERDUnparseSelf)&MV2_0_Header_SP_Message__unparseSelf,
    {.initChoice = NULL}
};

static const ERD time_boot_ms_SCALED_PRESSURE_t_ERD = {
    {
        NULL, // namedQName.prefix
        "time_boot_ms", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD press_abs_SCALED_PRESSURE_t_ERD = {
    {
        NULL, // namedQName.prefix
        "press_abs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD press_diff_SCALED_PRESSURE_t_ERD = {
    {
        NULL, // namedQName.prefix
        "press_diff", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT32, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD temperature_SCALED_PRESSURE_t_ERD = {
    {
        NULL, // namedQName.prefix
        "temperature", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD temperature_press_diff_SCALED_PRESSURE_t_ERD = {
    {
        NULL, // namedQName.prefix
        "temperature_press_diff", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const SCALED_PRESSURE_SP_Message_ SCALED_PRESSURE_SP_Message__compute_offsets;

static const size_t SCALED_PRESSURE_SP_Message__childrenOffsets[5] = {
    (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets.time_boot_ms - (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets,
    (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets.press_abs - (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets,
    (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets.press_diff - (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets,
    (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets.temperature - (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets,
    (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets.temperature_press_diff - (const char *)&SCALED_PRESSURE_SP_Message__compute_offsets
};

static const ERD *const SCALED_PRESSURE_SP_Message__childrenERDs[5] = {
    &time_boot_ms_SCALED_PRESSURE_t_ERD,
    &press_abs_SCALED_PRESSURE_t_ERD,
    &press_diff_SCALED_PRESSURE_t_ERD,
    &temperature_SCALED_PRESSURE_t_ERD,
    &temperature_press_diff_SCALED_PRESSURE_t_ERD
};

static const ERD SCALED_PRESSURE_SP_Message_ERD = {
    {
        NULL, // namedQName.prefix
        "SCALED_PRESSURE", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    SCALED_PRESSURE_SP_Message__childrenOffsets,
    SCALED_PRESSURE_SP_Message__childrenERDs,
    (ERDParseSelf)&SCALED_PRESSURE_SP_Message__parseSelf,
    (ERDUnparseSelf)&SCALED_PRESSURE_SP_Message__unparseSelf,
    {.initChoice = NULL}
};

static const SP_Message_ SP_Message__compute_offsets;

static const size_t SP_Message__childrenOffsets[3] = {
    (const char *)&SP_Message__compute_offsets.MV1_0_Header - (const char *)&SP_Message__compute_offsets,
    (const char *)&SP_Message__compute_offsets.MV2_0_Header - (const char *)&SP_Message__compute_offsets,
    (const char *)&SP_Message__compute_offsets.SCALED_PRESSURE - (const char *)&SP_Message__compute_offsets
};

static const ERD *const SP_Message__childrenERDs[3] = {
    &MV1_0_Header_SP_Message_ERD,
    &MV2_0_Header_SP_Message_ERD,
    &SCALED_PRESSURE_SP_Message_ERD
};

static const ERD SP_Message_ERD = {
    {
        NULL, // namedQName.prefix
        "SP_Message", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    SP_Message__childrenOffsets,
    SP_Message__childrenERDs,
    (ERDParseSelf)&SP_Message__parseSelf,
    (ERDUnparseSelf)&SP_Message__unparseSelf,
    {.initChoice = NULL}
};

// Initialize, parse, and unparse nodes of the infoset

static void
MV1_0_Header_SP_Message__initERD(MV1_0_Header_SP_Message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &MV1_0_Header_SP_Message_ERD;
    instance->_base.parent = parent;
}

static void
MV1_0_Header_SP_Message__parseSelf(MV1_0_Header_SP_Message_ *instance, PState *pstate)
{
    const size_t end_bitPos0b = pstate->pu.bitPos0b + 48;
    parse_be_uint8(&instance->Version, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Version[] = {254};
    validate_integer_enumeration(instance->Version, 1, enums_Version, "Version", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Payload_Length, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Payload_Length[] = {16};
    validate_integer_enumeration(instance->Payload_Length, 1, enums_Payload_Length, "Payload_Length", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Packet_Sequence, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Packet_Sequence[] = {0};
    validate_integer_enumeration(instance->Packet_Sequence, 1, enums_Packet_Sequence, "Packet_Sequence", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->System_ID, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_System_ID[] = {0};
    validate_integer_enumeration(instance->System_ID, 1, enums_System_ID, "System_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Component_ID, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Component_ID[] = {0};
    validate_integer_enumeration(instance->Component_ID, 1, enums_Component_ID, "Component_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Message_ID, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Message_ID[] = {0};
    validate_integer_enumeration(instance->Message_ID, 1, enums_Message_ID, "Message_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_alignment_bits(end_bitPos0b, pstate);
    if (pstate->pu.error) return;
}

static void
MV1_0_Header_SP_Message__unparseSelf(const MV1_0_Header_SP_Message_ *instance, UState *ustate)
{
    const size_t end_bitPos0b = ustate->pu.bitPos0b + 48;
    unparse_be_uint8(instance->Version, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Version[] = {254};
    validate_integer_enumeration(instance->Version, 1, enums_Version, "Version", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Payload_Length, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Payload_Length[] = {16};
    validate_integer_enumeration(instance->Payload_Length, 1, enums_Payload_Length, "Payload_Length", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Packet_Sequence, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Packet_Sequence[] = {0};
    validate_integer_enumeration(instance->Packet_Sequence, 1, enums_Packet_Sequence, "Packet_Sequence", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->System_ID, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_System_ID[] = {0};
    validate_integer_enumeration(instance->System_ID, 1, enums_System_ID, "System_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Component_ID, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Component_ID[] = {0};
    validate_integer_enumeration(instance->Component_ID, 1, enums_Component_ID, "Component_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Message_ID, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Message_ID[] = {0};
    validate_integer_enumeration(instance->Message_ID, 1, enums_Message_ID, "Message_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_alignment_bits(end_bitPos0b, '\40', ustate);
    if (ustate->pu.error) return;
}

static void
MV2_0_Header_SP_Message__initERD(MV2_0_Header_SP_Message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &MV2_0_Header_SP_Message_ERD;
    instance->_base.parent = parent;
}

static void
MV2_0_Header_SP_Message__parseSelf(MV2_0_Header_SP_Message_ *instance, PState *pstate)
{
    const size_t end_bitPos0b = pstate->pu.bitPos0b + 128;
    parse_be_uint8(&instance->Version, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Version[] = {253};
    validate_integer_enumeration(instance->Version, 1, enums_Version, "Version", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Payload_Length, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Payload_Length[] = {16};
    validate_integer_enumeration(instance->Payload_Length, 1, enums_Payload_Length, "Payload_Length", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Incomp_Flag, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Incomp_Flag[] = {0};
    validate_integer_enumeration(instance->Incomp_Flag, 1, enums_Incomp_Flag, "Incomp_Flag", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Comp_Flag, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Comp_Flag[] = {0};
    validate_integer_enumeration(instance->Comp_Flag, 1, enums_Comp_Flag, "Comp_Flag", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Packet_Sequence, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Packet_Sequence[] = {0};
    validate_integer_enumeration(instance->Packet_Sequence, 1, enums_Packet_Sequence, "Packet_Sequence", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->System_ID, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_System_ID[] = {0};
    validate_integer_enumeration(instance->System_ID, 1, enums_System_ID, "System_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->Component_ID, 8, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Component_ID[] = {0};
    validate_integer_enumeration(instance->Component_ID, 1, enums_Component_ID, "Component_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->Message_ID, 24, pstate);
    if (pstate->pu.error) return;
    int64_t enums_Message_ID[] = {0};
    validate_integer_enumeration(instance->Message_ID, 1, enums_Message_ID, "Message_ID", &pstate->pu);
    if (pstate->pu.error) return;
    parse_alignment_bits(end_bitPos0b, pstate);
    if (pstate->pu.error) return;
}

static void
MV2_0_Header_SP_Message__unparseSelf(const MV2_0_Header_SP_Message_ *instance, UState *ustate)
{
    const size_t end_bitPos0b = ustate->pu.bitPos0b + 128;
    unparse_be_uint8(instance->Version, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Version[] = {253};
    validate_integer_enumeration(instance->Version, 1, enums_Version, "Version", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Payload_Length, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Payload_Length[] = {16};
    validate_integer_enumeration(instance->Payload_Length, 1, enums_Payload_Length, "Payload_Length", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Incomp_Flag, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Incomp_Flag[] = {0};
    validate_integer_enumeration(instance->Incomp_Flag, 1, enums_Incomp_Flag, "Incomp_Flag", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Comp_Flag, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Comp_Flag[] = {0};
    validate_integer_enumeration(instance->Comp_Flag, 1, enums_Comp_Flag, "Comp_Flag", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Packet_Sequence, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Packet_Sequence[] = {0};
    validate_integer_enumeration(instance->Packet_Sequence, 1, enums_Packet_Sequence, "Packet_Sequence", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->System_ID, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_System_ID[] = {0};
    validate_integer_enumeration(instance->System_ID, 1, enums_System_ID, "System_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->Component_ID, 8, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Component_ID[] = {0};
    validate_integer_enumeration(instance->Component_ID, 1, enums_Component_ID, "Component_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->Message_ID, 24, ustate);
    if (ustate->pu.error) return;
    int64_t enums_Message_ID[] = {0};
    validate_integer_enumeration(instance->Message_ID, 1, enums_Message_ID, "Message_ID", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_alignment_bits(end_bitPos0b, '\40', ustate);
    if (ustate->pu.error) return;
}

static void
SCALED_PRESSURE_SP_Message__initERD(SCALED_PRESSURE_SP_Message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &SCALED_PRESSURE_SP_Message_ERD;
    instance->_base.parent = parent;
}

static void
SCALED_PRESSURE_SP_Message__parseSelf(SCALED_PRESSURE_SP_Message_ *instance, PState *pstate)
{
    const size_t end_bitPos0b = pstate->pu.bitPos0b + 80;
    parse_be_uint32(&instance->time_boot_ms, 32, pstate);
    if (pstate->pu.error) return;
    int64_t enums_time_boot_ms[] = {0};
    validate_integer_enumeration(instance->time_boot_ms, 1, enums_time_boot_ms, "time_boot_ms", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->press_abs, 32, pstate);
    if (pstate->pu.error) return;
    int64_t enums_press_abs[] = {0};
    validate_integer_enumeration(instance->press_abs, 1, enums_press_abs, "press_abs", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint32(&instance->press_diff, 32, pstate);
    if (pstate->pu.error) return;
    int64_t enums_press_diff[] = {0};
    validate_integer_enumeration(instance->press_diff, 1, enums_press_diff, "press_diff", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->temperature, 16, pstate);
    if (pstate->pu.error) return;
    int64_t enums_temperature[] = {0};
    validate_integer_enumeration(instance->temperature, 1, enums_temperature, "temperature", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->temperature_press_diff, 16, pstate);
    if (pstate->pu.error) return;
    int64_t enums_temperature_press_diff[] = {0};
    validate_integer_enumeration(instance->temperature_press_diff, 1, enums_temperature_press_diff, "temperature_press_diff", &pstate->pu);
    if (pstate->pu.error) return;
    parse_alignment_bits(end_bitPos0b, pstate);
    if (pstate->pu.error) return;
}

static void
SCALED_PRESSURE_SP_Message__unparseSelf(const SCALED_PRESSURE_SP_Message_ *instance, UState *ustate)
{
    const size_t end_bitPos0b = ustate->pu.bitPos0b + 80;
    unparse_be_uint32(instance->time_boot_ms, 32, ustate);
    if (ustate->pu.error) return;
    int64_t enums_time_boot_ms[] = {0};
    validate_integer_enumeration(instance->time_boot_ms, 1, enums_time_boot_ms, "time_boot_ms", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->press_abs, 32, ustate);
    if (ustate->pu.error) return;
    int64_t enums_press_abs[] = {0};
    validate_integer_enumeration(instance->press_abs, 1, enums_press_abs, "press_abs", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint32(instance->press_diff, 32, ustate);
    if (ustate->pu.error) return;
    int64_t enums_press_diff[] = {0};
    validate_integer_enumeration(instance->press_diff, 1, enums_press_diff, "press_diff", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->temperature, 16, ustate);
    if (ustate->pu.error) return;
    int64_t enums_temperature[] = {0};
    validate_integer_enumeration(instance->temperature, 1, enums_temperature, "temperature", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->temperature_press_diff, 16, ustate);
    if (ustate->pu.error) return;
    int64_t enums_temperature_press_diff[] = {0};
    validate_integer_enumeration(instance->temperature_press_diff, 1, enums_temperature_press_diff, "temperature_press_diff", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_alignment_bits(end_bitPos0b, '\40', ustate);
    if (ustate->pu.error) return;
}

static void
SP_Message__initERD(SP_Message_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &SP_Message_ERD;
    instance->_base.parent = parent;
    MV1_0_Header_SP_Message__initERD(&instance->MV1_0_Header, (InfosetBase *)instance);
    MV2_0_Header_SP_Message__initERD(&instance->MV2_0_Header, (InfosetBase *)instance);
    SCALED_PRESSURE_SP_Message__initERD(&instance->SCALED_PRESSURE, (InfosetBase *)instance);
}

static void
SP_Message__parseSelf(SP_Message_ *instance, PState *pstate)
{
    MV1_0_Header_SP_Message__parseSelf(&instance->MV1_0_Header, pstate);
    if (pstate->pu.error) return;
    MV2_0_Header_SP_Message__parseSelf(&instance->MV2_0_Header, pstate);
    if (pstate->pu.error) return;
    SCALED_PRESSURE_SP_Message__parseSelf(&instance->SCALED_PRESSURE, pstate);
    if (pstate->pu.error) return;
}

static void
SP_Message__unparseSelf(const SP_Message_ *instance, UState *ustate)
{
    MV1_0_Header_SP_Message__unparseSelf(&instance->MV1_0_Header, ustate);
    if (ustate->pu.error) return;
    MV2_0_Header_SP_Message__unparseSelf(&instance->MV2_0_Header, ustate);
    if (ustate->pu.error) return;
    SCALED_PRESSURE_SP_Message__unparseSelf(&instance->SCALED_PRESSURE, ustate);
    if (ustate->pu.error) return;
}

// Get an infoset (optionally clearing it first) for parsing/walking

InfosetBase *
get_infoset(bool clear_infoset)
{
    static SP_Message_ infoset;

    if (clear_infoset)
    {
        // If your infoset contains hexBinary prefixed length elements,
        // you may want to walk infoset first to free their malloc'ed
        // storage - we are not handling that case for now...
        memset(&infoset, 0, sizeof(infoset));
        SP_Message__initERD(&infoset, (InfosetBase *)&infoset);
    }

    return &infoset._base;
}
