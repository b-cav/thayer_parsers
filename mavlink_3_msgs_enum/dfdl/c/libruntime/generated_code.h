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

typedef struct M2_hb_L09_hb_PL_t_
{
    InfosetBase _base;
    HexBinary   hb_PL_cust;
    uint8_t     _a_hb_PL_cust[4];
    uint8_t     hb_PL_type;
    uint8_t     hb_PL_auto;
    HexBinary   hb_PL_base;
    uint8_t     _a_hb_PL_base[1];
    uint8_t     hb_PL_stat;
    HexBinary   hb_PL_mvrs;
    uint8_t     _a_hb_PL_mvrs[1];
} M2_hb_L09_hb_PL_t_;

typedef struct M1_hb_PL_M1_t_
{
    InfosetBase _base;
    M2_hb_L09_hb_PL_t_ M2_hb_L09[1];
} M1_hb_PL_M1_t_;

typedef struct M1_ss_PL_L31_M1_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3;
    uint8_t     _a_ss_PL_cnt3[2];
    HexBinary   ss_PL_cnt4;
    uint8_t     _a_ss_PL_cnt4[2];
    int8_t      ss_PL_batr;
} M1_ss_PL_L31_M1_ss_PL_t_;

typedef struct M1_ss_PL_M1_t_
{
    InfosetBase _base;
    M1_ss_PL_L31_M1_ss_PL_t_ M1_ss_PL_L31[1];
} M1_ss_PL_M1_t_;

typedef struct M1_hud_PL_L20_M1_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
    int16_t     hud_PL_hdng;
    uint16_t    hud_PL_thtl;
} M1_hud_PL_L20_M1_hud_PL_t_;

typedef struct M1_hud_PL_M1_t_
{
    InfosetBase _base;
    M1_hud_PL_L20_M1_hud_PL_t_ M1_hud_PL_L20[1];
} M1_hud_PL_M1_t_;

typedef struct M1_message_t_
{
    InfosetBase _base;
    HexBinary   len;
    uint8_t     _a_len[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   M1_msgid;
    uint8_t     _a_M1_msgid[1];
    M1_hb_PL_M1_t_ M1_hb_PL[1];
    M1_ss_PL_M1_t_ M1_ss_PL[1];
    M1_hud_PL_M1_t_ M1_hud_PL[1];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
} M1_message_t_;

typedef struct M2_hb_PL_M2_t_
{
    InfosetBase _base;
    M2_hb_L09_hb_PL_t_ M2_hb_L09[1];
} M2_hb_PL_M2_t_;

typedef struct M2_ss_PL_L01_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp_1b;
    uint8_t     _a_ss_PL_ocsp_1b[1];
} M2_ss_PL_L01_M2_ss_PL_t_;

typedef struct M2_ss_PL_L02_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp_2b;
    uint8_t     _a_ss_PL_ocsp_2b[2];
} M2_ss_PL_L02_M2_ss_PL_t_;

typedef struct M2_ss_PL_L03_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp_3b;
    uint8_t     _a_ss_PL_ocsp_3b[3];
} M2_ss_PL_L03_M2_ss_PL_t_;

typedef struct M2_ss_PL_L04_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
} M2_ss_PL_L04_M2_ss_PL_t_;

typedef struct M2_ss_PL_L05_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse_1b;
    uint8_t     _a_ss_PL_ocse_1b[1];
} M2_ss_PL_L05_M2_ss_PL_t_;

typedef struct M2_ss_PL_L06_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse_2b;
    uint8_t     _a_ss_PL_ocse_2b[2];
} M2_ss_PL_L06_M2_ss_PL_t_;

typedef struct M2_ss_PL_L07_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse_3b;
    uint8_t     _a_ss_PL_ocse_3b[3];
} M2_ss_PL_L07_M2_ss_PL_t_;

typedef struct M2_ss_PL_L08_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
} M2_ss_PL_L08_M2_ss_PL_t_;

