/*
 * parser.c - Hammer parser for 3 MAVLink message types
 *
 * Ben Cavanagh
 * 10-29-2025
 * Description: 
 *
 */

#include "parser.h"

HParser *init_parser() {
    HParser *mavlink_3_parser;

    /* -------------------------------------------------------------- */
    /* BEGIN HEARTBEAT (0) MESSAGE */
    /* -------------------------------------------------------------- */
    /* HEARTBEAT Top Level Message Structures: v1/us/sg */

    /* v1 HEARTBEAT - payload always 9 bytes */
    H_RULE(v1_hb, h_sequence(stx_v1, v1_SSC, v1_hb_PL, NULL);
    /* us HEARTBEAT - payload always 9 bytes */
    H_RULE(us_hb, h_sequence(stx_us, us_hb_L09, NULL));
    /* sg HEARTBEAT - payload always 9 bytes */
    H_RULE(sg_hb, h_sequence(stx_sg, sg_hb_L09, NULL));

    /* -------------------------------------------------------------- */
    /* HEARTBEAT us/sg Length Options - always 9 bytes */
    H_RULE(us_hb_L09, h_sequence(v2_len_L09, us_ICSSC, v2_hb_ID, v2_hb_PL_L09, NULL));
    H_RULE(sg_hb_L09, h_sequence(v2_len_L09, sg_ICSSC, v2_hb_ID, v2_hb_PL_L09, NULL));

    /* -------------------------------------------------------------- */
    /* HEARTBEAT v1/v2 Payload Options */
    /* v1 HEARTBEAT PAYLOAD - payload always 9 bytes */
    H_RULE(v1_hb_PL, h_sequence(v1_hb_PL_type, v1_hb_PL_auto, v1_hb_PL_base,
                                v1_hb_PL_cust4, v1_hb_sysstat, v1_hb_mavcode, NULL));
    /* v2 HEARTBEAT PAYLOAD - payload always 9 bytes  */
    H_RULE(v2_hb_PL_L09, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base,
                                   v2_hb_PL_cv2t4, v2_hb_sysstat, v2_hb_mavcode, NULL));

    /* -------------------------------------------------------------- */
    /* END HEARTBEAT (0) MESSAGE */
    /* -------------------------------------------------------------- */

    /* -------------------------------------------------------------- */
    /* BEGIN SYS_STATUS (1) MESSAGE */
    /* -------------------------------------------------------------- */
    /* SYS_STATUS Top Level Message Structures: v1/us/sg */

    /* v1 SYS_STATUS - payload always 43 bytes */
    H_RULE(v1_ss, h_sequence(stx_v1, v1_SSC, v1_ss_PL, NULL);
    /* us SYS_STATUS - payload 1-43 bytes */
    H_RULE(us_ss, h_sequence(stx_us, us_ss_L9, NULL));
    /* sg SYS_STATUS - payload 1-43 bytes */
    H_RULE(sg_ss, h_sequence(stx_sg, sg_ss_L9, NULL));

    /* -------------------------------------------------------------- */
    /* SYS_STATUS us/sg Length Options - 1-43 bytes */
    H_RULE(us_ss_L01, h_sequence(v2_len_L01, us_ICSSC, v2_ss_ID, v2_ss_PL_L01, NULL));
    H_RULE(us_ss_L02, h_sequence(v2_len_L02, us_ICSSC, v2_ss_ID, v2_ss_PL_L02, NULL));
    H_RULE(us_ss_L03, h_sequence(v2_len_L03, us_ICSSC, v2_ss_ID, v2_ss_PL_L03, NULL));
    H_RULE(us_ss_L04, h_sequence(v2_len_L04, us_ICSSC, v2_ss_ID, v2_ss_PL_L04, NULL));
    H_RULE(us_ss_L05, h_sequence(v2_len_L05, us_ICSSC, v2_ss_ID, v2_ss_PL_L05, NULL));
    H_RULE(us_ss_L06, h_sequence(v2_len_L06, us_ICSSC, v2_ss_ID, v2_ss_PL_L06, NULL));
    H_RULE(us_ss_L07, h_sequence(v2_len_L07, us_ICSSC, v2_ss_ID, v2_ss_PL_L07, NULL));
    H_RULE(us_ss_L08, h_sequence(v2_len_L08, us_ICSSC, v2_ss_ID, v2_ss_PL_L08, NULL));
    H_RULE(us_ss_L09, h_sequence(v2_len_L09, us_ICSSC, v2_ss_ID, v2_ss_PL_L09, NULL));
    H_RULE(us_ss_L10, h_sequence(v2_len_L10, us_ICSSC, v2_ss_ID, v2_ss_PL_L10, NULL));


    H_RULE(sg_ss_L9, h_sequence(v2_len_L9, sg_ICSSC, v2_ss_ID, v2_ss_PL_L9, NULL));

    /* -------------------------------------------------------------- */
    /* SYS_STATUS v1/v2 Payload Options */
    /* v1 SYS_STATUS PAYLOAD - payload always 43 bytes */
    H_RULE(v1_ss_PL, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                v1_ss_PL_load, v1_ss_vbatt, v1_ss_cbatt,
                                v1_ss_battr, v1_ss_drc, v1_ss_ec,
                                v1_ss_ec1, v1_ss_ec2, v1_ss_ec3, v1_ss_ec4,
                                v1_ss_ocspe, v1_ss_ocsee, v1_ss_ocshe, NULL));

    /* v2 SYS_STATUS PAYLOAD - payload 1-43 bytes  */
    H_RULE(v2_ss_PL_L01, h_sequence(v1_ss_PL_oscp, NULL));
    H_RULE(v2_ss_PL_L02, h_sequence(v1_ss_PL_oscp, NULL));
    H_RULE(v2_ss_PL_L03, h_sequence(v1_ss_PL_oscp, NULL));
    H_RULE(v2_ss_PL_L04, h_sequence(v1_ss_PL_oscp, NULL));
    H_RULE(v2_ss_PL_L05, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, NULL));
    H_RULE(v2_ss_PL_L06, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, NULL));
    H_RULE(v2_ss_PL_L07, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, NULL));
    H_RULE(v2_ss_PL_L08, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, NULL));
    H_RULE(v2_ss_PL_L09, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh, NULL));
    H_RULE(v2_ss_PL_L10, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh, NULL));
    H_RULE(v2_ss_PL_L11, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh, NULL));
    H_RULE(v2_ss_PL_L12, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh, NULL));
    H_RULE(v2_ss_PL_L13, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, NULL));
    H_RULE(v2_ss_PL_L14, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, NULL));
    H_RULE(v2_ss_PL_L15, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, v1_ss_vbatt, NULL));
    H_RULE(v2_ss_PL_L16, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, v1_ss_vbatt, NULL));
    H_RULE(v2_ss_PL_L17, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, v1_ss_vbatt, v1_ss_cbatt, NULL));
    H_RULE(v2_ss_PL_L18, h_sequence(v1_ss_PL_oscp, v1_ss_PL_ocse, v1_ss_PL_ocsh,
                                    v1_ss_PL_load, v1_ss_vbatt, v1_ss_cbatt, NULL));

    /* -------------------------------------------------------------- */
    /* END SYS_STATUS (1) MESSAGE */
    /* -------------------------------------------------------------- */

    /* -------------------------------------------------------------- */
    /* 3 supported message types: */
    /* HEARTBEAT (0), SYS_STATUS (1), VFR_HUD (74) */
    /* -------------------------------------------------------------- */
    H_RULE(msg_v1, h_sequence(h_choice(v1_hb, v1_ss, v1_vfr, NULL),
                              crc, NULL));
    H_RULE(msg_sg, h_sequence(h_choice(sg_hb, sg_ss, sg_vfr, NULL),
                              crc, sig, NULL));
    H_RULE(msg_us, h_sequence(h_choice(us_hb, us_ss, us_vfr, NULL),
                              crc, NULL));

    /* -------------------------------------------------------------- */
    /* Top-level MAVLink structures */
    /* -------------------------------------------------------------- */
    /* Message is either v1, v2 signed, or v2 unsigned */
    H_RULE(msg_v2, h_choice(msg_sg, msg_us, NULL);

    /* Message is either MAVLink v1 or MAVLink v2 */
    H_RULE(message, h_choice(msg_v1, msg_v2, NULL);

    mav_3_parser = h_sequence(message, h_end_p(), NULL);

    return(mav_3_parser);
}

