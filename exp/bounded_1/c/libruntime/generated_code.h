#ifndef GENERATED_CODE_H
#define GENERATED_CODE_H

// auto-maintained by iwyu
// clang-format off
#include <stdbool.h>  // for bool
#include <stddef.h>   // for size_t
#include <stdint.h>   // for uint8_t, int16_t, int32_t, int64_t, uint32_t, int8_t, uint16_t, uint64_t
#include "infoset.h"  // for InfosetBase, HexBinary
// clang-format on

// Define schema version (will be empty if schema did not define any version string)

extern const char *schema_version;

// Define infoset structures

typedef struct digit_integer_t_
{
    InfosetBase _base;
    uint8_t     zero;
    uint8_t     onenine;
} digit_integer_t_;

typedef struct integer_number_t_
{
    InfosetBase _base;
    uint8_t     minus[1];
    uint8_t     zero;
    uint8_t     onenine[4];
    digit_integer_t_ digit[10];
} integer_number_t_;

typedef struct digit_fraction_t_
{
    InfosetBase _base;
    uint8_t     zero;
    uint8_t     onenine;
} digit_fraction_t_;

typedef struct fraction_number_t_
{
    InfosetBase _base;
    uint8_t     dot;
    digit_fraction_t_ digit[10];
} fraction_number_t_;

typedef struct sign_exponent_t_
{
    InfosetBase _base;
    uint8_t     minus;
    uint8_t     plus;
} sign_exponent_t_;

typedef struct digit_exponent_t_
{
    InfosetBase _base;
    uint8_t     zero;
    uint8_t     onenine;
} digit_exponent_t_;

typedef struct exponent_number_t_
{
    InfosetBase _base;
    uint8_t     exp;
    sign_exponent_t_ sign[1];
    digit_exponent_t_ digit[10];
} exponent_number_t_;

typedef struct JSON_number_
{
    InfosetBase _base;
    integer_number_t_ integer;
    fraction_number_t_ fraction[1];
    exponent_number_t_ exponent[1];
} JSON_number_;

#endif // GENERATED_CODE_H