typedef struct M2_ss_PL_L09_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh_1b;
    uint8_t     _a_ss_PL_ocsh_1b[1];
} M2_ss_PL_L09_M2_ss_PL_t_;

typedef struct M2_ss_PL_L10_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh_2b;
    uint8_t     _a_ss_PL_ocsh_2b[2];
} M2_ss_PL_L10_M2_ss_PL_t_;

typedef struct M2_ss_PL_L11_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh_3b;
    uint8_t     _a_ss_PL_ocsh_3b[3];
} M2_ss_PL_L11_M2_ss_PL_t_;

typedef struct M2_ss_PL_L12_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
} M2_ss_PL_L12_M2_ss_PL_t_;

typedef struct M2_ss_PL_L13_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    HexBinary   ss_PL_load_1b;
    uint8_t     _a_ss_PL_load_1b[1];
} M2_ss_PL_L13_M2_ss_PL_t_;

typedef struct M2_ss_PL_L14_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
} M2_ss_PL_L14_M2_ss_PL_t_;

typedef struct M2_ss_PL_L15_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat_1b;
    uint8_t     _a_ss_PL_vbat_1b[1];
} M2_ss_PL_L15_M2_ss_PL_t_;

typedef struct M2_ss_PL_L16_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
} M2_ss_PL_L16_M2_ss_PL_t_;

typedef struct M2_ss_PL_L17_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat_1b;
    uint8_t     _a_ss_PL_cbat_1b[1];
} M2_ss_PL_L17_M2_ss_PL_t_;

typedef struct M2_ss_PL_L18_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
} M2_ss_PL_L18_M2_ss_PL_t_;

typedef struct M2_ss_PL_L19_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint8_t     ss_PL_drc_1b;
} M2_ss_PL_L19_M2_ss_PL_t_;

typedef struct M2_ss_PL_L20_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
} M2_ss_PL_L20_M2_ss_PL_t_;

typedef struct M2_ss_PL_L21_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc_1b;
    uint8_t     _a_ss_PL_errc_1b[1];
} M2_ss_PL_L21_M2_ss_PL_t_;

typedef struct M2_ss_PL_L22_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
} M2_ss_PL_L22_M2_ss_PL_t_;

typedef struct M2_ss_PL_L23_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1_1b;
    uint8_t     _a_ss_PL_cnt1_1b[1];
} M2_ss_PL_L23_M2_ss_PL_t_;

typedef struct M2_ss_PL_L24_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
} M2_ss_PL_L24_M2_ss_PL_t_;

typedef struct M2_ss_PL_L25_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2_1b;
    uint8_t     _a_ss_PL_cnt2_1b[1];
} M2_ss_PL_L25_M2_ss_PL_t_;

typedef struct M2_ss_PL_L26_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
} M2_ss_PL_L26_M2_ss_PL_t_;

typedef struct M2_ss_PL_L27_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3_1b;
    uint8_t     _a_ss_PL_cnt3_1b[1];
} M2_ss_PL_L27_M2_ss_PL_t_;

typedef struct M2_ss_PL_L28_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3;
    uint8_t     _a_ss_PL_cnt3[2];
} M2_ss_PL_L28_M2_ss_PL_t_;

typedef struct M2_ss_PL_L29_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3;
    uint8_t     _a_ss_PL_cnt3[2];
    HexBinary   ss_PL_cnt4_1b;
    uint8_t     _a_ss_PL_cnt4_1b[1];
} M2_ss_PL_L29_M2_ss_PL_t_;

typedef struct M2_ss_PL_L30_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3;
    uint8_t     _a_ss_PL_cnt3[2];
    HexBinary   ss_PL_cnt4;
    uint8_t     _a_ss_PL_cnt4[2];
} M2_ss_PL_L30_M2_ss_PL_t_;

