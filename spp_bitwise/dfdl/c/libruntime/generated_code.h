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

typedef struct prim_hdr_spp_pkt_t_
{
    InfosetBase _base;
    uint8_t     ver;
    uint8_t     type;
    uint8_t     shf;
    uint16_t    apid;
    uint8_t     seq_fl;
    uint16_t    seq_ct;
    uint16_t    len;
} prim_hdr_spp_pkt_t_;

typedef struct sec_hdr_spp_pkt_t_
{
    InfosetBase _base;
    HexBinary   octet[65536];
    uint8_t     _a_octet[65536][1];
} sec_hdr_spp_pkt_t_;

typedef struct idle_df_udf_t_
{
    InfosetBase _base;
    HexBinary   idle_data[65536];
    uint8_t     _a_idle_data[65536][2];
} idle_df_udf_t_;

typedef struct other_df_udf_t_
{
    InfosetBase _base;
    HexBinary   octet[65536];
    uint8_t     _a_octet[65536][1];
} other_df_udf_t_;

typedef struct udf_spp_pkt_t_
{
    InfosetBase _base;
    idle_df_udf_t_ idle_df[1];
    other_df_udf_t_ other_df[1];
} udf_spp_pkt_t_;

typedef struct spp_pkt_
{
    InfosetBase _base;
    prim_hdr_spp_pkt_t_ prim_hdr;
    sec_hdr_spp_pkt_t_ sec_hdr[1];
    udf_spp_pkt_t_ udf[1];
} spp_pkt_;

#endif // GENERATED_CODE_H
