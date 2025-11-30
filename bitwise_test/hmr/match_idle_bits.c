/*
 * match_idle_bits.c - Hammer test parser
 *
 * Ben Cavanagh
 * 10-29-2025
 * Description: Hammer parser to test bit-wise parsing
 *
 */

#include "parser.h"

// Protos
bool match_x00(HParseResult *p, void *user_data);
bool match_x01(HParseResult *p, void *user_data);

HParser *init_parser() {
    HParser *bit_parser;

    /* Parse 1-bit field */
    H_RULE(one, h_attr_bool(h_bits(1, false), match_x01, NULL));
    H_RULE(zero, h_attr_bool(h_bits(1, false), match_x00, NULL));

    bit_parser = h_sequence(one,zero,one,zero,one,zero,one,zero, h_end_p(), NULL);

    return(bit_parser);
}

bool match_x00(HParseResult *p, void *user_data) {
    if (TT_UINT != p->ast->token_type) return false;
    return(0 == p->ast->uint);
}
bool match_x01(HParseResult *p, void *user_data) {
    if (TT_UINT != p->ast->token_type) return false;
    return(1 == p->ast->uint);
}