typedef struct M2_ss_PL_L31_M2_ss_PL_t_
{
    InfosetBase _base;
    HexBinary   ss_PL_ocsp;
    uint8_t     _a_ss_PL_ocsp[4];
    HexBinary   ss_PL_ocse;
    uint8_t     _a_ss_PL_ocse[4];
    HexBinary   ss_PL_ocsh;
    uint8_t     _a_ss_PL_ocsh[4];
    uint16_t    ss_PL_load;
    HexBinary   ss_PL_vbat;
    uint8_t     _a_ss_PL_vbat[2];
    HexBinary   ss_PL_cbat;
    uint8_t     _a_ss_PL_cbat[2];
    uint16_t    ss_PL_drc;
    HexBinary   ss_PL_errc;
    uint8_t     _a_ss_PL_errc[2];
    HexBinary   ss_PL_cnt1;
    uint8_t     _a_ss_PL_cnt1[2];
    HexBinary   ss_PL_cnt2;
    uint8_t     _a_ss_PL_cnt2[2];
    HexBinary   ss_PL_cnt3;
    uint8_t     _a_ss_PL_cnt3[2];
    HexBinary   ss_PL_cnt4;
    uint8_t     _a_ss_PL_cnt4[2];
    int8_t      ss_PL_batr;
} M2_ss_PL_L31_M2_ss_PL_t_;

typedef struct M2_ss_PL_M2_t_
{
    InfosetBase _base;
    M2_ss_PL_L01_M2_ss_PL_t_ M2_ss_PL_L01[1];
    M2_ss_PL_L02_M2_ss_PL_t_ M2_ss_PL_L02[1];
    M2_ss_PL_L03_M2_ss_PL_t_ M2_ss_PL_L03[1];
    M2_ss_PL_L04_M2_ss_PL_t_ M2_ss_PL_L04[1];
    M2_ss_PL_L05_M2_ss_PL_t_ M2_ss_PL_L05[1];
    M2_ss_PL_L06_M2_ss_PL_t_ M2_ss_PL_L06[1];
    M2_ss_PL_L07_M2_ss_PL_t_ M2_ss_PL_L07[1];
    M2_ss_PL_L08_M2_ss_PL_t_ M2_ss_PL_L08[1];
    M2_ss_PL_L09_M2_ss_PL_t_ M2_ss_PL_L09[1];
    M2_ss_PL_L10_M2_ss_PL_t_ M2_ss_PL_L10[1];
    M2_ss_PL_L11_M2_ss_PL_t_ M2_ss_PL_L11[1];
    M2_ss_PL_L12_M2_ss_PL_t_ M2_ss_PL_L12[1];
    M2_ss_PL_L13_M2_ss_PL_t_ M2_ss_PL_L13[1];
    M2_ss_PL_L14_M2_ss_PL_t_ M2_ss_PL_L14[1];
    M2_ss_PL_L15_M2_ss_PL_t_ M2_ss_PL_L15[1];
    M2_ss_PL_L16_M2_ss_PL_t_ M2_ss_PL_L16[1];
    M2_ss_PL_L17_M2_ss_PL_t_ M2_ss_PL_L17[1];
    M2_ss_PL_L18_M2_ss_PL_t_ M2_ss_PL_L18[1];
    M2_ss_PL_L19_M2_ss_PL_t_ M2_ss_PL_L19[1];
    M2_ss_PL_L20_M2_ss_PL_t_ M2_ss_PL_L20[1];
    M2_ss_PL_L21_M2_ss_PL_t_ M2_ss_PL_L21[1];
    M2_ss_PL_L22_M2_ss_PL_t_ M2_ss_PL_L22[1];
    M2_ss_PL_L23_M2_ss_PL_t_ M2_ss_PL_L23[1];
    M2_ss_PL_L24_M2_ss_PL_t_ M2_ss_PL_L24[1];
    M2_ss_PL_L25_M2_ss_PL_t_ M2_ss_PL_L25[1];
    M2_ss_PL_L26_M2_ss_PL_t_ M2_ss_PL_L26[1];
    M2_ss_PL_L27_M2_ss_PL_t_ M2_ss_PL_L27[1];
    M2_ss_PL_L28_M2_ss_PL_t_ M2_ss_PL_L28[1];
    M2_ss_PL_L29_M2_ss_PL_t_ M2_ss_PL_L29[1];
    M2_ss_PL_L30_M2_ss_PL_t_ M2_ss_PL_L30[1];
    M2_ss_PL_L31_M2_ss_PL_t_ M2_ss_PL_L31[1];
} M2_ss_PL_M2_t_;

