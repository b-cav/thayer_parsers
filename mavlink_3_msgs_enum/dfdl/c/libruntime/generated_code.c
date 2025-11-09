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

static void M2_hb_L09_hb_PL_t__parseSelf(M2_hb_L09_hb_PL_t_ *instance, PState *pstate);
static void M2_hb_L09_hb_PL_t__unparseSelf(const M2_hb_L09_hb_PL_t_ *instance, UState *ustate);
static void array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__parseSelf(M1_hb_PL_M1_t_ *instance, PState *pstate);
static void array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__unparseSelf(const M1_hb_PL_M1_t_ *instance, UState *ustate);
static size_t array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__getArraySize(const M1_hb_PL_M1_t_ *instance);
static void M1_hb_PL_M1_t__parseSelf(M1_hb_PL_M1_t_ *instance, PState *pstate);
static void M1_hb_PL_M1_t__unparseSelf(const M1_hb_PL_M1_t_ *instance, UState *ustate);
static void array_M1_hb_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_M1_hb_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_M1_hb_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void M1_ss_PL_L31_M1_ss_PL_t__parseSelf(M1_ss_PL_L31_M1_ss_PL_t_ *instance, PState *pstate);
static void M1_ss_PL_L31_M1_ss_PL_t__unparseSelf(const M1_ss_PL_L31_M1_ss_PL_t_ *instance, UState *ustate);
static void array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__parseSelf(M1_ss_PL_M1_t_ *instance, PState *pstate);
static void array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__unparseSelf(const M1_ss_PL_M1_t_ *instance, UState *ustate);
static size_t array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__getArraySize(const M1_ss_PL_M1_t_ *instance);
static void M1_ss_PL_M1_t__parseSelf(M1_ss_PL_M1_t_ *instance, PState *pstate);
static void M1_ss_PL_M1_t__unparseSelf(const M1_ss_PL_M1_t_ *instance, UState *ustate);
static void array_M1_ss_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_M1_ss_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_M1_ss_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void M1_hud_PL_L20_M1_hud_PL_t__parseSelf(M1_hud_PL_L20_M1_hud_PL_t_ *instance, PState *pstate);
static void M1_hud_PL_L20_M1_hud_PL_t__unparseSelf(const M1_hud_PL_L20_M1_hud_PL_t_ *instance, UState *ustate);
static void array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__parseSelf(M1_hud_PL_M1_t_ *instance, PState *pstate);
static void array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__unparseSelf(const M1_hud_PL_M1_t_ *instance, UState *ustate);
static size_t array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__getArraySize(const M1_hud_PL_M1_t_ *instance);
static void M1_hud_PL_M1_t__parseSelf(M1_hud_PL_M1_t_ *instance, PState *pstate);
static void M1_hud_PL_M1_t__unparseSelf(const M1_hud_PL_M1_t_ *instance, UState *ustate);
static void array_M1_hud_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void array_M1_hud_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static size_t array_M1_hud_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance);
static void M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate);
static void M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate);
static void array_M1_message_t_message__parseSelf(message_ *instance, PState *pstate);
static void array_M1_message_t_message__unparseSelf(const message_ *instance, UState *ustate);
static size_t array_M1_message_t_message__getArraySize(const message_ *instance);
static void array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__parseSelf(M2_hb_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__unparseSelf(const M2_hb_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__getArraySize(const M2_hb_PL_M2_t_ *instance);
static void M2_hb_PL_M2_t__parseSelf(M2_hb_PL_M2_t_ *instance, PState *pstate);
static void M2_hb_PL_M2_t__unparseSelf(const M2_hb_PL_M2_t_ *instance, UState *ustate);
static void array_M2_hb_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_M2_hb_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_M2_hb_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void M2_ss_PL_L01_M2_ss_PL_t__parseSelf(M2_ss_PL_L01_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L01_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L01_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L02_M2_ss_PL_t__parseSelf(M2_ss_PL_L02_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L02_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L02_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L03_M2_ss_PL_t__parseSelf(M2_ss_PL_L03_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L03_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L03_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L04_M2_ss_PL_t__parseSelf(M2_ss_PL_L04_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L04_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L04_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L05_M2_ss_PL_t__parseSelf(M2_ss_PL_L05_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L05_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L05_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L06_M2_ss_PL_t__parseSelf(M2_ss_PL_L06_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L06_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L06_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L07_M2_ss_PL_t__parseSelf(M2_ss_PL_L07_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L07_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L07_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L08_M2_ss_PL_t__parseSelf(M2_ss_PL_L08_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L08_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L08_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L09_M2_ss_PL_t__parseSelf(M2_ss_PL_L09_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L09_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L09_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L10_M2_ss_PL_t__parseSelf(M2_ss_PL_L10_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L10_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L10_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L11_M2_ss_PL_t__parseSelf(M2_ss_PL_L11_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L11_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L11_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L12_M2_ss_PL_t__parseSelf(M2_ss_PL_L12_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L12_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L12_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L13_M2_ss_PL_t__parseSelf(M2_ss_PL_L13_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L13_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L13_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L14_M2_ss_PL_t__parseSelf(M2_ss_PL_L14_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L14_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L14_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L15_M2_ss_PL_t__parseSelf(M2_ss_PL_L15_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L15_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L15_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L16_M2_ss_PL_t__parseSelf(M2_ss_PL_L16_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L16_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L16_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L17_M2_ss_PL_t__parseSelf(M2_ss_PL_L17_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L17_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L17_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L18_M2_ss_PL_t__parseSelf(M2_ss_PL_L18_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L18_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L18_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L19_M2_ss_PL_t__parseSelf(M2_ss_PL_L19_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L19_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L19_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L20_M2_ss_PL_t__parseSelf(M2_ss_PL_L20_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L20_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L20_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L21_M2_ss_PL_t__parseSelf(M2_ss_PL_L21_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L21_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L21_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L22_M2_ss_PL_t__parseSelf(M2_ss_PL_L22_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L22_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L22_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L23_M2_ss_PL_t__parseSelf(M2_ss_PL_L23_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L23_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L23_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L24_M2_ss_PL_t__parseSelf(M2_ss_PL_L24_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L24_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L24_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L25_M2_ss_PL_t__parseSelf(M2_ss_PL_L25_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L25_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L25_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L26_M2_ss_PL_t__parseSelf(M2_ss_PL_L26_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L26_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L26_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L27_M2_ss_PL_t__parseSelf(M2_ss_PL_L27_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L27_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L27_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L28_M2_ss_PL_t__parseSelf(M2_ss_PL_L28_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L28_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L28_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L29_M2_ss_PL_t__parseSelf(M2_ss_PL_L29_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L29_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L29_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L30_M2_ss_PL_t__parseSelf(M2_ss_PL_L30_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L30_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L30_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_L31_M2_ss_PL_t__parseSelf(M2_ss_PL_L31_M2_ss_PL_t_ *instance, PState *pstate);
static void M2_ss_PL_L31_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L31_M2_ss_PL_t_ *instance, UState *ustate);
static void array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance);
static void M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate);
static void M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate);
static void array_M2_ss_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_M2_ss_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_M2_ss_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
static void M2_hud_PL_L01_M2_hud_PL_t__parseSelf(M2_hud_PL_L01_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L01_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L01_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L02_M2_hud_PL_t__parseSelf(M2_hud_PL_L02_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L02_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L02_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L03_M2_hud_PL_t__parseSelf(M2_hud_PL_L03_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L03_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L03_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L04_M2_hud_PL_t__parseSelf(M2_hud_PL_L04_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L04_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L04_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L05_M2_hud_PL_t__parseSelf(M2_hud_PL_L05_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L05_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L05_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L06_M2_hud_PL_t__parseSelf(M2_hud_PL_L06_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L06_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L06_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L07_M2_hud_PL_t__parseSelf(M2_hud_PL_L07_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L07_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L07_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L08_M2_hud_PL_t__parseSelf(M2_hud_PL_L08_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L08_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L08_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L09_M2_hud_PL_t__parseSelf(M2_hud_PL_L09_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L09_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L09_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L10_M2_hud_PL_t__parseSelf(M2_hud_PL_L10_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L10_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L10_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L11_M2_hud_PL_t__parseSelf(M2_hud_PL_L11_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L11_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L11_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L12_M2_hud_PL_t__parseSelf(M2_hud_PL_L12_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L12_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L12_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L13_M2_hud_PL_t__parseSelf(M2_hud_PL_L13_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L13_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L13_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L14_M2_hud_PL_t__parseSelf(M2_hud_PL_L14_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L14_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L14_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L15_M2_hud_PL_t__parseSelf(M2_hud_PL_L15_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L15_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L15_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L16_M2_hud_PL_t__parseSelf(M2_hud_PL_L16_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L16_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L16_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L17_M2_hud_PL_t__parseSelf(M2_hud_PL_L17_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L17_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L17_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L18_M2_hud_PL_t__parseSelf(M2_hud_PL_L18_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L18_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L18_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L19_M2_hud_PL_t__parseSelf(M2_hud_PL_L19_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L19_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L19_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_L20_M2_hud_PL_t__parseSelf(M2_hud_PL_L20_M2_hud_PL_t_ *instance, PState *pstate);
static void M2_hud_PL_L20_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L20_M2_hud_PL_t_ *instance, UState *ustate);
static void array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance);
static void M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate);
static void M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate);
static void array_M2_hud_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate);
static void array_M2_hud_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate);
static size_t array_M2_hud_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance);
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
    PRIMITIVE_HEXBINARY, // typeCode
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

static const ERD hb_PL_cust_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_cust", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hb_PL_type_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_type", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hb_PL_auto_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_auto", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hb_PL_base_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_base", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hb_PL_stat_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_stat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hb_PL_mvrs_hb_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hb_PL_mvrs", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hb_L09_hb_PL_t_ M2_hb_L09_hb_PL_t__compute_offsets;

static const size_t M2_hb_L09_hb_PL_t__childrenOffsets[6] = {
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_cust - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets,
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_type - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets,
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_auto - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets,
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_base - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets,
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_stat - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets,
    (const char *)&M2_hb_L09_hb_PL_t__compute_offsets.hb_PL_mvrs - (const char *)&M2_hb_L09_hb_PL_t__compute_offsets
};

static const ERD *const M2_hb_L09_hb_PL_t__childrenERDs[6] = {
    &hb_PL_cust_hb_PL_L09_t_ERD,
    &hb_PL_type_hb_PL_L09_t_ERD,
    &hb_PL_auto_hb_PL_L09_t_ERD,
    &hb_PL_base_hb_PL_L09_t_ERD,
    &hb_PL_stat_hb_PL_L09_t_ERD,
    &hb_PL_mvrs_hb_PL_L09_t_ERD
};

static const ERD M2_hb_L09_hb_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hb_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M2_hb_L09_hb_PL_t__childrenOffsets,
    M2_hb_L09_hb_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hb_L09_hb_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hb_L09_hb_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_hb_PL_M1_t_ array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__compute_offsets;

static const size_t array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__childrenOffsets[1] = {
    (const char *)&array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__compute_offsets.M2_hb_L09[1] - (const char *)&array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__compute_offsets.M2_hb_L09[0]
};

static const ERD *const array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__childrenERDs[1] = {
    &M2_hb_L09_hb_PL_t_ERD
};

static const ERD array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hb_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__childrenOffsets,
    array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__childrenERDs,
    (ERDParseSelf)&array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__getArraySize}
};

static const M1_hb_PL_M1_t_ M1_hb_PL_M1_t__compute_offsets;

static const size_t M1_hb_PL_M1_t__childrenOffsets[1] = {
    (const char *)&M1_hb_PL_M1_t__compute_offsets.M2_hb_L09[0] - (const char *)&M1_hb_PL_M1_t__compute_offsets
};

static const ERD *const M1_hb_PL_M1_t__childrenERDs[1] = {
    &array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t_ERD
};

static const ERD M1_hb_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hb_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M1_hb_PL_M1_t__childrenOffsets,
    M1_hb_PL_M1_t__childrenERDs,
    (ERDParseSelf)&M1_hb_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&M1_hb_PL_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_M1_hb_PL_M1_t_M1_message_t__compute_offsets;

static const size_t array_M1_hb_PL_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_M1_hb_PL_M1_t_M1_message_t__compute_offsets.M1_hb_PL[1] - (const char *)&array_M1_hb_PL_M1_t_M1_message_t__compute_offsets.M1_hb_PL[0]
};

static const ERD *const array_M1_hb_PL_M1_t_M1_message_t__childrenERDs[1] = {
    &M1_hb_PL_M1_t_ERD
};

static const ERD array_M1_hb_PL_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hb_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_hb_PL_M1_t_M1_message_t__childrenOffsets,
    array_M1_hb_PL_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_M1_hb_PL_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_M1_hb_PL_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_hb_PL_M1_t_M1_message_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt3_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt4_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt4", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_batr_ss_PL_L31_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_batr", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M1_ss_PL_L31_M1_ss_PL_t_ M1_ss_PL_L31_M1_ss_PL_t__compute_offsets;

static const size_t M1_ss_PL_L31_M1_ss_PL_t__childrenOffsets[13] = {
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_cnt3 - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_cnt4 - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets,
    (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets.ss_PL_batr - (const char *)&M1_ss_PL_L31_M1_ss_PL_t__compute_offsets
};

static const ERD *const M1_ss_PL_L31_M1_ss_PL_t__childrenERDs[13] = {
    &ss_PL_ocsp_ss_PL_L31_t_ERD,
    &ss_PL_ocse_ss_PL_L31_t_ERD,
    &ss_PL_ocsh_ss_PL_L31_t_ERD,
    &ss_PL_load_ss_PL_L31_t_ERD,
    &ss_PL_vbat_ss_PL_L31_t_ERD,
    &ss_PL_cbat_ss_PL_L31_t_ERD,
    &ss_PL_drc_ss_PL_L31_t_ERD,
    &ss_PL_errc_ss_PL_L31_t_ERD,
    &ss_PL_cnt1_ss_PL_L31_t_ERD,
    &ss_PL_cnt2_ss_PL_L31_t_ERD,
    &ss_PL_cnt3_ss_PL_L31_t_ERD,
    &ss_PL_cnt4_ss_PL_L31_t_ERD,
    &ss_PL_batr_ss_PL_L31_t_ERD
};

static const ERD M1_ss_PL_L31_M1_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_ss_PL_L31", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    13, // numChildren
    M1_ss_PL_L31_M1_ss_PL_t__childrenOffsets,
    M1_ss_PL_L31_M1_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M1_ss_PL_L31_M1_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M1_ss_PL_L31_M1_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_ss_PL_M1_t_ array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__compute_offsets;

static const size_t array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__childrenOffsets[1] = {
    (const char *)&array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__compute_offsets.M1_ss_PL_L31[1] - (const char *)&array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__compute_offsets.M1_ss_PL_L31[0]
};

static const ERD *const array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__childrenERDs[1] = {
    &M1_ss_PL_L31_M1_ss_PL_t_ERD
};

static const ERD array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_ss_PL_L31", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__childrenOffsets,
    array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__childrenERDs,
    (ERDParseSelf)&array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__getArraySize}
};

static const M1_ss_PL_M1_t_ M1_ss_PL_M1_t__compute_offsets;

static const size_t M1_ss_PL_M1_t__childrenOffsets[1] = {
    (const char *)&M1_ss_PL_M1_t__compute_offsets.M1_ss_PL_L31[0] - (const char *)&M1_ss_PL_M1_t__compute_offsets
};

static const ERD *const M1_ss_PL_M1_t__childrenERDs[1] = {
    &array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t_ERD
};

static const ERD M1_ss_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_ss_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M1_ss_PL_M1_t__childrenOffsets,
    M1_ss_PL_M1_t__childrenERDs,
    (ERDParseSelf)&M1_ss_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&M1_ss_PL_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_M1_ss_PL_M1_t_M1_message_t__compute_offsets;

static const size_t array_M1_ss_PL_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_M1_ss_PL_M1_t_M1_message_t__compute_offsets.M1_ss_PL[1] - (const char *)&array_M1_ss_PL_M1_t_M1_message_t__compute_offsets.M1_ss_PL[0]
};

static const ERD *const array_M1_ss_PL_M1_t_M1_message_t__childrenERDs[1] = {
    &M1_ss_PL_M1_t_ERD
};

static const ERD array_M1_ss_PL_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_ss_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_ss_PL_M1_t_M1_message_t__childrenOffsets,
    array_M1_ss_PL_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_M1_ss_PL_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_M1_ss_PL_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_ss_PL_M1_t_M1_message_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_hdng_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_hdng", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_thtl_hud_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_thtl", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M1_hud_PL_L20_M1_hud_PL_t_ M1_hud_PL_L20_M1_hud_PL_t__compute_offsets;

static const size_t M1_hud_PL_L20_M1_hud_PL_t__childrenOffsets[6] = {
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets,
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets,
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets,
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets,
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_hdng - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets,
    (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets.hud_PL_thtl - (const char *)&M1_hud_PL_L20_M1_hud_PL_t__compute_offsets
};

static const ERD *const M1_hud_PL_L20_M1_hud_PL_t__childrenERDs[6] = {
    &hud_PL_aspd_hud_PL_L20_t_ERD,
    &hud_PL_gspd_hud_PL_L20_t_ERD,
    &hud_PL_alt_hud_PL_L20_t_ERD,
    &hud_PL_clmb_hud_PL_L20_t_ERD,
    &hud_PL_hdng_hud_PL_L20_t_ERD,
    &hud_PL_thtl_hud_PL_L20_t_ERD
};

static const ERD M1_hud_PL_L20_M1_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hud_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M1_hud_PL_L20_M1_hud_PL_t__childrenOffsets,
    M1_hud_PL_L20_M1_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M1_hud_PL_L20_M1_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M1_hud_PL_L20_M1_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_hud_PL_M1_t_ array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__compute_offsets;

static const size_t array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__childrenOffsets[1] = {
    (const char *)&array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__compute_offsets.M1_hud_PL_L20[1] - (const char *)&array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__compute_offsets.M1_hud_PL_L20[0]
};

static const ERD *const array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__childrenERDs[1] = {
    &M1_hud_PL_L20_M1_hud_PL_t_ERD
};

static const ERD array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hud_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__childrenOffsets,
    array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__childrenERDs,
    (ERDParseSelf)&array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__getArraySize}
};

static const M1_hud_PL_M1_t_ M1_hud_PL_M1_t__compute_offsets;

static const size_t M1_hud_PL_M1_t__childrenOffsets[1] = {
    (const char *)&M1_hud_PL_M1_t__compute_offsets.M1_hud_PL_L20[0] - (const char *)&M1_hud_PL_M1_t__compute_offsets
};

static const ERD *const M1_hud_PL_M1_t__childrenERDs[1] = {
    &array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t_ERD
};

static const ERD M1_hud_PL_M1_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hud_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M1_hud_PL_M1_t__childrenOffsets,
    M1_hud_PL_M1_t__childrenERDs,
    (ERDParseSelf)&M1_hud_PL_M1_t__parseSelf,
    (ERDUnparseSelf)&M1_hud_PL_M1_t__unparseSelf,
    {.initChoice = NULL}
};

static const M1_message_t_ array_M1_hud_PL_M1_t_M1_message_t__compute_offsets;

static const size_t array_M1_hud_PL_M1_t_M1_message_t__childrenOffsets[1] = {
    (const char *)&array_M1_hud_PL_M1_t_M1_message_t__compute_offsets.M1_hud_PL[1] - (const char *)&array_M1_hud_PL_M1_t_M1_message_t__compute_offsets.M1_hud_PL[0]
};

static const ERD *const array_M1_hud_PL_M1_t_M1_message_t__childrenERDs[1] = {
    &M1_hud_PL_M1_t_ERD
};

static const ERD array_M1_hud_PL_M1_t_M1_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M1_hud_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M1_hud_PL_M1_t_M1_message_t__childrenOffsets,
    array_M1_hud_PL_M1_t_M1_message_t__childrenERDs,
    (ERDParseSelf)&array_M1_hud_PL_M1_t_M1_message_t__parseSelf,
    (ERDUnparseSelf)&array_M1_hud_PL_M1_t_M1_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M1_hud_PL_M1_t_M1_message_t__getArraySize}
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
    (const char *)&M1_message_t__compute_offsets.M1_hb_PL[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.M1_ss_PL[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.M1_hud_PL[0] - (const char *)&M1_message_t__compute_offsets,
    (const char *)&M1_message_t__compute_offsets.checksum - (const char *)&M1_message_t__compute_offsets
};

static const ERD *const M1_message_t__childrenERDs[9] = {
    &len_M1_t_ERD,
    &seq_M1_t_ERD,
    &sysid_M1_t_ERD,
    &compid_M1_t_ERD,
    &M1_msgid_M1_t_ERD,
    &array_M1_hb_PL_M1_t_M1_message_t_ERD,
    &array_M1_ss_PL_M1_t_M1_message_t_ERD,
    &array_M1_hud_PL_M1_t_M1_message_t_ERD,
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
    PRIMITIVE_HEXBINARY, // typeCode
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

static const M2_hb_PL_M2_t_ array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__compute_offsets;

static const size_t array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__compute_offsets.M2_hb_L09[1] - (const char *)&array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__compute_offsets.M2_hb_L09[0]
};

static const ERD *const array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__childrenERDs[1] = {
    &M2_hb_L09_hb_PL_t_ERD
};

static const ERD array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hb_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__childrenOffsets,
    array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__getArraySize}
};

static const M2_hb_PL_M2_t_ M2_hb_PL_M2_t__compute_offsets;

static const size_t M2_hb_PL_M2_t__childrenOffsets[1] = {
    (const char *)&M2_hb_PL_M2_t__compute_offsets.M2_hb_L09[0] - (const char *)&M2_hb_PL_M2_t__compute_offsets
};

static const ERD *const M2_hb_PL_M2_t__childrenERDs[1] = {
    &array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t_ERD
};

static const ERD M2_hb_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hb_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_hb_PL_M2_t__childrenOffsets,
    M2_hb_PL_M2_t__childrenERDs,
    (ERDParseSelf)&M2_hb_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&M2_hb_PL_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_M2_hb_PL_M2_t_M2_message_t__compute_offsets;

static const size_t array_M2_hb_PL_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_M2_hb_PL_M2_t_M2_message_t__compute_offsets.M2_hb_PL[1] - (const char *)&array_M2_hb_PL_M2_t_M2_message_t__compute_offsets.M2_hb_PL[0]
};

static const ERD *const array_M2_hb_PL_M2_t_M2_message_t__childrenERDs[1] = {
    &M2_hb_PL_M2_t_ERD
};

static const ERD array_M2_hb_PL_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hb_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hb_PL_M2_t_M2_message_t__childrenOffsets,
    array_M2_hb_PL_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_M2_hb_PL_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hb_PL_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hb_PL_M2_t_M2_message_t__getArraySize}
};

static const ERD ss_PL_ocsp_1b_ss_PL_L01_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L01_M2_ss_PL_t_ M2_ss_PL_L01_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L01_M2_ss_PL_t__childrenOffsets[1] = {
    (const char *)&M2_ss_PL_L01_M2_ss_PL_t__compute_offsets.ss_PL_ocsp_1b - (const char *)&M2_ss_PL_L01_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L01_M2_ss_PL_t__childrenERDs[1] = {
    &ss_PL_ocsp_1b_ss_PL_L01_t_ERD
};

static const ERD M2_ss_PL_L01_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L01", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_ss_PL_L01_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L01_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L01_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L01_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L01[1] - (const char *)&array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L01[0]
};

static const ERD *const array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L01_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L01", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_2b_ss_PL_L02_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L02_M2_ss_PL_t_ M2_ss_PL_L02_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L02_M2_ss_PL_t__childrenOffsets[1] = {
    (const char *)&M2_ss_PL_L02_M2_ss_PL_t__compute_offsets.ss_PL_ocsp_2b - (const char *)&M2_ss_PL_L02_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L02_M2_ss_PL_t__childrenERDs[1] = {
    &ss_PL_ocsp_2b_ss_PL_L02_t_ERD
};

static const ERD M2_ss_PL_L02_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L02", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_ss_PL_L02_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L02_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L02_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L02_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L02[1] - (const char *)&array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L02[0]
};

static const ERD *const array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L02_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L02", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_3b_ss_PL_L03_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L03_M2_ss_PL_t_ M2_ss_PL_L03_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L03_M2_ss_PL_t__childrenOffsets[1] = {
    (const char *)&M2_ss_PL_L03_M2_ss_PL_t__compute_offsets.ss_PL_ocsp_3b - (const char *)&M2_ss_PL_L03_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L03_M2_ss_PL_t__childrenERDs[1] = {
    &ss_PL_ocsp_3b_ss_PL_L03_t_ERD
};

static const ERD M2_ss_PL_L03_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L03", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_ss_PL_L03_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L03_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L03_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L03_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L03[1] - (const char *)&array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L03[0]
};

static const ERD *const array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L03_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L03", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L04_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L04_M2_ss_PL_t_ M2_ss_PL_L04_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L04_M2_ss_PL_t__childrenOffsets[1] = {
    (const char *)&M2_ss_PL_L04_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L04_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L04_M2_ss_PL_t__childrenERDs[1] = {
    &ss_PL_ocsp_ss_PL_L04_t_ERD
};

static const ERD M2_ss_PL_L04_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L04", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_ss_PL_L04_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L04_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L04_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L04_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L04[1] - (const char *)&array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L04[0]
};

static const ERD *const array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L04_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L04", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L05_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_1b_ss_PL_L05_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L05_M2_ss_PL_t_ M2_ss_PL_L05_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L05_M2_ss_PL_t__childrenOffsets[2] = {
    (const char *)&M2_ss_PL_L05_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L05_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L05_M2_ss_PL_t__compute_offsets.ss_PL_ocse_1b - (const char *)&M2_ss_PL_L05_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L05_M2_ss_PL_t__childrenERDs[2] = {
    &ss_PL_ocsp_ss_PL_L05_t_ERD,
    &ss_PL_ocse_1b_ss_PL_L05_t_ERD
};

static const ERD M2_ss_PL_L05_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L05", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_ss_PL_L05_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L05_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L05_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L05_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L05[1] - (const char *)&array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L05[0]
};

static const ERD *const array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L05_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L05", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L06_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_2b_ss_PL_L06_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L06_M2_ss_PL_t_ M2_ss_PL_L06_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L06_M2_ss_PL_t__childrenOffsets[2] = {
    (const char *)&M2_ss_PL_L06_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L06_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L06_M2_ss_PL_t__compute_offsets.ss_PL_ocse_2b - (const char *)&M2_ss_PL_L06_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L06_M2_ss_PL_t__childrenERDs[2] = {
    &ss_PL_ocsp_ss_PL_L06_t_ERD,
    &ss_PL_ocse_2b_ss_PL_L06_t_ERD
};

static const ERD M2_ss_PL_L06_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L06", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_ss_PL_L06_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L06_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L06_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L06_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L06[1] - (const char *)&array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L06[0]
};

static const ERD *const array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L06_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L06", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L07_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_3b_ss_PL_L07_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L07_M2_ss_PL_t_ M2_ss_PL_L07_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L07_M2_ss_PL_t__childrenOffsets[2] = {
    (const char *)&M2_ss_PL_L07_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L07_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L07_M2_ss_PL_t__compute_offsets.ss_PL_ocse_3b - (const char *)&M2_ss_PL_L07_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L07_M2_ss_PL_t__childrenERDs[2] = {
    &ss_PL_ocsp_ss_PL_L07_t_ERD,
    &ss_PL_ocse_3b_ss_PL_L07_t_ERD
};

static const ERD M2_ss_PL_L07_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L07", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_ss_PL_L07_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L07_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L07_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L07_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L07[1] - (const char *)&array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L07[0]
};

static const ERD *const array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L07_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L07", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L08_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L08_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L08_M2_ss_PL_t_ M2_ss_PL_L08_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L08_M2_ss_PL_t__childrenOffsets[2] = {
    (const char *)&M2_ss_PL_L08_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L08_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L08_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L08_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L08_M2_ss_PL_t__childrenERDs[2] = {
    &ss_PL_ocsp_ss_PL_L08_t_ERD,
    &ss_PL_ocse_ss_PL_L08_t_ERD
};

static const ERD M2_ss_PL_L08_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L08", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_ss_PL_L08_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L08_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L08_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L08_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L08[1] - (const char *)&array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L08[0]
};

static const ERD *const array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L08_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L08", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_1b_ss_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L09_M2_ss_PL_t_ M2_ss_PL_L09_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L09_M2_ss_PL_t__childrenOffsets[3] = {
    (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets.ss_PL_ocsh_1b - (const char *)&M2_ss_PL_L09_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L09_M2_ss_PL_t__childrenERDs[3] = {
    &ss_PL_ocsp_ss_PL_L09_t_ERD,
    &ss_PL_ocse_ss_PL_L09_t_ERD,
    &ss_PL_ocsh_1b_ss_PL_L09_t_ERD
};

static const ERD M2_ss_PL_L09_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_ss_PL_L09_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L09_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L09_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L09_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L09[1] - (const char *)&array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L09[0]
};

static const ERD *const array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L09_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_2b_ss_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L10_M2_ss_PL_t_ M2_ss_PL_L10_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L10_M2_ss_PL_t__childrenOffsets[3] = {
    (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets.ss_PL_ocsh_2b - (const char *)&M2_ss_PL_L10_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L10_M2_ss_PL_t__childrenERDs[3] = {
    &ss_PL_ocsp_ss_PL_L10_t_ERD,
    &ss_PL_ocse_ss_PL_L10_t_ERD,
    &ss_PL_ocsh_2b_ss_PL_L10_t_ERD
};

static const ERD M2_ss_PL_L10_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L10", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_ss_PL_L10_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L10_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L10_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L10_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L10[1] - (const char *)&array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L10[0]
};

static const ERD *const array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L10_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L10", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_3b_ss_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L11_M2_ss_PL_t_ M2_ss_PL_L11_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L11_M2_ss_PL_t__childrenOffsets[3] = {
    (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets.ss_PL_ocsh_3b - (const char *)&M2_ss_PL_L11_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L11_M2_ss_PL_t__childrenERDs[3] = {
    &ss_PL_ocsp_ss_PL_L11_t_ERD,
    &ss_PL_ocse_ss_PL_L11_t_ERD,
    &ss_PL_ocsh_3b_ss_PL_L11_t_ERD
};

static const ERD M2_ss_PL_L11_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L11", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_ss_PL_L11_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L11_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L11_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L11_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L11[1] - (const char *)&array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L11[0]
};

static const ERD *const array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L11_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L11", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L12_M2_ss_PL_t_ M2_ss_PL_L12_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L12_M2_ss_PL_t__childrenOffsets[3] = {
    (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L12_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L12_M2_ss_PL_t__childrenERDs[3] = {
    &ss_PL_ocsp_ss_PL_L12_t_ERD,
    &ss_PL_ocse_ss_PL_L12_t_ERD,
    &ss_PL_ocsh_ss_PL_L12_t_ERD
};

static const ERD M2_ss_PL_L12_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L12", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_ss_PL_L12_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L12_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L12_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L12_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L12[1] - (const char *)&array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L12[0]
};

static const ERD *const array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L12_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L12", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_1b_ss_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L13_M2_ss_PL_t_ M2_ss_PL_L13_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L13_M2_ss_PL_t__childrenOffsets[4] = {
    (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets.ss_PL_load_1b - (const char *)&M2_ss_PL_L13_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L13_M2_ss_PL_t__childrenERDs[4] = {
    &ss_PL_ocsp_ss_PL_L13_t_ERD,
    &ss_PL_ocse_ss_PL_L13_t_ERD,
    &ss_PL_ocsh_ss_PL_L13_t_ERD,
    &ss_PL_load_1b_ss_PL_L13_t_ERD
};

static const ERD M2_ss_PL_L13_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L13", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_ss_PL_L13_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L13_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L13_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L13_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L13[1] - (const char *)&array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L13[0]
};

static const ERD *const array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L13_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L13", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L14_M2_ss_PL_t_ M2_ss_PL_L14_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L14_M2_ss_PL_t__childrenOffsets[4] = {
    (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L14_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L14_M2_ss_PL_t__childrenERDs[4] = {
    &ss_PL_ocsp_ss_PL_L14_t_ERD,
    &ss_PL_ocse_ss_PL_L14_t_ERD,
    &ss_PL_ocsh_ss_PL_L14_t_ERD,
    &ss_PL_load_ss_PL_L14_t_ERD
};

static const ERD M2_ss_PL_L14_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L14", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_ss_PL_L14_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L14_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L14_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L14_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L14[1] - (const char *)&array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L14[0]
};

static const ERD *const array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L14_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L14", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_1b_ss_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L15_M2_ss_PL_t_ M2_ss_PL_L15_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L15_M2_ss_PL_t__childrenOffsets[5] = {
    (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets.ss_PL_vbat_1b - (const char *)&M2_ss_PL_L15_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L15_M2_ss_PL_t__childrenERDs[5] = {
    &ss_PL_ocsp_ss_PL_L15_t_ERD,
    &ss_PL_ocse_ss_PL_L15_t_ERD,
    &ss_PL_ocsh_ss_PL_L15_t_ERD,
    &ss_PL_load_ss_PL_L15_t_ERD,
    &ss_PL_vbat_1b_ss_PL_L15_t_ERD
};

static const ERD M2_ss_PL_L15_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L15", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    M2_ss_PL_L15_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L15_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L15_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L15_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L15[1] - (const char *)&array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L15[0]
};

static const ERD *const array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L15_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L15", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L16_M2_ss_PL_t_ M2_ss_PL_L16_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L16_M2_ss_PL_t__childrenOffsets[5] = {
    (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L16_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L16_M2_ss_PL_t__childrenERDs[5] = {
    &ss_PL_ocsp_ss_PL_L16_t_ERD,
    &ss_PL_ocse_ss_PL_L16_t_ERD,
    &ss_PL_ocsh_ss_PL_L16_t_ERD,
    &ss_PL_load_ss_PL_L16_t_ERD,
    &ss_PL_vbat_ss_PL_L16_t_ERD
};

static const ERD M2_ss_PL_L16_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L16", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    M2_ss_PL_L16_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L16_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L16_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L16_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L16[1] - (const char *)&array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L16[0]
};

static const ERD *const array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L16_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L16", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_1b_ss_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L17_M2_ss_PL_t_ M2_ss_PL_L17_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L17_M2_ss_PL_t__childrenOffsets[6] = {
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets.ss_PL_cbat_1b - (const char *)&M2_ss_PL_L17_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L17_M2_ss_PL_t__childrenERDs[6] = {
    &ss_PL_ocsp_ss_PL_L17_t_ERD,
    &ss_PL_ocse_ss_PL_L17_t_ERD,
    &ss_PL_ocsh_ss_PL_L17_t_ERD,
    &ss_PL_load_ss_PL_L17_t_ERD,
    &ss_PL_vbat_ss_PL_L17_t_ERD,
    &ss_PL_cbat_1b_ss_PL_L17_t_ERD
};

static const ERD M2_ss_PL_L17_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L17", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M2_ss_PL_L17_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L17_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L17_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L17_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L17[1] - (const char *)&array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L17[0]
};

static const ERD *const array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L17_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L17", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L18_M2_ss_PL_t_ M2_ss_PL_L18_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L18_M2_ss_PL_t__childrenOffsets[6] = {
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L18_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L18_M2_ss_PL_t__childrenERDs[6] = {
    &ss_PL_ocsp_ss_PL_L18_t_ERD,
    &ss_PL_ocse_ss_PL_L18_t_ERD,
    &ss_PL_ocsh_ss_PL_L18_t_ERD,
    &ss_PL_load_ss_PL_L18_t_ERD,
    &ss_PL_vbat_ss_PL_L18_t_ERD,
    &ss_PL_cbat_ss_PL_L18_t_ERD
};

static const ERD M2_ss_PL_L18_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L18", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M2_ss_PL_L18_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L18_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L18_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L18_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L18[1] - (const char *)&array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L18[0]
};

static const ERD *const array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L18_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L18", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT8, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L19_M2_ss_PL_t_ M2_ss_PL_L19_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L19_M2_ss_PL_t__childrenOffsets[7] = {
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L19_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L19_M2_ss_PL_t__childrenERDs[7] = {
    &ss_PL_ocsp_ss_PL_L19_t_ERD,
    &ss_PL_ocse_ss_PL_L19_t_ERD,
    &ss_PL_ocsh_ss_PL_L19_t_ERD,
    &ss_PL_load_ss_PL_L19_t_ERD,
    &ss_PL_vbat_ss_PL_L19_t_ERD,
    &ss_PL_cbat_ss_PL_L19_t_ERD,
    &ss_PL_drc_ss_PL_L19_t_ERD
};

static const ERD M2_ss_PL_L19_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L19", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    M2_ss_PL_L19_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L19_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L19_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L19_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L19[1] - (const char *)&array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L19[0]
};

static const ERD *const array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L19_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L19", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L20_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L20_M2_ss_PL_t_ M2_ss_PL_L20_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L20_M2_ss_PL_t__childrenOffsets[7] = {
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L20_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L20_M2_ss_PL_t__childrenERDs[7] = {
    &ss_PL_ocsp_ss_PL_L20_t_ERD,
    &ss_PL_ocse_ss_PL_L20_t_ERD,
    &ss_PL_ocsh_ss_PL_L20_t_ERD,
    &ss_PL_load_ss_PL_L20_t_ERD,
    &ss_PL_vbat_ss_PL_L20_t_ERD,
    &ss_PL_cbat_ss_PL_L20_t_ERD,
    &ss_PL_drc_ss_PL_L20_t_ERD
};

static const ERD M2_ss_PL_L20_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    7, // numChildren
    M2_ss_PL_L20_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L20_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L20_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L20_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L20[1] - (const char *)&array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L20[0]
};

static const ERD *const array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L20_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_1b_ss_PL_L21_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L21_M2_ss_PL_t_ M2_ss_PL_L21_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L21_M2_ss_PL_t__childrenOffsets[8] = {
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets.ss_PL_errc_1b - (const char *)&M2_ss_PL_L21_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L21_M2_ss_PL_t__childrenERDs[8] = {
    &ss_PL_ocsp_ss_PL_L21_t_ERD,
    &ss_PL_ocse_ss_PL_L21_t_ERD,
    &ss_PL_ocsh_ss_PL_L21_t_ERD,
    &ss_PL_load_ss_PL_L21_t_ERD,
    &ss_PL_vbat_ss_PL_L21_t_ERD,
    &ss_PL_cbat_ss_PL_L21_t_ERD,
    &ss_PL_drc_ss_PL_L21_t_ERD,
    &ss_PL_errc_1b_ss_PL_L21_t_ERD
};

static const ERD M2_ss_PL_L21_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L21", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
    M2_ss_PL_L21_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L21_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L21_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L21_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L21[1] - (const char *)&array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L21[0]
};

static const ERD *const array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L21_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L21", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L22_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L22_M2_ss_PL_t_ M2_ss_PL_L22_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L22_M2_ss_PL_t__childrenOffsets[8] = {
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L22_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L22_M2_ss_PL_t__childrenERDs[8] = {
    &ss_PL_ocsp_ss_PL_L22_t_ERD,
    &ss_PL_ocse_ss_PL_L22_t_ERD,
    &ss_PL_ocsh_ss_PL_L22_t_ERD,
    &ss_PL_load_ss_PL_L22_t_ERD,
    &ss_PL_vbat_ss_PL_L22_t_ERD,
    &ss_PL_cbat_ss_PL_L22_t_ERD,
    &ss_PL_drc_ss_PL_L22_t_ERD,
    &ss_PL_errc_ss_PL_L22_t_ERD
};

static const ERD M2_ss_PL_L22_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L22", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    8, // numChildren
    M2_ss_PL_L22_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L22_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L22_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L22_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L22[1] - (const char *)&array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L22[0]
};

static const ERD *const array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L22_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L22", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_1b_ss_PL_L23_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L23_M2_ss_PL_t_ M2_ss_PL_L23_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L23_M2_ss_PL_t__childrenOffsets[9] = {
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets.ss_PL_cnt1_1b - (const char *)&M2_ss_PL_L23_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L23_M2_ss_PL_t__childrenERDs[9] = {
    &ss_PL_ocsp_ss_PL_L23_t_ERD,
    &ss_PL_ocse_ss_PL_L23_t_ERD,
    &ss_PL_ocsh_ss_PL_L23_t_ERD,
    &ss_PL_load_ss_PL_L23_t_ERD,
    &ss_PL_vbat_ss_PL_L23_t_ERD,
    &ss_PL_cbat_ss_PL_L23_t_ERD,
    &ss_PL_drc_ss_PL_L23_t_ERD,
    &ss_PL_errc_ss_PL_L23_t_ERD,
    &ss_PL_cnt1_1b_ss_PL_L23_t_ERD
};

static const ERD M2_ss_PL_L23_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L23", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    9, // numChildren
    M2_ss_PL_L23_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L23_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L23_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L23_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L23[1] - (const char *)&array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L23[0]
};

static const ERD *const array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L23_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L23", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L24_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L24_M2_ss_PL_t_ M2_ss_PL_L24_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L24_M2_ss_PL_t__childrenOffsets[9] = {
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L24_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L24_M2_ss_PL_t__childrenERDs[9] = {
    &ss_PL_ocsp_ss_PL_L24_t_ERD,
    &ss_PL_ocse_ss_PL_L24_t_ERD,
    &ss_PL_ocsh_ss_PL_L24_t_ERD,
    &ss_PL_load_ss_PL_L24_t_ERD,
    &ss_PL_vbat_ss_PL_L24_t_ERD,
    &ss_PL_cbat_ss_PL_L24_t_ERD,
    &ss_PL_drc_ss_PL_L24_t_ERD,
    &ss_PL_errc_ss_PL_L24_t_ERD,
    &ss_PL_cnt1_ss_PL_L24_t_ERD
};

static const ERD M2_ss_PL_L24_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L24", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    9, // numChildren
    M2_ss_PL_L24_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L24_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L24_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L24_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L24[1] - (const char *)&array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L24[0]
};

static const ERD *const array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L24_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L24", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_1b_ss_PL_L25_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L25_M2_ss_PL_t_ M2_ss_PL_L25_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L25_M2_ss_PL_t__childrenOffsets[10] = {
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets.ss_PL_cnt2_1b - (const char *)&M2_ss_PL_L25_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L25_M2_ss_PL_t__childrenERDs[10] = {
    &ss_PL_ocsp_ss_PL_L25_t_ERD,
    &ss_PL_ocse_ss_PL_L25_t_ERD,
    &ss_PL_ocsh_ss_PL_L25_t_ERD,
    &ss_PL_load_ss_PL_L25_t_ERD,
    &ss_PL_vbat_ss_PL_L25_t_ERD,
    &ss_PL_cbat_ss_PL_L25_t_ERD,
    &ss_PL_drc_ss_PL_L25_t_ERD,
    &ss_PL_errc_ss_PL_L25_t_ERD,
    &ss_PL_cnt1_ss_PL_L25_t_ERD,
    &ss_PL_cnt2_1b_ss_PL_L25_t_ERD
};

static const ERD M2_ss_PL_L25_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L25", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    10, // numChildren
    M2_ss_PL_L25_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L25_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L25_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L25_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L25[1] - (const char *)&array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L25[0]
};

static const ERD *const array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L25_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L25", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L26_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L26_M2_ss_PL_t_ M2_ss_PL_L26_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L26_M2_ss_PL_t__childrenOffsets[10] = {
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L26_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L26_M2_ss_PL_t__childrenERDs[10] = {
    &ss_PL_ocsp_ss_PL_L26_t_ERD,
    &ss_PL_ocse_ss_PL_L26_t_ERD,
    &ss_PL_ocsh_ss_PL_L26_t_ERD,
    &ss_PL_load_ss_PL_L26_t_ERD,
    &ss_PL_vbat_ss_PL_L26_t_ERD,
    &ss_PL_cbat_ss_PL_L26_t_ERD,
    &ss_PL_drc_ss_PL_L26_t_ERD,
    &ss_PL_errc_ss_PL_L26_t_ERD,
    &ss_PL_cnt1_ss_PL_L26_t_ERD,
    &ss_PL_cnt2_ss_PL_L26_t_ERD
};

static const ERD M2_ss_PL_L26_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L26", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    10, // numChildren
    M2_ss_PL_L26_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L26_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L26_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L26_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L26[1] - (const char *)&array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L26[0]
};

static const ERD *const array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L26_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L26", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt3_1b_ss_PL_L27_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt3_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L27_M2_ss_PL_t_ M2_ss_PL_L27_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L27_M2_ss_PL_t__childrenOffsets[11] = {
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets.ss_PL_cnt3_1b - (const char *)&M2_ss_PL_L27_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L27_M2_ss_PL_t__childrenERDs[11] = {
    &ss_PL_ocsp_ss_PL_L27_t_ERD,
    &ss_PL_ocse_ss_PL_L27_t_ERD,
    &ss_PL_ocsh_ss_PL_L27_t_ERD,
    &ss_PL_load_ss_PL_L27_t_ERD,
    &ss_PL_vbat_ss_PL_L27_t_ERD,
    &ss_PL_cbat_ss_PL_L27_t_ERD,
    &ss_PL_drc_ss_PL_L27_t_ERD,
    &ss_PL_errc_ss_PL_L27_t_ERD,
    &ss_PL_cnt1_ss_PL_L27_t_ERD,
    &ss_PL_cnt2_ss_PL_L27_t_ERD,
    &ss_PL_cnt3_1b_ss_PL_L27_t_ERD
};

static const ERD M2_ss_PL_L27_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L27", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    11, // numChildren
    M2_ss_PL_L27_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L27_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L27_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L27_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L27[1] - (const char *)&array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L27[0]
};

static const ERD *const array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L27_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L27", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt3_ss_PL_L28_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L28_M2_ss_PL_t_ M2_ss_PL_L28_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L28_M2_ss_PL_t__childrenOffsets[11] = {
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets.ss_PL_cnt3 - (const char *)&M2_ss_PL_L28_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L28_M2_ss_PL_t__childrenERDs[11] = {
    &ss_PL_ocsp_ss_PL_L28_t_ERD,
    &ss_PL_ocse_ss_PL_L28_t_ERD,
    &ss_PL_ocsh_ss_PL_L28_t_ERD,
    &ss_PL_load_ss_PL_L28_t_ERD,
    &ss_PL_vbat_ss_PL_L28_t_ERD,
    &ss_PL_cbat_ss_PL_L28_t_ERD,
    &ss_PL_drc_ss_PL_L28_t_ERD,
    &ss_PL_errc_ss_PL_L28_t_ERD,
    &ss_PL_cnt1_ss_PL_L28_t_ERD,
    &ss_PL_cnt2_ss_PL_L28_t_ERD,
    &ss_PL_cnt3_ss_PL_L28_t_ERD
};

static const ERD M2_ss_PL_L28_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L28", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    11, // numChildren
    M2_ss_PL_L28_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L28_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L28_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L28_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L28[1] - (const char *)&array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L28[0]
};

static const ERD *const array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L28_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L28", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt3_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt4_1b_ss_PL_L29_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt4_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L29_M2_ss_PL_t_ M2_ss_PL_L29_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L29_M2_ss_PL_t__childrenOffsets[12] = {
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_cnt3 - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets.ss_PL_cnt4_1b - (const char *)&M2_ss_PL_L29_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L29_M2_ss_PL_t__childrenERDs[12] = {
    &ss_PL_ocsp_ss_PL_L29_t_ERD,
    &ss_PL_ocse_ss_PL_L29_t_ERD,
    &ss_PL_ocsh_ss_PL_L29_t_ERD,
    &ss_PL_load_ss_PL_L29_t_ERD,
    &ss_PL_vbat_ss_PL_L29_t_ERD,
    &ss_PL_cbat_ss_PL_L29_t_ERD,
    &ss_PL_drc_ss_PL_L29_t_ERD,
    &ss_PL_errc_ss_PL_L29_t_ERD,
    &ss_PL_cnt1_ss_PL_L29_t_ERD,
    &ss_PL_cnt2_ss_PL_L29_t_ERD,
    &ss_PL_cnt3_ss_PL_L29_t_ERD,
    &ss_PL_cnt4_1b_ss_PL_L29_t_ERD
};

static const ERD M2_ss_PL_L29_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L29", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    12, // numChildren
    M2_ss_PL_L29_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L29_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L29_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L29_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L29[1] - (const char *)&array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L29[0]
};

static const ERD *const array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L29_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L29", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const ERD ss_PL_ocsp_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsp", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocse_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocse", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_ocsh_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_ocsh", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_load_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_load", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_vbat_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_vbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cbat_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cbat", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_drc_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_drc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_errc_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_errc", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt1_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt1", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt2_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt2", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt3_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt3", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD ss_PL_cnt4_ss_PL_L30_t_ERD = {
    {
        NULL, // namedQName.prefix
        "ss_PL_cnt4", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_ss_PL_L30_M2_ss_PL_t_ M2_ss_PL_L30_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L30_M2_ss_PL_t__childrenOffsets[12] = {
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_cnt3 - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets.ss_PL_cnt4 - (const char *)&M2_ss_PL_L30_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L30_M2_ss_PL_t__childrenERDs[12] = {
    &ss_PL_ocsp_ss_PL_L30_t_ERD,
    &ss_PL_ocse_ss_PL_L30_t_ERD,
    &ss_PL_ocsh_ss_PL_L30_t_ERD,
    &ss_PL_load_ss_PL_L30_t_ERD,
    &ss_PL_vbat_ss_PL_L30_t_ERD,
    &ss_PL_cbat_ss_PL_L30_t_ERD,
    &ss_PL_drc_ss_PL_L30_t_ERD,
    &ss_PL_errc_ss_PL_L30_t_ERD,
    &ss_PL_cnt1_ss_PL_L30_t_ERD,
    &ss_PL_cnt2_ss_PL_L30_t_ERD,
    &ss_PL_cnt3_ss_PL_L30_t_ERD,
    &ss_PL_cnt4_ss_PL_L30_t_ERD
};

static const ERD M2_ss_PL_L30_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L30", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    12, // numChildren
    M2_ss_PL_L30_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L30_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L30_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L30_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L30[1] - (const char *)&array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L30[0]
};

static const ERD *const array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L30_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L30", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const M2_ss_PL_L31_M2_ss_PL_t_ M2_ss_PL_L31_M2_ss_PL_t__compute_offsets;

static const size_t M2_ss_PL_L31_M2_ss_PL_t__childrenOffsets[13] = {
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_ocsp - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_ocse - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_ocsh - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_load - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_vbat - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_cbat - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_drc - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_errc - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_cnt1 - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_cnt2 - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_cnt3 - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_cnt4 - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets,
    (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets.ss_PL_batr - (const char *)&M2_ss_PL_L31_M2_ss_PL_t__compute_offsets
};

static const ERD *const M2_ss_PL_L31_M2_ss_PL_t__childrenERDs[13] = {
    &ss_PL_ocsp_ss_PL_L31_t_ERD,
    &ss_PL_ocse_ss_PL_L31_t_ERD,
    &ss_PL_ocsh_ss_PL_L31_t_ERD,
    &ss_PL_load_ss_PL_L31_t_ERD,
    &ss_PL_vbat_ss_PL_L31_t_ERD,
    &ss_PL_cbat_ss_PL_L31_t_ERD,
    &ss_PL_drc_ss_PL_L31_t_ERD,
    &ss_PL_errc_ss_PL_L31_t_ERD,
    &ss_PL_cnt1_ss_PL_L31_t_ERD,
    &ss_PL_cnt2_ss_PL_L31_t_ERD,
    &ss_PL_cnt3_ss_PL_L31_t_ERD,
    &ss_PL_cnt4_ss_PL_L31_t_ERD,
    &ss_PL_batr_ss_PL_L31_t_ERD
};

static const ERD M2_ss_PL_L31_M2_ss_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L31", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    13, // numChildren
    M2_ss_PL_L31_M2_ss_PL_t__childrenOffsets,
    M2_ss_PL_L31_M2_ss_PL_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_L31_M2_ss_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_L31_M2_ss_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_ss_PL_M2_t_ array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets;

static const size_t array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L31[1] - (const char *)&array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L31[0]
};

static const ERD *const array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs[1] = {
    &M2_ss_PL_L31_M2_ss_PL_t_ERD
};

static const ERD array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL_L31", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__childrenOffsets,
    array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize}
};

static const M2_ss_PL_M2_t_ M2_ss_PL_M2_t__compute_offsets;

static const size_t M2_ss_PL_M2_t__childrenOffsets[31] = {
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L01[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L02[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L03[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L04[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L05[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L06[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L07[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L08[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L09[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L10[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L11[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L12[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L13[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L14[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L15[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L16[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L17[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L18[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L19[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L20[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L21[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L22[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L23[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L24[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L25[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L26[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L27[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L28[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L29[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L30[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets,
    (const char *)&M2_ss_PL_M2_t__compute_offsets.M2_ss_PL_L31[0] - (const char *)&M2_ss_PL_M2_t__compute_offsets
};

static const ERD *const M2_ss_PL_M2_t__childrenERDs[31] = {
    &array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t_ERD,
    &array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t_ERD
};

static const ERD M2_ss_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    31, // numChildren
    M2_ss_PL_M2_t__childrenOffsets,
    M2_ss_PL_M2_t__childrenERDs,
    (ERDParseSelf)&M2_ss_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&M2_ss_PL_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_M2_ss_PL_M2_t_M2_message_t__compute_offsets;

static const size_t array_M2_ss_PL_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_M2_ss_PL_M2_t_M2_message_t__compute_offsets.M2_ss_PL[1] - (const char *)&array_M2_ss_PL_M2_t_M2_message_t__compute_offsets.M2_ss_PL[0]
};

static const ERD *const array_M2_ss_PL_M2_t_M2_message_t__childrenERDs[1] = {
    &M2_ss_PL_M2_t_ERD
};

static const ERD array_M2_ss_PL_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_ss_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_ss_PL_M2_t_M2_message_t__childrenOffsets,
    array_M2_ss_PL_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_M2_ss_PL_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_M2_ss_PL_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_ss_PL_M2_t_M2_message_t__getArraySize}
};

static const ERD hud_PL_aspd_1b_hud_PL_L01_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L01_M2_hud_PL_t_ M2_hud_PL_L01_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L01_M2_hud_PL_t__childrenOffsets[1] = {
    (const char *)&M2_hud_PL_L01_M2_hud_PL_t__compute_offsets.hud_PL_aspd_1b - (const char *)&M2_hud_PL_L01_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L01_M2_hud_PL_t__childrenERDs[1] = {
    &hud_PL_aspd_1b_hud_PL_L01_t_ERD
};

static const ERD M2_hud_PL_L01_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L01", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_hud_PL_L01_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L01_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L01_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L01_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L01[1] - (const char *)&array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L01[0]
};

static const ERD *const array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L01_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L01", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_2b_hud_PL_L02_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L02_M2_hud_PL_t_ M2_hud_PL_L02_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L02_M2_hud_PL_t__childrenOffsets[1] = {
    (const char *)&M2_hud_PL_L02_M2_hud_PL_t__compute_offsets.hud_PL_aspd_2b - (const char *)&M2_hud_PL_L02_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L02_M2_hud_PL_t__childrenERDs[1] = {
    &hud_PL_aspd_2b_hud_PL_L02_t_ERD
};

static const ERD M2_hud_PL_L02_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L02", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_hud_PL_L02_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L02_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L02_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L02_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L02[1] - (const char *)&array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L02[0]
};

static const ERD *const array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L02_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L02", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_3b_hud_PL_L03_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L03_M2_hud_PL_t_ M2_hud_PL_L03_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L03_M2_hud_PL_t__childrenOffsets[1] = {
    (const char *)&M2_hud_PL_L03_M2_hud_PL_t__compute_offsets.hud_PL_aspd_3b - (const char *)&M2_hud_PL_L03_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L03_M2_hud_PL_t__childrenERDs[1] = {
    &hud_PL_aspd_3b_hud_PL_L03_t_ERD
};

static const ERD M2_hud_PL_L03_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L03", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_hud_PL_L03_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L03_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L03_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L03_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L03[1] - (const char *)&array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L03[0]
};

static const ERD *const array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L03_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L03", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L04_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L04_M2_hud_PL_t_ M2_hud_PL_L04_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L04_M2_hud_PL_t__childrenOffsets[1] = {
    (const char *)&M2_hud_PL_L04_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L04_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L04_M2_hud_PL_t__childrenERDs[1] = {
    &hud_PL_aspd_hud_PL_L04_t_ERD
};

static const ERD M2_hud_PL_L04_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L04", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    1, // numChildren
    M2_hud_PL_L04_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L04_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L04_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L04_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L04[1] - (const char *)&array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L04[0]
};

static const ERD *const array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L04_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L04", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L05_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_1b_hud_PL_L05_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L05_M2_hud_PL_t_ M2_hud_PL_L05_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L05_M2_hud_PL_t__childrenOffsets[2] = {
    (const char *)&M2_hud_PL_L05_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L05_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L05_M2_hud_PL_t__compute_offsets.hud_PL_gspd_1b - (const char *)&M2_hud_PL_L05_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L05_M2_hud_PL_t__childrenERDs[2] = {
    &hud_PL_aspd_hud_PL_L05_t_ERD,
    &hud_PL_gspd_1b_hud_PL_L05_t_ERD
};

static const ERD M2_hud_PL_L05_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L05", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_hud_PL_L05_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L05_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L05_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L05_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L05[1] - (const char *)&array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L05[0]
};

static const ERD *const array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L05_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L05", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L06_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_2b_hud_PL_L06_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L06_M2_hud_PL_t_ M2_hud_PL_L06_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L06_M2_hud_PL_t__childrenOffsets[2] = {
    (const char *)&M2_hud_PL_L06_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L06_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L06_M2_hud_PL_t__compute_offsets.hud_PL_gspd_2b - (const char *)&M2_hud_PL_L06_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L06_M2_hud_PL_t__childrenERDs[2] = {
    &hud_PL_aspd_hud_PL_L06_t_ERD,
    &hud_PL_gspd_2b_hud_PL_L06_t_ERD
};

static const ERD M2_hud_PL_L06_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L06", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_hud_PL_L06_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L06_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L06_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L06_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L06[1] - (const char *)&array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L06[0]
};

static const ERD *const array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L06_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L06", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L07_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_3b_hud_PL_L07_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L07_M2_hud_PL_t_ M2_hud_PL_L07_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L07_M2_hud_PL_t__childrenOffsets[2] = {
    (const char *)&M2_hud_PL_L07_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L07_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L07_M2_hud_PL_t__compute_offsets.hud_PL_gspd_3b - (const char *)&M2_hud_PL_L07_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L07_M2_hud_PL_t__childrenERDs[2] = {
    &hud_PL_aspd_hud_PL_L07_t_ERD,
    &hud_PL_gspd_3b_hud_PL_L07_t_ERD
};

static const ERD M2_hud_PL_L07_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L07", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_hud_PL_L07_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L07_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L07_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L07_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L07[1] - (const char *)&array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L07[0]
};

static const ERD *const array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L07_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L07", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L08_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L08_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L08_M2_hud_PL_t_ M2_hud_PL_L08_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L08_M2_hud_PL_t__childrenOffsets[2] = {
    (const char *)&M2_hud_PL_L08_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L08_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L08_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L08_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L08_M2_hud_PL_t__childrenERDs[2] = {
    &hud_PL_aspd_hud_PL_L08_t_ERD,
    &hud_PL_gspd_hud_PL_L08_t_ERD
};

static const ERD M2_hud_PL_L08_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L08", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    2, // numChildren
    M2_hud_PL_L08_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L08_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L08_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L08_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L08[1] - (const char *)&array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L08[0]
};

static const ERD *const array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L08_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L08", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_1b_hud_PL_L09_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L09_M2_hud_PL_t_ M2_hud_PL_L09_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L09_M2_hud_PL_t__childrenOffsets[3] = {
    (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets.hud_PL_alt_1b - (const char *)&M2_hud_PL_L09_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L09_M2_hud_PL_t__childrenERDs[3] = {
    &hud_PL_aspd_hud_PL_L09_t_ERD,
    &hud_PL_gspd_hud_PL_L09_t_ERD,
    &hud_PL_alt_1b_hud_PL_L09_t_ERD
};

static const ERD M2_hud_PL_L09_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_hud_PL_L09_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L09_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L09_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L09_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L09[1] - (const char *)&array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L09[0]
};

static const ERD *const array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L09_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L09", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_2b_hud_PL_L10_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L10_M2_hud_PL_t_ M2_hud_PL_L10_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L10_M2_hud_PL_t__childrenOffsets[3] = {
    (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets.hud_PL_alt_2b - (const char *)&M2_hud_PL_L10_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L10_M2_hud_PL_t__childrenERDs[3] = {
    &hud_PL_aspd_hud_PL_L10_t_ERD,
    &hud_PL_gspd_hud_PL_L10_t_ERD,
    &hud_PL_alt_2b_hud_PL_L10_t_ERD
};

static const ERD M2_hud_PL_L10_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L10", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_hud_PL_L10_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L10_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L10_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L10_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L10[1] - (const char *)&array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L10[0]
};

static const ERD *const array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L10_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L10", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_3b_hud_PL_L11_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L11_M2_hud_PL_t_ M2_hud_PL_L11_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L11_M2_hud_PL_t__childrenOffsets[3] = {
    (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets.hud_PL_alt_3b - (const char *)&M2_hud_PL_L11_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L11_M2_hud_PL_t__childrenERDs[3] = {
    &hud_PL_aspd_hud_PL_L11_t_ERD,
    &hud_PL_gspd_hud_PL_L11_t_ERD,
    &hud_PL_alt_3b_hud_PL_L11_t_ERD
};

static const ERD M2_hud_PL_L11_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L11", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_hud_PL_L11_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L11_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L11_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L11_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L11[1] - (const char *)&array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L11[0]
};

static const ERD *const array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L11_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L11", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L12_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L12_M2_hud_PL_t_ M2_hud_PL_L12_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L12_M2_hud_PL_t__childrenOffsets[3] = {
    (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L12_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L12_M2_hud_PL_t__childrenERDs[3] = {
    &hud_PL_aspd_hud_PL_L12_t_ERD,
    &hud_PL_gspd_hud_PL_L12_t_ERD,
    &hud_PL_alt_hud_PL_L12_t_ERD
};

static const ERD M2_hud_PL_L12_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L12", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    3, // numChildren
    M2_hud_PL_L12_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L12_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L12_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L12_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L12[1] - (const char *)&array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L12[0]
};

static const ERD *const array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L12_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L12", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_1b_hud_PL_L13_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L13_M2_hud_PL_t_ M2_hud_PL_L13_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L13_M2_hud_PL_t__childrenOffsets[4] = {
    (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets.hud_PL_clmb_1b - (const char *)&M2_hud_PL_L13_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L13_M2_hud_PL_t__childrenERDs[4] = {
    &hud_PL_aspd_hud_PL_L13_t_ERD,
    &hud_PL_gspd_hud_PL_L13_t_ERD,
    &hud_PL_alt_hud_PL_L13_t_ERD,
    &hud_PL_clmb_1b_hud_PL_L13_t_ERD
};

static const ERD M2_hud_PL_L13_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L13", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_hud_PL_L13_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L13_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L13_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L13_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L13[1] - (const char *)&array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L13[0]
};

static const ERD *const array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L13_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L13", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_2b_hud_PL_L14_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb_2b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L14_M2_hud_PL_t_ M2_hud_PL_L14_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L14_M2_hud_PL_t__childrenOffsets[4] = {
    (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets.hud_PL_clmb_2b - (const char *)&M2_hud_PL_L14_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L14_M2_hud_PL_t__childrenERDs[4] = {
    &hud_PL_aspd_hud_PL_L14_t_ERD,
    &hud_PL_gspd_hud_PL_L14_t_ERD,
    &hud_PL_alt_hud_PL_L14_t_ERD,
    &hud_PL_clmb_2b_hud_PL_L14_t_ERD
};

static const ERD M2_hud_PL_L14_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L14", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_hud_PL_L14_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L14_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L14_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L14_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L14[1] - (const char *)&array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L14[0]
};

static const ERD *const array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L14_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L14", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_3b_hud_PL_L15_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb_3b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L15_M2_hud_PL_t_ M2_hud_PL_L15_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L15_M2_hud_PL_t__childrenOffsets[4] = {
    (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets.hud_PL_clmb_3b - (const char *)&M2_hud_PL_L15_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L15_M2_hud_PL_t__childrenERDs[4] = {
    &hud_PL_aspd_hud_PL_L15_t_ERD,
    &hud_PL_gspd_hud_PL_L15_t_ERD,
    &hud_PL_alt_hud_PL_L15_t_ERD,
    &hud_PL_clmb_3b_hud_PL_L15_t_ERD
};

static const ERD M2_hud_PL_L15_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L15", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_hud_PL_L15_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L15_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L15_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L15_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L15[1] - (const char *)&array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L15[0]
};

static const ERD *const array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L15_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L15", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_hud_PL_L16_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L16_M2_hud_PL_t_ M2_hud_PL_L16_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L16_M2_hud_PL_t__childrenOffsets[4] = {
    (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M2_hud_PL_L16_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L16_M2_hud_PL_t__childrenERDs[4] = {
    &hud_PL_aspd_hud_PL_L16_t_ERD,
    &hud_PL_gspd_hud_PL_L16_t_ERD,
    &hud_PL_alt_hud_PL_L16_t_ERD,
    &hud_PL_clmb_hud_PL_L16_t_ERD
};

static const ERD M2_hud_PL_L16_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L16", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    4, // numChildren
    M2_hud_PL_L16_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L16_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L16_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L16_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L16[1] - (const char *)&array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L16[0]
};

static const ERD *const array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L16_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L16", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_hud_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_hdng_1b_hud_PL_L17_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_hdng_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L17_M2_hud_PL_t_ M2_hud_PL_L17_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L17_M2_hud_PL_t__childrenOffsets[5] = {
    (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets.hud_PL_hdng_1b - (const char *)&M2_hud_PL_L17_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L17_M2_hud_PL_t__childrenERDs[5] = {
    &hud_PL_aspd_hud_PL_L17_t_ERD,
    &hud_PL_gspd_hud_PL_L17_t_ERD,
    &hud_PL_alt_hud_PL_L17_t_ERD,
    &hud_PL_clmb_hud_PL_L17_t_ERD,
    &hud_PL_hdng_1b_hud_PL_L17_t_ERD
};

static const ERD M2_hud_PL_L17_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L17", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    M2_hud_PL_L17_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L17_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L17_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L17_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L17[1] - (const char *)&array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L17[0]
};

static const ERD *const array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L17_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L17", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_hud_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_hdng_hud_PL_L18_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_hdng", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L18_M2_hud_PL_t_ M2_hud_PL_L18_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L18_M2_hud_PL_t__childrenOffsets[5] = {
    (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets.hud_PL_hdng - (const char *)&M2_hud_PL_L18_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L18_M2_hud_PL_t__childrenERDs[5] = {
    &hud_PL_aspd_hud_PL_L18_t_ERD,
    &hud_PL_gspd_hud_PL_L18_t_ERD,
    &hud_PL_alt_hud_PL_L18_t_ERD,
    &hud_PL_clmb_hud_PL_L18_t_ERD,
    &hud_PL_hdng_hud_PL_L18_t_ERD
};

static const ERD M2_hud_PL_L18_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L18", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    5, // numChildren
    M2_hud_PL_L18_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L18_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L18_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L18_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L18[1] - (const char *)&array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L18[0]
};

static const ERD *const array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L18_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L18", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const ERD hud_PL_aspd_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_aspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_gspd_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_gspd", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_alt_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_alt", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_clmb_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_clmb", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_hdng_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_hdng", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_UINT16, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const ERD hud_PL_thtl_1b_hud_PL_L19_t_ERD = {
    {
        NULL, // namedQName.prefix
        "hud_PL_thtl_1b", // namedQName.local
        NULL, // namedQName.ns
    },
    PRIMITIVE_HEXBINARY, // typeCode
    0, NULL, NULL, NULL, NULL, {NULL}
};

static const M2_hud_PL_L19_M2_hud_PL_t_ M2_hud_PL_L19_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L19_M2_hud_PL_t__childrenOffsets[6] = {
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_hdng - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets.hud_PL_thtl_1b - (const char *)&M2_hud_PL_L19_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L19_M2_hud_PL_t__childrenERDs[6] = {
    &hud_PL_aspd_hud_PL_L19_t_ERD,
    &hud_PL_gspd_hud_PL_L19_t_ERD,
    &hud_PL_alt_hud_PL_L19_t_ERD,
    &hud_PL_clmb_hud_PL_L19_t_ERD,
    &hud_PL_hdng_hud_PL_L19_t_ERD,
    &hud_PL_thtl_1b_hud_PL_L19_t_ERD
};

static const ERD M2_hud_PL_L19_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L19", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M2_hud_PL_L19_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L19_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L19_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L19_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L19[1] - (const char *)&array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L19[0]
};

static const ERD *const array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L19_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L19", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const M2_hud_PL_L20_M2_hud_PL_t_ M2_hud_PL_L20_M2_hud_PL_t__compute_offsets;

static const size_t M2_hud_PL_L20_M2_hud_PL_t__childrenOffsets[6] = {
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_aspd - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_gspd - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_alt - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_clmb - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_hdng - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets,
    (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets.hud_PL_thtl - (const char *)&M2_hud_PL_L20_M2_hud_PL_t__compute_offsets
};

static const ERD *const M2_hud_PL_L20_M2_hud_PL_t__childrenERDs[6] = {
    &hud_PL_aspd_hud_PL_L20_t_ERD,
    &hud_PL_gspd_hud_PL_L20_t_ERD,
    &hud_PL_alt_hud_PL_L20_t_ERD,
    &hud_PL_clmb_hud_PL_L20_t_ERD,
    &hud_PL_hdng_hud_PL_L20_t_ERD,
    &hud_PL_thtl_hud_PL_L20_t_ERD
};

static const ERD M2_hud_PL_L20_M2_hud_PL_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    6, // numChildren
    M2_hud_PL_L20_M2_hud_PL_t__childrenOffsets,
    M2_hud_PL_L20_M2_hud_PL_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_L20_M2_hud_PL_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_L20_M2_hud_PL_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_hud_PL_M2_t_ array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets;

static const size_t array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L20[1] - (const char *)&array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L20[0]
};

static const ERD *const array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs[1] = {
    &M2_hud_PL_L20_M2_hud_PL_t_ERD
};

static const ERD array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL_L20", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__childrenOffsets,
    array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize}
};

static const M2_hud_PL_M2_t_ M2_hud_PL_M2_t__compute_offsets;

static const size_t M2_hud_PL_M2_t__childrenOffsets[20] = {
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L01[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L02[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L03[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L04[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L05[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L06[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L07[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L08[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L09[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L10[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L11[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L12[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L13[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L14[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L15[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L16[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L17[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L18[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L19[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets,
    (const char *)&M2_hud_PL_M2_t__compute_offsets.M2_hud_PL_L20[0] - (const char *)&M2_hud_PL_M2_t__compute_offsets
};

static const ERD *const M2_hud_PL_M2_t__childrenERDs[20] = {
    &array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t_ERD,
    &array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t_ERD
};

static const ERD M2_hud_PL_M2_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    COMPLEX, // typeCode
    20, // numChildren
    M2_hud_PL_M2_t__childrenOffsets,
    M2_hud_PL_M2_t__childrenERDs,
    (ERDParseSelf)&M2_hud_PL_M2_t__parseSelf,
    (ERDUnparseSelf)&M2_hud_PL_M2_t__unparseSelf,
    {.initChoice = NULL}
};

static const M2_message_t_ array_M2_hud_PL_M2_t_M2_message_t__compute_offsets;

static const size_t array_M2_hud_PL_M2_t_M2_message_t__childrenOffsets[1] = {
    (const char *)&array_M2_hud_PL_M2_t_M2_message_t__compute_offsets.M2_hud_PL[1] - (const char *)&array_M2_hud_PL_M2_t_M2_message_t__compute_offsets.M2_hud_PL[0]
};

static const ERD *const array_M2_hud_PL_M2_t_M2_message_t__childrenERDs[1] = {
    &M2_hud_PL_M2_t_ERD
};

static const ERD array_M2_hud_PL_M2_t_M2_message_t_ERD = {
    {
        NULL, // namedQName.prefix
        "M2_hud_PL", // namedQName.local
        NULL, // namedQName.ns
    },
    ARRAY, // typeCode
    1, // maxOccurs
    array_M2_hud_PL_M2_t_M2_message_t__childrenOffsets,
    array_M2_hud_PL_M2_t_M2_message_t__childrenERDs,
    (ERDParseSelf)&array_M2_hud_PL_M2_t_M2_message_t__parseSelf,
    (ERDUnparseSelf)&array_M2_hud_PL_M2_t_M2_message_t__unparseSelf,
    {.getArraySize = (GetArraySize)&array_M2_hud_PL_M2_t_M2_message_t__getArraySize}
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
    (const char *)&M2_message_t__compute_offsets.M2_hb_PL[0] - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.M2_ss_PL[0] - (const char *)&M2_message_t__compute_offsets,
    (const char *)&M2_message_t__compute_offsets.M2_hud_PL[0] - (const char *)&M2_message_t__compute_offsets,
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
    &array_M2_hb_PL_M2_t_M2_message_t_ERD,
    &array_M2_ss_PL_M2_t_M2_message_t_ERD,
    &array_M2_hud_PL_M2_t_M2_message_t_ERD,
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
M2_hb_L09_hb_PL_t__initERD(M2_hb_L09_hb_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hb_L09_hb_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hb_PL_cust.array = instance->_a_hb_PL_cust;
    instance->hb_PL_cust.lengthInBytes = sizeof(instance->_a_hb_PL_cust);
    instance->hb_PL_cust.dynamic = false;
    instance->hb_PL_base.array = instance->_a_hb_PL_base;
    instance->hb_PL_base.lengthInBytes = sizeof(instance->_a_hb_PL_base);
    instance->hb_PL_base.dynamic = false;
    instance->hb_PL_mvrs.array = instance->_a_hb_PL_mvrs;
    instance->hb_PL_mvrs.lengthInBytes = sizeof(instance->_a_hb_PL_mvrs);
    instance->hb_PL_mvrs.dynamic = false;
}

static void
M2_hb_L09_hb_PL_t__parseSelf(M2_hb_L09_hb_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hb_PL_cust, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->hb_PL_type, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hb_PL_type <= 49, "hb_PL_type", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->hb_PL_auto, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hb_PL_auto <= 20, "hb_PL_auto", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hb_PL_base, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->hb_PL_stat, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hb_PL_stat <= 8, "hb_PL_stat", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hb_PL_mvrs, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hb_L09_hb_PL_t__unparseSelf(const M2_hb_L09_hb_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hb_PL_cust, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->hb_PL_type, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hb_PL_type <= 49, "hb_PL_type", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->hb_PL_auto, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hb_PL_auto <= 20, "hb_PL_auto", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hb_PL_base, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->hb_PL_stat, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hb_PL_stat <= 8, "hb_PL_stat", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hb_PL_mvrs, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__initERD(M1_hb_PL_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hb_L09_hb_PL_t__initERD(&instance->M2_hb_L09[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__parseSelf(M1_hb_PL_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_L09_hb_PL_t__parseSelf(&instance->M2_hb_L09[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__unparseSelf(const M1_hb_PL_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_L09_hb_PL_t__unparseSelf(&instance->M2_hb_L09[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__getArraySize(const M1_hb_PL_M1_t_ *instance)
{
if (((M1_message_t_ *)instance->_base.parent)->len.array[0] == 0x09) {
    return(1);
} else {
    return(0);
}
}

static void
M1_hb_PL_M1_t__initERD(M1_hb_PL_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_hb_PL_M1_t_ERD;
    instance->_base.parent = parent;
    array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__initERD(instance, parent);
}

static void
M1_hb_PL_M1_t__parseSelf(M1_hb_PL_M1_t_ *instance, PState *pstate)
{
    array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M1_hb_PL_M1_t__unparseSelf(const M1_hb_PL_M1_t_ *instance, UState *ustate)
{
    array_M2_hb_L09_hb_PL_t_M1_hb_PL_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M1_hb_PL_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_hb_PL_M1_t__initERD(&instance->M1_hb_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M1_hb_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_hb_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_hb_PL_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hb_PL_M1_t__parseSelf(&instance->M1_hb_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_hb_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_hb_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_hb_PL_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hb_PL_M1_t__unparseSelf(&instance->M1_hb_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_hb_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
if (instance->M1_msgid.array[0] == 0x00) {
    return(1);
} else {
    return(0);
}
}

static void
M1_ss_PL_L31_M1_ss_PL_t__initERD(M1_ss_PL_L31_M1_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_ss_PL_L31_M1_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3.array = instance->_a_ss_PL_cnt3;
    instance->ss_PL_cnt3.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3);
    instance->ss_PL_cnt3.dynamic = false;
    instance->ss_PL_cnt4.array = instance->_a_ss_PL_cnt4;
    instance->ss_PL_cnt4.lengthInBytes = sizeof(instance->_a_ss_PL_cnt4);
    instance->ss_PL_cnt4.dynamic = false;
}

static void
M1_ss_PL_L31_M1_ss_PL_t__parseSelf(M1_ss_PL_L31_M1_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt4, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->ss_PL_batr, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_batr <= 100, "ss_PL_batr", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M1_ss_PL_L31_M1_ss_PL_t__unparseSelf(const M1_ss_PL_L31_M1_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt4, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->ss_PL_batr, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_batr <= 100, "ss_PL_batr", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__initERD(M1_ss_PL_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_ss_PL_L31_M1_ss_PL_t__initERD(&instance->M1_ss_PL_L31[i], (InfosetBase *)instance);
    }
}

static void
array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__parseSelf(M1_ss_PL_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_ss_PL_L31_M1_ss_PL_t__parseSelf(&instance->M1_ss_PL_L31[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__unparseSelf(const M1_ss_PL_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_ss_PL_L31_M1_ss_PL_t__unparseSelf(&instance->M1_ss_PL_L31[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__getArraySize(const M1_ss_PL_M1_t_ *instance)
{
if (((M1_message_t_ *)instance->_base.parent)->len.array[0] == 0x31) {
    return(1);
} else {
    return(0);
}
}

static void
M1_ss_PL_M1_t__initERD(M1_ss_PL_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_ss_PL_M1_t_ERD;
    instance->_base.parent = parent;
    array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__initERD(instance, parent);
}

static void
M1_ss_PL_M1_t__parseSelf(M1_ss_PL_M1_t_ *instance, PState *pstate)
{
    array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M1_ss_PL_M1_t__unparseSelf(const M1_ss_PL_M1_t_ *instance, UState *ustate)
{
    array_M1_ss_PL_L31_M1_ss_PL_t_M1_ss_PL_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M1_ss_PL_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_ss_PL_M1_t__initERD(&instance->M1_ss_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M1_ss_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_ss_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_ss_PL_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_ss_PL_M1_t__parseSelf(&instance->M1_ss_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_ss_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_ss_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_ss_PL_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_ss_PL_M1_t__unparseSelf(&instance->M1_ss_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_ss_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
if (instance->M1_msgid.array[0] == 0x01) {
    return(1);
} else {
    return(0);
}
}

static void
M1_hud_PL_L20_M1_hud_PL_t__initERD(M1_hud_PL_L20_M1_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_hud_PL_L20_M1_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
}

static void
M1_hud_PL_L20_M1_hud_PL_t__parseSelf(M1_hud_PL_L20_M1_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->hud_PL_hdng, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->hud_PL_thtl, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_thtl <= 100, "hud_PL_thtl", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M1_hud_PL_L20_M1_hud_PL_t__unparseSelf(const M1_hud_PL_L20_M1_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->hud_PL_hdng, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->hud_PL_thtl, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_thtl <= 100, "hud_PL_thtl", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__initERD(M1_hud_PL_M1_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_hud_PL_L20_M1_hud_PL_t__initERD(&instance->M1_hud_PL_L20[i], (InfosetBase *)instance);
    }
}

static void
array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__parseSelf(M1_hud_PL_M1_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hud_PL_L20_M1_hud_PL_t__parseSelf(&instance->M1_hud_PL_L20[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__unparseSelf(const M1_hud_PL_M1_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__getArraySize(instance);
    validate_array_bounds("array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hud_PL_L20_M1_hud_PL_t__unparseSelf(&instance->M1_hud_PL_L20[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__getArraySize(const M1_hud_PL_M1_t_ *instance)
{
if (((M1_message_t_ *)instance->_base.parent)->len.array[0] == 0x20) {
    return(1);
} else {
    return(0);
}
}

static void
M1_hud_PL_M1_t__initERD(M1_hud_PL_M1_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M1_hud_PL_M1_t_ERD;
    instance->_base.parent = parent;
    array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__initERD(instance, parent);
}

static void
M1_hud_PL_M1_t__parseSelf(M1_hud_PL_M1_t_ *instance, PState *pstate)
{
    array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M1_hud_PL_M1_t__unparseSelf(const M1_hud_PL_M1_t_ *instance, UState *ustate)
{
    array_M1_hud_PL_L20_M1_hud_PL_t_M1_hud_PL_M1_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M1_hud_PL_M1_t_M1_message_t__initERD(M1_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M1_hud_PL_M1_t__initERD(&instance->M1_hud_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M1_hud_PL_M1_t_M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M1_hud_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_hud_PL_M1_t_M1_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hud_PL_M1_t__parseSelf(&instance->M1_hud_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M1_hud_PL_M1_t_M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M1_hud_PL_M1_t_M1_message_t__getArraySize(instance);
    validate_array_bounds("array_M1_hud_PL_M1_t_M1_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M1_hud_PL_M1_t__unparseSelf(&instance->M1_hud_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M1_hud_PL_M1_t_M1_message_t__getArraySize(const M1_message_t_ *instance)
{
if (instance->M1_msgid.array[0] == 0x4A) {
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
    instance->M1_msgid.array = instance->_a_M1_msgid;
    instance->M1_msgid.lengthInBytes = sizeof(instance->_a_M1_msgid);
    instance->M1_msgid.dynamic = false;
    array_M1_hb_PL_M1_t_M1_message_t__initERD(instance, parent);
    array_M1_ss_PL_M1_t_M1_message_t__initERD(instance, parent);
    array_M1_hud_PL_M1_t_M1_message_t__initERD(instance, parent);
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
}

static void
M1_message_t__parseSelf(M1_message_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->len, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->M1_msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_M1_msgid[][1] = {{0x00}, {0x01}, {0x4A}};
    HexBinary enums_M1_msgid[] = {{arrays_M1_msgid[0], 1, false}, {arrays_M1_msgid[1], 1, false}, {arrays_M1_msgid[2], 1, false}};
    validate_hexbinary_enumeration(&instance->M1_msgid, 3, enums_M1_msgid, "M1_msgid", &pstate->pu);
    if (pstate->pu.error) return;
    array_M1_hb_PL_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M1_ss_PL_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M1_hud_PL_M1_t_M1_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
}

static void
M1_message_t__unparseSelf(const M1_message_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->len, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->M1_msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_M1_msgid[][1] = {{0x00}, {0x01}, {0x4A}};
    HexBinary enums_M1_msgid[] = {{arrays_M1_msgid[0], 1, false}, {arrays_M1_msgid[1], 1, false}, {arrays_M1_msgid[2], 1, false}};
    validate_hexbinary_enumeration(&instance->M1_msgid, 3, enums_M1_msgid, "M1_msgid", &ustate->pu);
    if (ustate->pu.error) return;
    array_M1_hb_PL_M1_t_M1_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M1_ss_PL_M1_t_M1_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M1_hud_PL_M1_t_M1_message_t__unparseSelf(instance, ustate);
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
array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__initERD(M2_hb_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hb_L09_hb_PL_t__initERD(&instance->M2_hb_L09[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__parseSelf(M2_hb_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_L09_hb_PL_t__parseSelf(&instance->M2_hb_L09[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__unparseSelf(const M2_hb_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_L09_hb_PL_t__unparseSelf(&instance->M2_hb_L09[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__getArraySize(const M2_hb_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x09) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hb_PL_M2_t__initERD(M2_hb_PL_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hb_PL_M2_t_ERD;
    instance->_base.parent = parent;
    array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__initERD(instance, parent);
}

static void
M2_hb_PL_M2_t__parseSelf(M2_hb_PL_M2_t_ *instance, PState *pstate)
{
    array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hb_PL_M2_t__unparseSelf(const M2_hb_PL_M2_t_ *instance, UState *ustate)
{
    array_M2_hb_L09_hb_PL_t_M2_hb_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hb_PL_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hb_PL_M2_t__initERD(&instance->M2_hb_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hb_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hb_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_PL_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_PL_M2_t__parseSelf(&instance->M2_hb_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hb_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hb_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_hb_PL_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hb_PL_M2_t__unparseSelf(&instance->M2_hb_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hb_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
if (instance->M2_msgid.array[0] == 0x00 && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L01_M2_ss_PL_t__initERD(M2_ss_PL_L01_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L01_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp_1b.array = instance->_a_ss_PL_ocsp_1b;
    instance->ss_PL_ocsp_1b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp_1b);
    instance->ss_PL_ocsp_1b.dynamic = false;
}

static void
M2_ss_PL_L01_M2_ss_PL_t__parseSelf(M2_ss_PL_L01_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L01_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L01_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L01_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L01[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L01_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L01[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L01_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L01[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x01) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L02_M2_ss_PL_t__initERD(M2_ss_PL_L02_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L02_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp_2b.array = instance->_a_ss_PL_ocsp_2b;
    instance->ss_PL_ocsp_2b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp_2b);
    instance->ss_PL_ocsp_2b.dynamic = false;
}

static void
M2_ss_PL_L02_M2_ss_PL_t__parseSelf(M2_ss_PL_L02_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L02_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L02_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L02_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L02[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L02_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L02[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L02_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L02[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x02) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L03_M2_ss_PL_t__initERD(M2_ss_PL_L03_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L03_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp_3b.array = instance->_a_ss_PL_ocsp_3b;
    instance->ss_PL_ocsp_3b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp_3b);
    instance->ss_PL_ocsp_3b.dynamic = false;
}

static void
M2_ss_PL_L03_M2_ss_PL_t__parseSelf(M2_ss_PL_L03_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L03_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L03_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L03_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L03[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L03_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L03[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L03_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L03[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x03) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L04_M2_ss_PL_t__initERD(M2_ss_PL_L04_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L04_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
}

static void
M2_ss_PL_L04_M2_ss_PL_t__parseSelf(M2_ss_PL_L04_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L04_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L04_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L04_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L04[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L04_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L04[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L04_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L04[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x04) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L05_M2_ss_PL_t__initERD(M2_ss_PL_L05_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L05_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse_1b.array = instance->_a_ss_PL_ocse_1b;
    instance->ss_PL_ocse_1b.lengthInBytes = sizeof(instance->_a_ss_PL_ocse_1b);
    instance->ss_PL_ocse_1b.dynamic = false;
}

static void
M2_ss_PL_L05_M2_ss_PL_t__parseSelf(M2_ss_PL_L05_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L05_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L05_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L05_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L05[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L05_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L05[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L05_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L05[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x05) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L06_M2_ss_PL_t__initERD(M2_ss_PL_L06_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L06_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse_2b.array = instance->_a_ss_PL_ocse_2b;
    instance->ss_PL_ocse_2b.lengthInBytes = sizeof(instance->_a_ss_PL_ocse_2b);
    instance->ss_PL_ocse_2b.dynamic = false;
}

static void
M2_ss_PL_L06_M2_ss_PL_t__parseSelf(M2_ss_PL_L06_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L06_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L06_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L06_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L06[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L06_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L06[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L06_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L06[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x06) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L07_M2_ss_PL_t__initERD(M2_ss_PL_L07_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L07_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse_3b.array = instance->_a_ss_PL_ocse_3b;
    instance->ss_PL_ocse_3b.lengthInBytes = sizeof(instance->_a_ss_PL_ocse_3b);
    instance->ss_PL_ocse_3b.dynamic = false;
}

static void
M2_ss_PL_L07_M2_ss_PL_t__parseSelf(M2_ss_PL_L07_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L07_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L07_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L07_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L07[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L07_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L07[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L07_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L07[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x07) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L08_M2_ss_PL_t__initERD(M2_ss_PL_L08_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L08_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
}

static void
M2_ss_PL_L08_M2_ss_PL_t__parseSelf(M2_ss_PL_L08_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L08_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L08_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L08_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L08[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L08_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L08[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L08_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L08[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x08) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L09_M2_ss_PL_t__initERD(M2_ss_PL_L09_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L09_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh_1b.array = instance->_a_ss_PL_ocsh_1b;
    instance->ss_PL_ocsh_1b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh_1b);
    instance->ss_PL_ocsh_1b.dynamic = false;
}

static void
M2_ss_PL_L09_M2_ss_PL_t__parseSelf(M2_ss_PL_L09_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L09_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L09_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L09_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L09[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L09_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L09[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L09_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L09[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x09) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L10_M2_ss_PL_t__initERD(M2_ss_PL_L10_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L10_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh_2b.array = instance->_a_ss_PL_ocsh_2b;
    instance->ss_PL_ocsh_2b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh_2b);
    instance->ss_PL_ocsh_2b.dynamic = false;
}

static void
M2_ss_PL_L10_M2_ss_PL_t__parseSelf(M2_ss_PL_L10_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L10_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L10_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L10_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L10[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L10_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L10[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L10_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L10[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x10) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L11_M2_ss_PL_t__initERD(M2_ss_PL_L11_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L11_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh_3b.array = instance->_a_ss_PL_ocsh_3b;
    instance->ss_PL_ocsh_3b.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh_3b);
    instance->ss_PL_ocsh_3b.dynamic = false;
}

static void
M2_ss_PL_L11_M2_ss_PL_t__parseSelf(M2_ss_PL_L11_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L11_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L11_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L11_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L11[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L11_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L11[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L11_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L11[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x11) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L12_M2_ss_PL_t__initERD(M2_ss_PL_L12_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L12_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
}

static void
M2_ss_PL_L12_M2_ss_PL_t__parseSelf(M2_ss_PL_L12_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L12_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L12_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L12_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L12[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L12_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L12[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L12_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L12[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x12) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L13_M2_ss_PL_t__initERD(M2_ss_PL_L13_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L13_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_load_1b.array = instance->_a_ss_PL_load_1b;
    instance->ss_PL_load_1b.lengthInBytes = sizeof(instance->_a_ss_PL_load_1b);
    instance->ss_PL_load_1b.dynamic = false;
}

static void
M2_ss_PL_L13_M2_ss_PL_t__parseSelf(M2_ss_PL_L13_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_load_1b, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_ss_PL_load_1b[][1] = {{0x00}, {0x01}, {0x02}, {0x03}};
    HexBinary enums_ss_PL_load_1b[] = {{arrays_ss_PL_load_1b[0], 1, false}, {arrays_ss_PL_load_1b[1], 1, false}, {arrays_ss_PL_load_1b[2], 1, false}, {arrays_ss_PL_load_1b[3], 1, false}};
    validate_hexbinary_enumeration(&instance->ss_PL_load_1b, 4, enums_ss_PL_load_1b, "ss_PL_load_1b", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L13_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L13_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_load_1b, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_ss_PL_load_1b[][1] = {{0x00}, {0x01}, {0x02}, {0x03}};
    HexBinary enums_ss_PL_load_1b[] = {{arrays_ss_PL_load_1b[0], 1, false}, {arrays_ss_PL_load_1b[1], 1, false}, {arrays_ss_PL_load_1b[2], 1, false}, {arrays_ss_PL_load_1b[3], 1, false}};
    validate_hexbinary_enumeration(&instance->ss_PL_load_1b, 4, enums_ss_PL_load_1b, "ss_PL_load_1b", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L13_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L13[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L13_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L13[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L13_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L13[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x13) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L14_M2_ss_PL_t__initERD(M2_ss_PL_L14_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L14_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
}

static void
M2_ss_PL_L14_M2_ss_PL_t__parseSelf(M2_ss_PL_L14_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L14_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L14_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L14_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L14[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L14_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L14[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L14_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L14[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x14) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L15_M2_ss_PL_t__initERD(M2_ss_PL_L15_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L15_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat_1b.array = instance->_a_ss_PL_vbat_1b;
    instance->ss_PL_vbat_1b.lengthInBytes = sizeof(instance->_a_ss_PL_vbat_1b);
    instance->ss_PL_vbat_1b.dynamic = false;
}

static void
M2_ss_PL_L15_M2_ss_PL_t__parseSelf(M2_ss_PL_L15_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L15_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L15_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L15_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L15[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L15_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L15[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L15_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L15[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x15) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L16_M2_ss_PL_t__initERD(M2_ss_PL_L16_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L16_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
}

static void
M2_ss_PL_L16_M2_ss_PL_t__parseSelf(M2_ss_PL_L16_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L16_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L16_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L16_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L16[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L16_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L16[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L16_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L16[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x16) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L17_M2_ss_PL_t__initERD(M2_ss_PL_L17_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L17_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat_1b.array = instance->_a_ss_PL_cbat_1b;
    instance->ss_PL_cbat_1b.lengthInBytes = sizeof(instance->_a_ss_PL_cbat_1b);
    instance->ss_PL_cbat_1b.dynamic = false;
}

static void
M2_ss_PL_L17_M2_ss_PL_t__parseSelf(M2_ss_PL_L17_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L17_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L17_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L17_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L17[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L17_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L17[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L17_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L17[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x17) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L18_M2_ss_PL_t__initERD(M2_ss_PL_L18_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L18_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
}

static void
M2_ss_PL_L18_M2_ss_PL_t__parseSelf(M2_ss_PL_L18_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L18_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L18_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L18_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L18[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L18_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L18[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L18_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L18[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x18) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L19_M2_ss_PL_t__initERD(M2_ss_PL_L19_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L19_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
}

static void
M2_ss_PL_L19_M2_ss_PL_t__parseSelf(M2_ss_PL_L19_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->ss_PL_drc, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 39, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L19_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L19_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->ss_PL_drc, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 39, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L19_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L19[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L19_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L19[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L19_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L19[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x19) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L20_M2_ss_PL_t__initERD(M2_ss_PL_L20_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L20_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
}

static void
M2_ss_PL_L20_M2_ss_PL_t__parseSelf(M2_ss_PL_L20_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L20_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L20_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L20_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L20[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L20_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L20[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L20_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L20[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x20) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L21_M2_ss_PL_t__initERD(M2_ss_PL_L21_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L21_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc_1b.array = instance->_a_ss_PL_errc_1b;
    instance->ss_PL_errc_1b.lengthInBytes = sizeof(instance->_a_ss_PL_errc_1b);
    instance->ss_PL_errc_1b.dynamic = false;
}

static void
M2_ss_PL_L21_M2_ss_PL_t__parseSelf(M2_ss_PL_L21_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L21_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L21_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L21_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L21[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L21_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L21[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L21_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L21[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x21) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L22_M2_ss_PL_t__initERD(M2_ss_PL_L22_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L22_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
}

static void
M2_ss_PL_L22_M2_ss_PL_t__parseSelf(M2_ss_PL_L22_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L22_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L22_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L22_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L22[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L22_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L22[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L22_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L22[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x22) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L23_M2_ss_PL_t__initERD(M2_ss_PL_L23_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L23_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1_1b.array = instance->_a_ss_PL_cnt1_1b;
    instance->ss_PL_cnt1_1b.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1_1b);
    instance->ss_PL_cnt1_1b.dynamic = false;
}

static void
M2_ss_PL_L23_M2_ss_PL_t__parseSelf(M2_ss_PL_L23_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L23_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L23_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L23_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L23[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L23_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L23[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L23_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L23[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x23) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L24_M2_ss_PL_t__initERD(M2_ss_PL_L24_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L24_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
}

static void
M2_ss_PL_L24_M2_ss_PL_t__parseSelf(M2_ss_PL_L24_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L24_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L24_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L24_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L24[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L24_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L24[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L24_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L24[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x24) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L25_M2_ss_PL_t__initERD(M2_ss_PL_L25_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L25_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2_1b.array = instance->_a_ss_PL_cnt2_1b;
    instance->ss_PL_cnt2_1b.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2_1b);
    instance->ss_PL_cnt2_1b.dynamic = false;
}

static void
M2_ss_PL_L25_M2_ss_PL_t__parseSelf(M2_ss_PL_L25_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L25_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L25_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L25_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L25[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L25_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L25[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L25_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L25[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x25) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L26_M2_ss_PL_t__initERD(M2_ss_PL_L26_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L26_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
}

static void
M2_ss_PL_L26_M2_ss_PL_t__parseSelf(M2_ss_PL_L26_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L26_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L26_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L26_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L26[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L26_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L26[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L26_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L26[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x26) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L27_M2_ss_PL_t__initERD(M2_ss_PL_L27_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L27_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3_1b.array = instance->_a_ss_PL_cnt3_1b;
    instance->ss_PL_cnt3_1b.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3_1b);
    instance->ss_PL_cnt3_1b.dynamic = false;
}

static void
M2_ss_PL_L27_M2_ss_PL_t__parseSelf(M2_ss_PL_L27_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L27_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L27_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L27_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L27[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L27_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L27[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L27_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L27[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x27) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L28_M2_ss_PL_t__initERD(M2_ss_PL_L28_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L28_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3.array = instance->_a_ss_PL_cnt3;
    instance->ss_PL_cnt3.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3);
    instance->ss_PL_cnt3.dynamic = false;
}

static void
M2_ss_PL_L28_M2_ss_PL_t__parseSelf(M2_ss_PL_L28_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L28_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L28_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L28_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L28[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L28_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L28[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L28_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L28[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x28) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L29_M2_ss_PL_t__initERD(M2_ss_PL_L29_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L29_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3.array = instance->_a_ss_PL_cnt3;
    instance->ss_PL_cnt3.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3);
    instance->ss_PL_cnt3.dynamic = false;
    instance->ss_PL_cnt4_1b.array = instance->_a_ss_PL_cnt4_1b;
    instance->ss_PL_cnt4_1b.lengthInBytes = sizeof(instance->_a_ss_PL_cnt4_1b);
    instance->ss_PL_cnt4_1b.dynamic = false;
}

static void
M2_ss_PL_L29_M2_ss_PL_t__parseSelf(M2_ss_PL_L29_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt4_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L29_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L29_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt4_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L29_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L29[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L29_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L29[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L29_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L29[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x29) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L30_M2_ss_PL_t__initERD(M2_ss_PL_L30_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L30_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3.array = instance->_a_ss_PL_cnt3;
    instance->ss_PL_cnt3.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3);
    instance->ss_PL_cnt3.dynamic = false;
    instance->ss_PL_cnt4.array = instance->_a_ss_PL_cnt4;
    instance->ss_PL_cnt4.lengthInBytes = sizeof(instance->_a_ss_PL_cnt4);
    instance->ss_PL_cnt4.dynamic = false;
}

static void
M2_ss_PL_L30_M2_ss_PL_t__parseSelf(M2_ss_PL_L30_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt4, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L30_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L30_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt4, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L30_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L30[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L30_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L30[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L30_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L30[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x30) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_L31_M2_ss_PL_t__initERD(M2_ss_PL_L31_M2_ss_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_L31_M2_ss_PL_t_ERD;
    instance->_base.parent = parent;
    instance->ss_PL_ocsp.array = instance->_a_ss_PL_ocsp;
    instance->ss_PL_ocsp.lengthInBytes = sizeof(instance->_a_ss_PL_ocsp);
    instance->ss_PL_ocsp.dynamic = false;
    instance->ss_PL_ocse.array = instance->_a_ss_PL_ocse;
    instance->ss_PL_ocse.lengthInBytes = sizeof(instance->_a_ss_PL_ocse);
    instance->ss_PL_ocse.dynamic = false;
    instance->ss_PL_ocsh.array = instance->_a_ss_PL_ocsh;
    instance->ss_PL_ocsh.lengthInBytes = sizeof(instance->_a_ss_PL_ocsh);
    instance->ss_PL_ocsh.dynamic = false;
    instance->ss_PL_vbat.array = instance->_a_ss_PL_vbat;
    instance->ss_PL_vbat.lengthInBytes = sizeof(instance->_a_ss_PL_vbat);
    instance->ss_PL_vbat.dynamic = false;
    instance->ss_PL_cbat.array = instance->_a_ss_PL_cbat;
    instance->ss_PL_cbat.lengthInBytes = sizeof(instance->_a_ss_PL_cbat);
    instance->ss_PL_cbat.dynamic = false;
    instance->ss_PL_errc.array = instance->_a_ss_PL_errc;
    instance->ss_PL_errc.lengthInBytes = sizeof(instance->_a_ss_PL_errc);
    instance->ss_PL_errc.dynamic = false;
    instance->ss_PL_cnt1.array = instance->_a_ss_PL_cnt1;
    instance->ss_PL_cnt1.lengthInBytes = sizeof(instance->_a_ss_PL_cnt1);
    instance->ss_PL_cnt1.dynamic = false;
    instance->ss_PL_cnt2.array = instance->_a_ss_PL_cnt2;
    instance->ss_PL_cnt2.lengthInBytes = sizeof(instance->_a_ss_PL_cnt2);
    instance->ss_PL_cnt2.dynamic = false;
    instance->ss_PL_cnt3.array = instance->_a_ss_PL_cnt3;
    instance->ss_PL_cnt3.lengthInBytes = sizeof(instance->_a_ss_PL_cnt3);
    instance->ss_PL_cnt3.dynamic = false;
    instance->ss_PL_cnt4.array = instance->_a_ss_PL_cnt4;
    instance->ss_PL_cnt4.lengthInBytes = sizeof(instance->_a_ss_PL_cnt4);
    instance->ss_PL_cnt4.dynamic = false;
}

static void
M2_ss_PL_L31_M2_ss_PL_t__parseSelf(M2_ss_PL_L31_M2_ss_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->ss_PL_ocsp, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocse, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_ocsh, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_load, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_vbat, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cbat, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->ss_PL_drc, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_errc, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt1, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt2, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt3, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->ss_PL_cnt4, pstate);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->ss_PL_batr, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->ss_PL_batr <= 100, "ss_PL_batr", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_L31_M2_ss_PL_t__unparseSelf(const M2_ss_PL_L31_M2_ss_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->ss_PL_ocsp, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocse, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_ocsh, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_load, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_load <= 1000, "ss_PL_load", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_vbat, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cbat, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->ss_PL_drc, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_drc <= 10000, "ss_PL_drc", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_errc, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt1, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt2, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt3, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->ss_PL_cnt4, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->ss_PL_batr, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->ss_PL_batr <= 100, "ss_PL_batr", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_L31_M2_ss_PL_t__initERD(&instance->M2_ss_PL_L31[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L31_M2_ss_PL_t__parseSelf(&instance->M2_ss_PL_L31[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_L31_M2_ss_PL_t__unparseSelf(&instance->M2_ss_PL_L31[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__getArraySize(const M2_ss_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x31) {
    return(1);
} else {
    return(0);
}
}

static void
M2_ss_PL_M2_t__initERD(M2_ss_PL_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_ss_PL_M2_t_ERD;
    instance->_base.parent = parent;
    array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
    array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__initERD(instance, parent);
}

static void
M2_ss_PL_M2_t__parseSelf(M2_ss_PL_M2_t_ *instance, PState *pstate)
{
    array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M2_ss_PL_M2_t__unparseSelf(const M2_ss_PL_M2_t_ *instance, UState *ustate)
{
    array_M2_ss_PL_L01_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L02_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L03_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L04_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L05_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L06_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L07_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L08_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L09_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L10_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L11_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L12_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L13_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L14_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L15_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L16_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L17_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L18_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L19_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L20_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L21_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L22_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L23_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L24_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L25_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L26_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L27_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L28_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L29_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L30_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_L31_M2_ss_PL_t_M2_ss_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_ss_PL_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_ss_PL_M2_t__initERD(&instance->M2_ss_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M2_ss_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_ss_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_M2_t__parseSelf(&instance->M2_ss_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_ss_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_ss_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_ss_PL_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_ss_PL_M2_t__unparseSelf(&instance->M2_ss_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_ss_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
if (instance->M2_msgid.array[0] == 0x01 && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L01_M2_hud_PL_t__initERD(M2_hud_PL_L01_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L01_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd_1b.array = instance->_a_hud_PL_aspd_1b;
    instance->hud_PL_aspd_1b.lengthInBytes = sizeof(instance->_a_hud_PL_aspd_1b);
    instance->hud_PL_aspd_1b.dynamic = false;
}

static void
M2_hud_PL_L01_M2_hud_PL_t__parseSelf(M2_hud_PL_L01_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L01_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L01_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L01_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L01[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L01_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L01[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L01_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L01[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x01) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L02_M2_hud_PL_t__initERD(M2_hud_PL_L02_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L02_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd_2b.array = instance->_a_hud_PL_aspd_2b;
    instance->hud_PL_aspd_2b.lengthInBytes = sizeof(instance->_a_hud_PL_aspd_2b);
    instance->hud_PL_aspd_2b.dynamic = false;
}

static void
M2_hud_PL_L02_M2_hud_PL_t__parseSelf(M2_hud_PL_L02_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L02_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L02_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L02_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L02[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L02_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L02[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L02_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L02[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x02) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L03_M2_hud_PL_t__initERD(M2_hud_PL_L03_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L03_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd_3b.array = instance->_a_hud_PL_aspd_3b;
    instance->hud_PL_aspd_3b.lengthInBytes = sizeof(instance->_a_hud_PL_aspd_3b);
    instance->hud_PL_aspd_3b.dynamic = false;
}

static void
M2_hud_PL_L03_M2_hud_PL_t__parseSelf(M2_hud_PL_L03_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L03_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L03_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L03_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L03[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L03_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L03[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L03_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L03[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x03) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L04_M2_hud_PL_t__initERD(M2_hud_PL_L04_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L04_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
}

static void
M2_hud_PL_L04_M2_hud_PL_t__parseSelf(M2_hud_PL_L04_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L04_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L04_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L04_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L04[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L04_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L04[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L04_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L04[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x04) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L05_M2_hud_PL_t__initERD(M2_hud_PL_L05_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L05_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd_1b.array = instance->_a_hud_PL_gspd_1b;
    instance->hud_PL_gspd_1b.lengthInBytes = sizeof(instance->_a_hud_PL_gspd_1b);
    instance->hud_PL_gspd_1b.dynamic = false;
}

static void
M2_hud_PL_L05_M2_hud_PL_t__parseSelf(M2_hud_PL_L05_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L05_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L05_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L05_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L05[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L05_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L05[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L05_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L05[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x05) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L06_M2_hud_PL_t__initERD(M2_hud_PL_L06_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L06_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd_2b.array = instance->_a_hud_PL_gspd_2b;
    instance->hud_PL_gspd_2b.lengthInBytes = sizeof(instance->_a_hud_PL_gspd_2b);
    instance->hud_PL_gspd_2b.dynamic = false;
}

static void
M2_hud_PL_L06_M2_hud_PL_t__parseSelf(M2_hud_PL_L06_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L06_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L06_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L06_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L06[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L06_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L06[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L06_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L06[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x06) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L07_M2_hud_PL_t__initERD(M2_hud_PL_L07_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L07_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd_3b.array = instance->_a_hud_PL_gspd_3b;
    instance->hud_PL_gspd_3b.lengthInBytes = sizeof(instance->_a_hud_PL_gspd_3b);
    instance->hud_PL_gspd_3b.dynamic = false;
}

static void
M2_hud_PL_L07_M2_hud_PL_t__parseSelf(M2_hud_PL_L07_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L07_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L07_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L07_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L07[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L07_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L07[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L07_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L07[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x07) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L08_M2_hud_PL_t__initERD(M2_hud_PL_L08_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L08_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
}

static void
M2_hud_PL_L08_M2_hud_PL_t__parseSelf(M2_hud_PL_L08_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L08_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L08_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L08_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L08[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L08_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L08[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L08_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L08[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x08) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L09_M2_hud_PL_t__initERD(M2_hud_PL_L09_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L09_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt_1b.array = instance->_a_hud_PL_alt_1b;
    instance->hud_PL_alt_1b.lengthInBytes = sizeof(instance->_a_hud_PL_alt_1b);
    instance->hud_PL_alt_1b.dynamic = false;
}

static void
M2_hud_PL_L09_M2_hud_PL_t__parseSelf(M2_hud_PL_L09_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L09_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L09_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L09_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L09[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L09_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L09[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L09_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L09[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x09) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L10_M2_hud_PL_t__initERD(M2_hud_PL_L10_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L10_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt_2b.array = instance->_a_hud_PL_alt_2b;
    instance->hud_PL_alt_2b.lengthInBytes = sizeof(instance->_a_hud_PL_alt_2b);
    instance->hud_PL_alt_2b.dynamic = false;
}

static void
M2_hud_PL_L10_M2_hud_PL_t__parseSelf(M2_hud_PL_L10_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L10_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L10_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L10_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L10[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L10_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L10[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L10_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L10[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x10) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L11_M2_hud_PL_t__initERD(M2_hud_PL_L11_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L11_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt_3b.array = instance->_a_hud_PL_alt_3b;
    instance->hud_PL_alt_3b.lengthInBytes = sizeof(instance->_a_hud_PL_alt_3b);
    instance->hud_PL_alt_3b.dynamic = false;
}

static void
M2_hud_PL_L11_M2_hud_PL_t__parseSelf(M2_hud_PL_L11_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L11_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L11_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L11_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L11[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L11_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L11[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L11_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L11[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x11) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L12_M2_hud_PL_t__initERD(M2_hud_PL_L12_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L12_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
}

static void
M2_hud_PL_L12_M2_hud_PL_t__parseSelf(M2_hud_PL_L12_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L12_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L12_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L12_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L12[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L12_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L12[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L12_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L12[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x12) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L13_M2_hud_PL_t__initERD(M2_hud_PL_L13_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L13_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb_1b.array = instance->_a_hud_PL_clmb_1b;
    instance->hud_PL_clmb_1b.lengthInBytes = sizeof(instance->_a_hud_PL_clmb_1b);
    instance->hud_PL_clmb_1b.dynamic = false;
}

static void
M2_hud_PL_L13_M2_hud_PL_t__parseSelf(M2_hud_PL_L13_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb_1b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L13_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L13_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb_1b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L13_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L13[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L13_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L13[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L13_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L13[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x13) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L14_M2_hud_PL_t__initERD(M2_hud_PL_L14_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L14_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb_2b.array = instance->_a_hud_PL_clmb_2b;
    instance->hud_PL_clmb_2b.lengthInBytes = sizeof(instance->_a_hud_PL_clmb_2b);
    instance->hud_PL_clmb_2b.dynamic = false;
}

static void
M2_hud_PL_L14_M2_hud_PL_t__parseSelf(M2_hud_PL_L14_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb_2b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L14_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L14_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb_2b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L14_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L14[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L14_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L14[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L14_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L14[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x14) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L15_M2_hud_PL_t__initERD(M2_hud_PL_L15_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L15_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb_3b.array = instance->_a_hud_PL_clmb_3b;
    instance->hud_PL_clmb_3b.lengthInBytes = sizeof(instance->_a_hud_PL_clmb_3b);
    instance->hud_PL_clmb_3b.dynamic = false;
}

static void
M2_hud_PL_L15_M2_hud_PL_t__parseSelf(M2_hud_PL_L15_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb_3b, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L15_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L15_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb_3b, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L15_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L15[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L15_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L15[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L15_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L15[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x15) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L16_M2_hud_PL_t__initERD(M2_hud_PL_L16_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L16_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
}

static void
M2_hud_PL_L16_M2_hud_PL_t__parseSelf(M2_hud_PL_L16_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L16_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L16_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L16_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L16[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L16_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L16[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L16_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L16[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x16) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L17_M2_hud_PL_t__initERD(M2_hud_PL_L17_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L17_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
    instance->hud_PL_hdng_1b.array = instance->_a_hud_PL_hdng_1b;
    instance->hud_PL_hdng_1b.lengthInBytes = sizeof(instance->_a_hud_PL_hdng_1b);
    instance->hud_PL_hdng_1b.dynamic = false;
}

static void
M2_hud_PL_L17_M2_hud_PL_t__parseSelf(M2_hud_PL_L17_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_hdng_1b, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_hud_PL_hdng_1b[][1] = {{0x00}, {0x01}};
    HexBinary enums_hud_PL_hdng_1b[] = {{arrays_hud_PL_hdng_1b[0], 1, false}, {arrays_hud_PL_hdng_1b[1], 1, false}};
    validate_hexbinary_enumeration(&instance->hud_PL_hdng_1b, 2, enums_hud_PL_hdng_1b, "hud_PL_hdng_1b", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L17_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L17_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_hdng_1b, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_hud_PL_hdng_1b[][1] = {{0x00}, {0x01}};
    HexBinary enums_hud_PL_hdng_1b[] = {{arrays_hud_PL_hdng_1b[0], 1, false}, {arrays_hud_PL_hdng_1b[1], 1, false}};
    validate_hexbinary_enumeration(&instance->hud_PL_hdng_1b, 2, enums_hud_PL_hdng_1b, "hud_PL_hdng_1b", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L17_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L17[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L17_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L17[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L17_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L17[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x17) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L18_M2_hud_PL_t__initERD(M2_hud_PL_L18_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L18_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
}

static void
M2_hud_PL_L18_M2_hud_PL_t__parseSelf(M2_hud_PL_L18_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->hud_PL_hdng, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L18_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L18_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->hud_PL_hdng, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L18_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L18[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L18_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L18[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L18_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L18[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x18) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L19_M2_hud_PL_t__initERD(M2_hud_PL_L19_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L19_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
    instance->hud_PL_thtl_1b.array = instance->_a_hud_PL_thtl_1b;
    instance->hud_PL_thtl_1b.lengthInBytes = sizeof(instance->_a_hud_PL_thtl_1b);
    instance->hud_PL_thtl_1b.dynamic = false;
}

static void
M2_hud_PL_L19_M2_hud_PL_t__parseSelf(M2_hud_PL_L19_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->hud_PL_hdng, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_thtl_1b, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_hud_PL_thtl_1b[][1] = {{0x00}};
    HexBinary enums_hud_PL_thtl_1b[] = {{arrays_hud_PL_thtl_1b[0], 1, false}};
    validate_hexbinary_enumeration(&instance->hud_PL_thtl_1b, 1, enums_hud_PL_thtl_1b, "hud_PL_thtl_1b", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L19_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L19_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->hud_PL_hdng, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_thtl_1b, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_hud_PL_thtl_1b[][1] = {{0x00}};
    HexBinary enums_hud_PL_thtl_1b[] = {{arrays_hud_PL_thtl_1b[0], 1, false}};
    validate_hexbinary_enumeration(&instance->hud_PL_thtl_1b, 1, enums_hud_PL_thtl_1b, "hud_PL_thtl_1b", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L19_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L19[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L19_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L19[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L19_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L19[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x19) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_L20_M2_hud_PL_t__initERD(M2_hud_PL_L20_M2_hud_PL_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_L20_M2_hud_PL_t_ERD;
    instance->_base.parent = parent;
    instance->hud_PL_aspd.array = instance->_a_hud_PL_aspd;
    instance->hud_PL_aspd.lengthInBytes = sizeof(instance->_a_hud_PL_aspd);
    instance->hud_PL_aspd.dynamic = false;
    instance->hud_PL_gspd.array = instance->_a_hud_PL_gspd;
    instance->hud_PL_gspd.lengthInBytes = sizeof(instance->_a_hud_PL_gspd);
    instance->hud_PL_gspd.dynamic = false;
    instance->hud_PL_alt.array = instance->_a_hud_PL_alt;
    instance->hud_PL_alt.lengthInBytes = sizeof(instance->_a_hud_PL_alt);
    instance->hud_PL_alt.dynamic = false;
    instance->hud_PL_clmb.array = instance->_a_hud_PL_clmb;
    instance->hud_PL_clmb.lengthInBytes = sizeof(instance->_a_hud_PL_clmb);
    instance->hud_PL_clmb.dynamic = false;
}

static void
M2_hud_PL_L20_M2_hud_PL_t__parseSelf(M2_hud_PL_L20_M2_hud_PL_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->hud_PL_aspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_gspd, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_alt, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->hud_PL_clmb, pstate);
    if (pstate->pu.error) return;
    parse_be_uint16(&instance->hud_PL_hdng, 16, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &pstate->pu);
    if (pstate->pu.error) return;
    parse_be_uint8(&instance->hud_PL_thtl, 8, pstate);
    if (pstate->pu.error) return;
    validate_schema_range(instance->hud_PL_thtl <= 100, "hud_PL_thtl", &pstate->pu);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_L20_M2_hud_PL_t__unparseSelf(const M2_hud_PL_L20_M2_hud_PL_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->hud_PL_aspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_gspd, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_alt, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->hud_PL_clmb, ustate);
    if (ustate->pu.error) return;
    unparse_be_uint16(instance->hud_PL_hdng, 16, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_hdng <= 360, "hud_PL_hdng", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_be_uint8(instance->hud_PL_thtl, 8, ustate);
    if (ustate->pu.error) return;
    validate_schema_range(instance->hud_PL_thtl <= 100, "hud_PL_thtl", &ustate->pu);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_L20_M2_hud_PL_t__initERD(&instance->M2_hud_PL_L20[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L20_M2_hud_PL_t__parseSelf(&instance->M2_hud_PL_L20[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_L20_M2_hud_PL_t__unparseSelf(&instance->M2_hud_PL_L20[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__getArraySize(const M2_hud_PL_M2_t_ *instance)
{
if (((M2_message_t_ *)instance->_base.parent)->len.array[0] == 0x20) {
    return(1);
} else {
    return(0);
}
}

static void
M2_hud_PL_M2_t__initERD(M2_hud_PL_M2_t_ *instance, InfosetBase *parent)
{
    instance->_base.erd = &M2_hud_PL_M2_t_ERD;
    instance->_base.parent = parent;
    array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
    array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__initERD(instance, parent);
}

static void
M2_hud_PL_M2_t__parseSelf(M2_hud_PL_M2_t_ *instance, PState *pstate)
{
    array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M2_hud_PL_M2_t__unparseSelf(const M2_hud_PL_M2_t_ *instance, UState *ustate)
{
    array_M2_hud_PL_L01_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L02_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L03_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L04_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L05_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L06_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L07_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L08_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L09_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L10_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L11_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L12_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L13_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L14_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L15_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L16_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L17_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L18_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L19_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_L20_M2_hud_PL_t_M2_hud_PL_M2_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
}

static void
array_M2_hud_PL_M2_t_M2_message_t__initERD(M2_message_t_ *instance, InfosetBase *parent)
{
    UNUSED(parent);
    for (size_t i = 0; i < 1; i++)
    {
        M2_hud_PL_M2_t__initERD(&instance->M2_hud_PL[i], (InfosetBase *)instance);
    }
}

static void
array_M2_hud_PL_M2_t_M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    const size_t arraySize = array_M2_hud_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_M2_t_M2_message_t_", arraySize, 0, 1, &pstate->pu);
    if (pstate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_M2_t__parseSelf(&instance->M2_hud_PL[i], pstate);
        if (pstate->pu.error) return;
    }
}

static void
array_M2_hud_PL_M2_t_M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    const size_t arraySize = array_M2_hud_PL_M2_t_M2_message_t__getArraySize(instance);
    validate_array_bounds("array_M2_hud_PL_M2_t_M2_message_t_", arraySize, 0, 1, &ustate->pu);
    if (ustate->pu.error) return;

    for (size_t i = 0; i < arraySize; i++)
    {
        M2_hud_PL_M2_t__unparseSelf(&instance->M2_hud_PL[i], ustate);
        if (ustate->pu.error) return;
    }
}

static size_t
array_M2_hud_PL_M2_t_M2_message_t__getArraySize(const M2_message_t_ *instance)
{
if (instance->M2_msgid.array[0] == 0x4A && instance->M2_msgid.array[1] == 0x00 && instance->M2_msgid.array[2] == 0x00) {
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
    instance->len.array = instance->_a_len;
    instance->len.lengthInBytes = sizeof(instance->_a_len);
    instance->len.dynamic = false;
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
    array_M2_hb_PL_M2_t_M2_message_t__initERD(instance, parent);
    array_M2_ss_PL_M2_t_M2_message_t__initERD(instance, parent);
    array_M2_hud_PL_M2_t_M2_message_t__initERD(instance, parent);
    instance->checksum.array = instance->_a_checksum;
    instance->checksum.lengthInBytes = sizeof(instance->_a_checksum);
    instance->checksum.dynamic = false;
    array_signature_M2_t_M2_message_t__initERD(instance, parent);
}

static void
M2_message_t__parseSelf(M2_message_t_ *instance, PState *pstate)
{
    parse_hexBinary(&instance->len, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->inc_flags, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_inc_flags[][1] = {{0x00}, {0x01}};
    HexBinary enums_inc_flags[] = {{arrays_inc_flags[0], 1, false}, {arrays_inc_flags[1], 1, false}};
    validate_hexbinary_enumeration(&instance->inc_flags, 2, enums_inc_flags, "inc_flags", &pstate->pu);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->comp_flags, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->seq, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->sysid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->compid, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->M2_msgid, pstate);
    if (pstate->pu.error) return;
    uint8_t arrays_M2_msgid[][3] = {{0x00, 0x00, 0x00}, {0x01, 0x00, 0x00}, {0x4A, 0x00, 0x00}};
    HexBinary enums_M2_msgid[] = {{arrays_M2_msgid[0], 3, false}, {arrays_M2_msgid[1], 3, false}, {arrays_M2_msgid[2], 3, false}};
    validate_hexbinary_enumeration(&instance->M2_msgid, 3, enums_M2_msgid, "M2_msgid", &pstate->pu);
    if (pstate->pu.error) return;
    array_M2_hb_PL_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_ss_PL_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    array_M2_hud_PL_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
    parse_hexBinary(&instance->checksum, pstate);
    if (pstate->pu.error) return;
    array_signature_M2_t_M2_message_t__parseSelf(instance, pstate);
    if (pstate->pu.error) return;
}

static void
M2_message_t__unparseSelf(const M2_message_t_ *instance, UState *ustate)
{
    unparse_hexBinary(instance->len, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->inc_flags, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_inc_flags[][1] = {{0x00}, {0x01}};
    HexBinary enums_inc_flags[] = {{arrays_inc_flags[0], 1, false}, {arrays_inc_flags[1], 1, false}};
    validate_hexbinary_enumeration(&instance->inc_flags, 2, enums_inc_flags, "inc_flags", &ustate->pu);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->comp_flags, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->seq, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->sysid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->compid, ustate);
    if (ustate->pu.error) return;
    unparse_hexBinary(instance->M2_msgid, ustate);
    if (ustate->pu.error) return;
    uint8_t arrays_M2_msgid[][3] = {{0x00, 0x00, 0x00}, {0x01, 0x00, 0x00}, {0x4A, 0x00, 0x00}};
    HexBinary enums_M2_msgid[] = {{arrays_M2_msgid[0], 3, false}, {arrays_M2_msgid[1], 3, false}, {arrays_M2_msgid[2], 3, false}};
    validate_hexbinary_enumeration(&instance->M2_msgid, 3, enums_M2_msgid, "M2_msgid", &ustate->pu);
    if (ustate->pu.error) return;
    array_M2_hb_PL_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_ss_PL_M2_t_M2_message_t__unparseSelf(instance, ustate);
    if (ustate->pu.error) return;
    array_M2_hud_PL_M2_t_M2_message_t__unparseSelf(instance, ustate);
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
if (instance->stx.array[0] == 0xFD) {
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
