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

    /* numbers */
    H_RULE(dot, h_ch('.'));
    H_RULE(minus, h_ch('-'));
    H_RULE(plus, h_ch('+'));
    H_RULE(zero, h_ch('0'));
    H_RULE(digit, h_ch_range(0x30,0x39));
    H_RULE(onenine, h_ch_range(0x31,0x39));
    H_RULE(exp, h_choice(h_ch('E'), h_ch('e'), NULL));
    H_RULE(jnum, h_sequence(h_optional(minus),
                            h_choice(zero,h_sequence(onenine,h_many(digit),NULL), NULL),
                            h_optional(h_sequence(dot,h_many1(digit),NULL)),
                            h_optional(h_sequence(exp,h_optional(h_choice(plus,minus,NULL)),h_many1(digit),NULL)),
                            NULL));

    /* v2 HEARTBEAT Payloads */
    H_RULE(v2_hb_PL_L1, v2_hb_PL_type);
    H_RULE(v2_hb_PL_L2, h_sequence(v2_hb_PL_type, v2_hb_PL_auto));
    H_RULE(v2_hb_PL_L3, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base));
    H_RULE(v2_hb_PL_L4, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t1));
    H_RULE(v2_hb_PL_L5, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t2));
    H_RULE(v2_hb_PL_L6, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t3));
    H_RULE(v2_hb_PL_L7, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t4));
    H_RULE(v2_hb_PL_L8, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t4, v2_hb_sysstat));
    H_RULE(v2_hb_PL_L9, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base, v2_hb_PL_cv2t4, v2_hb_sysstat, v2_hb_mavcode));

    /* SYS_STATUS (1) */
    /* v1 SYS_STATUS - always 43 bytes */
    H_RULE(v1_hb, h_sequence(stx_v1, v1_SSC, v1_ss_PL, NULL);
    /* us SYS_STATUS - between 1 and 43 bytes */
    H_RULE(us_hb, h_sequence(stx_us, us_hb_L9, NULL));
    H_RULE(us_hb_L9, h_sequence(v2_len_L9, us_ICSSC, v2_hb_ID, v2_hb_PL_L9, NULL));
    /* sg SYS_STATUS - between 1 and 43 bytes */
    H_RULE(sg_hb, h_sequence(stx_sg, sg_hb_L9, NULL));
    H_RULE(sg_hb_L9, h_sequence(v2_len_L9, sg_ICSSC, v2_hb_ID, v2_hb_PL_L9, NULL));

    /* v1 SYS_STATUS PAYLOAD */
    H_RULE(v1_hb_PL, h_sequence(v1_hb_PL_type, v1_hb_PL_auto, v1_hb_PL_base,
                                v1_hb_PL_cust4, v1_hb_sysstat, v1_hb_mavcode, NULL));
    /* v2 SYS_STATUS PAYLOAD */
    H_RULE(v2_hb_PL_L9, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base,
                                   v2_hb_PL_cv2t4, v2_hb_sysstat, v2_hb_mavcode, NULL));

    /* HEARTBEAT (0) MESSAGE */
    /* v1 HEARTBEAT - always 9 bytes */
    H_RULE(v1_hb, h_sequence(stx_v1, v1_SSC, v1_hb_PL, NULL);
    /* us HEARTBEAT - always 9 bytes */
    H_RULE(us_hb, h_sequence(stx_us, us_hb_L9, NULL));
    H_RULE(us_hb_L9, h_sequence(v2_len_L9, us_ICSSC, v2_hb_ID, v2_hb_PL_L9, NULL));
    /* sg HEARTBEAT - always 9 bytes */
    H_RULE(sg_hb, h_sequence(stx_sg, sg_hb_L9, NULL));
    H_RULE(sg_hb_L9, h_sequence(v2_len_L9, sg_ICSSC, v2_hb_ID, v2_hb_PL_L9, NULL));
    /* v1 HEARTBEAT PAYLOAD */
    H_RULE(v1_hb_PL, h_sequence(v1_hb_PL_type, v1_hb_PL_auto, v1_hb_PL_base,
                                v1_hb_PL_cust4, v1_hb_sysstat, v1_hb_mavcode, NULL));
    /* v2 HEARTBEAT PAYLOAD */
    H_RULE(v2_hb_PL_L9, h_sequence(v2_hb_PL_type, v2_hb_PL_auto, v2_hb_PL_base,
                                   v2_hb_PL_cv2t4, v2_hb_sysstat, v2_hb_mavcode, NULL));

    /* 3 supported message types: */
    /* HEARTBEAT (0), SYS_STATUS (1), VFR_HUD (74) */
    H_RULE(msg_v1, h_sequence(h_choice(v1_hb, v1_ss, v1_vfr, NULL),
                              crc, NULL));
    H_RULE(msg_sg, h_sequence(h_choice(sg_hb, sg_ss, sg_vfr, NULL),
                              crc, sig, NULL));
    H_RULE(msg_us, h_sequence(h_choice(us_hb, us_ss, us_vfr, NULL),
                              crc, NULL));

    /* Message is either v1, v2 signed, or v2 unsigned */
    H_RULE(msg_v2, h_choice(msg_sg, msg_us, NULL);

    /* Message is either MAVLink v1 or MAVLink v2 */
    H_RULE(message, h_choice(msg_v1, msg_v2, NULL);

    mav_3_parser = h_sequence(message, h_end_p(), NULL);

    return(mav_3_parser);
}