typedef struct M2_hud_PL_L01_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd_1b;
    uint8_t     _a_hud_PL_aspd_1b[1];
} M2_hud_PL_L01_M2_hud_PL_t_;

typedef struct M2_hud_PL_L02_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd_2b;
    uint8_t     _a_hud_PL_aspd_2b[2];
} M2_hud_PL_L02_M2_hud_PL_t_;

typedef struct M2_hud_PL_L03_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd_3b;
    uint8_t     _a_hud_PL_aspd_3b[3];
} M2_hud_PL_L03_M2_hud_PL_t_;

typedef struct M2_hud_PL_L04_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
} M2_hud_PL_L04_M2_hud_PL_t_;

typedef struct M2_hud_PL_L05_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd_1b;
    uint8_t     _a_hud_PL_gspd_1b[1];
} M2_hud_PL_L05_M2_hud_PL_t_;

typedef struct M2_hud_PL_L06_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd_2b;
    uint8_t     _a_hud_PL_gspd_2b[2];
} M2_hud_PL_L06_M2_hud_PL_t_;

typedef struct M2_hud_PL_L07_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd_3b;
    uint8_t     _a_hud_PL_gspd_3b[3];
} M2_hud_PL_L07_M2_hud_PL_t_;

typedef struct M2_hud_PL_L08_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
} M2_hud_PL_L08_M2_hud_PL_t_;

typedef struct M2_hud_PL_L09_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt_1b;
    uint8_t     _a_hud_PL_alt_1b[1];
} M2_hud_PL_L09_M2_hud_PL_t_;

typedef struct M2_hud_PL_L10_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt_2b;
    uint8_t     _a_hud_PL_alt_2b[2];
} M2_hud_PL_L10_M2_hud_PL_t_;

typedef struct M2_hud_PL_L11_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt_3b;
    uint8_t     _a_hud_PL_alt_3b[3];
} M2_hud_PL_L11_M2_hud_PL_t_;

typedef struct M2_hud_PL_L12_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
} M2_hud_PL_L12_M2_hud_PL_t_;

typedef struct M2_hud_PL_L13_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb_1b;
    uint8_t     _a_hud_PL_clmb_1b[1];
} M2_hud_PL_L13_M2_hud_PL_t_;

typedef struct M2_hud_PL_L14_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb_2b;
    uint8_t     _a_hud_PL_clmb_2b[2];
} M2_hud_PL_L14_M2_hud_PL_t_;

typedef struct M2_hud_PL_L15_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb_3b;
    uint8_t     _a_hud_PL_clmb_3b[3];
} M2_hud_PL_L15_M2_hud_PL_t_;

typedef struct M2_hud_PL_L16_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
} M2_hud_PL_L16_M2_hud_PL_t_;

typedef struct M2_hud_PL_L17_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
    int8_t      hud_PL_hdng_1b;
} M2_hud_PL_L17_M2_hud_PL_t_;

typedef struct M2_hud_PL_L18_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
    int16_t     hud_PL_hdng;
} M2_hud_PL_L18_M2_hud_PL_t_;

typedef struct M2_hud_PL_L19_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
    int16_t     hud_PL_hdng;
    uint8_t     hud_PL_thtl_1b;
} M2_hud_PL_L19_M2_hud_PL_t_;

