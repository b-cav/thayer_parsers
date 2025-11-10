/*
 * parser.c - Hammer parser SPP headers
 *
 * Ben Cavanagh
 * 10-29-2025
 * Description: Hammer parser for Space Packet Protocol headers
 *
 */

#include "parser.h"

HParser *init_parser() {
    HParser *spp_hdr_parser;

    /* ------------------------------------------------------------- */
    /* Top-level SPP header fields */
    /* ------------------------------------------------------------- */
    H_RULE(version, h_bits(3, false));
    H_RULE(type, h_bits(3, false));
    H_RULE(shf, h_bits(3, false));
    H_RULE(apid, h_bits(3, false));
    H_RULE(seqf, h_bits(3, false));
    H_RULE(seqc, h_bits(3, false));
    H_RULE(len, h_bits(3, false));

    /* ------------------------------------------------------------- */
    /* Top-level SPP header strucrure */
    /* ------------------------------------------------------------- */
    H_RULE(packet, h_sequence(version, type, shf, apid, seqf, seqc, len, NULL));

    spp_hdr_parser = h_sequence(packet, h_end_p(), NULL);

    return(spp_hdr_parser);
}