typedef struct M2_hud_PL_L20_M2_hud_PL_t_
{
    InfosetBase _base;
    HexBinary   hud_PL_aspd;
    uint8_t     _a_hud_PL_aspd[4];
    HexBinary   hud_PL_gspd;
    uint8_t     _a_hud_PL_gspd[4];
    HexBinary   hud_PL_alt;
    uint8_t     _a_hud_PL_alt[4];
    HexBinary   hud_PL_clmb;
    uint8_t     _a_hud_PL_clmb[4];
    int16_t     hud_PL_hdng;
    uint16_t    hud_PL_thtl;
} M2_hud_PL_L20_M2_hud_PL_t_;

typedef struct M2_hud_PL_M2_t_
{
    InfosetBase _base;
    M2_hud_PL_L01_M2_hud_PL_t_ M2_hud_PL_L01[1];
    M2_hud_PL_L02_M2_hud_PL_t_ M2_hud_PL_L02[1];
    M2_hud_PL_L03_M2_hud_PL_t_ M2_hud_PL_L03[1];
    M2_hud_PL_L04_M2_hud_PL_t_ M2_hud_PL_L04[1];
    M2_hud_PL_L05_M2_hud_PL_t_ M2_hud_PL_L05[1];
    M2_hud_PL_L06_M2_hud_PL_t_ M2_hud_PL_L06[1];
    M2_hud_PL_L07_M2_hud_PL_t_ M2_hud_PL_L07[1];
    M2_hud_PL_L08_M2_hud_PL_t_ M2_hud_PL_L08[1];
    M2_hud_PL_L09_M2_hud_PL_t_ M2_hud_PL_L09[1];
    M2_hud_PL_L10_M2_hud_PL_t_ M2_hud_PL_L10[1];
    M2_hud_PL_L11_M2_hud_PL_t_ M2_hud_PL_L11[1];
    M2_hud_PL_L12_M2_hud_PL_t_ M2_hud_PL_L12[1];
    M2_hud_PL_L13_M2_hud_PL_t_ M2_hud_PL_L13[1];
    M2_hud_PL_L14_M2_hud_PL_t_ M2_hud_PL_L14[1];
    M2_hud_PL_L15_M2_hud_PL_t_ M2_hud_PL_L15[1];
    M2_hud_PL_L16_M2_hud_PL_t_ M2_hud_PL_L16[1];
    M2_hud_PL_L17_M2_hud_PL_t_ M2_hud_PL_L17[1];
    M2_hud_PL_L18_M2_hud_PL_t_ M2_hud_PL_L18[1];
    M2_hud_PL_L19_M2_hud_PL_t_ M2_hud_PL_L19[1];
    M2_hud_PL_L20_M2_hud_PL_t_ M2_hud_PL_L20[1];
} M2_hud_PL_M2_t_;

typedef struct M2_message_t_
{
    InfosetBase _base;
    HexBinary   len;
    uint8_t     _a_len[1];
    HexBinary   inc_flags;
    uint8_t     _a_inc_flags[1];
    HexBinary   comp_flags;
    uint8_t     _a_comp_flags[1];
    HexBinary   seq;
    uint8_t     _a_seq[1];
    HexBinary   sysid;
    uint8_t     _a_sysid[1];
    HexBinary   compid;
    uint8_t     _a_compid[1];
    HexBinary   M2_msgid;
    uint8_t     _a_M2_msgid[3];
    M2_hb_PL_M2_t_ M2_hb_PL[1];
    M2_ss_PL_M2_t_ M2_ss_PL[1];
    M2_hud_PL_M2_t_ M2_hud_PL[1];
    HexBinary   checksum;
    uint8_t     _a_checksum[2];
    HexBinary   signature[1];
    uint8_t     _a_signature[1][13];
} M2_message_t_;

typedef struct message_
{
    InfosetBase _base;
    HexBinary   stx;
    uint8_t     _a_stx[1];
    M1_message_t_ M1[1];
    M2_message_t_ M2[1];
} message_;

#endif // GENERATED_CODE_H
