#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_begin = 1,
  sym_end = 2,
  sym__line = 3,
  sym_source = 4,
  sym__lang = 5,
  sym_tex = 6,
  sym_lhaskell = 7,
  sym_code = 8,
  sym__tex_statement = 9,
  sym__haskell_statement = 10,
  aux_sym_source_repeat1 = 11,
  aux_sym_tex_repeat1 = 12,
  aux_sym_code_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [sym__line] = "_line",
  [sym_source] = "source",
  [sym__lang] = "_lang",
  [sym_tex] = "tex",
  [sym_lhaskell] = "lhaskell",
  [sym_code] = "code",
  [sym__tex_statement] = "_tex_statement",
  [sym__haskell_statement] = "_haskell_statement",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_tex_repeat1] = "tex_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_begin] = sym_begin,
  [sym_end] = sym_end,
  [sym__line] = sym__line,
  [sym_source] = sym_source,
  [sym__lang] = sym__lang,
  [sym_tex] = sym_tex,
  [sym_lhaskell] = sym_lhaskell,
  [sym_code] = sym_code,
  [sym__tex_statement] = sym__tex_statement,
  [sym__haskell_statement] = sym__haskell_statement,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_tex_repeat1] = aux_sym_tex_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__lang] = {
    .visible = false,
    .named = true,
  },
  [sym_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_lhaskell] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__tex_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__haskell_statement] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\\') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\\') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_begin);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_begin] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym__line] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym__lang] = STATE(2),
    [sym_tex] = STATE(2),
    [sym_lhaskell] = STATE(2),
    [sym__tex_statement] = STATE(5),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_tex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_begin] = ACTIONS(5),
    [sym__line] = ACTIONS(7),
  },
  [2] = {
    [sym__lang] = STATE(3),
    [sym_tex] = STATE(3),
    [sym_lhaskell] = STATE(3),
    [sym__tex_statement] = STATE(5),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_tex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_begin] = ACTIONS(5),
    [sym__line] = ACTIONS(7),
  },
  [3] = {
    [sym__lang] = STATE(3),
    [sym_tex] = STATE(3),
    [sym_lhaskell] = STATE(3),
    [sym__tex_statement] = STATE(5),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_tex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_begin] = ACTIONS(13),
    [sym__line] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      sym_end,
    ACTIONS(21), 1,
      sym__line,
    STATE(12), 1,
      sym_code,
    STATE(7), 2,
      sym__haskell_statement,
      aux_sym_code_repeat1,
  [14] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_begin,
    ACTIONS(27), 1,
      sym__line,
    STATE(6), 2,
      sym__tex_statement,
      aux_sym_tex_repeat1,
  [28] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_begin,
    ACTIONS(33), 1,
      sym__line,
    STATE(6), 2,
      sym__tex_statement,
      aux_sym_tex_repeat1,
  [42] = 3,
    ACTIONS(36), 1,
      sym_end,
    ACTIONS(38), 1,
      sym__line,
    STATE(8), 2,
      sym__haskell_statement,
      aux_sym_code_repeat1,
  [53] = 3,
    ACTIONS(40), 1,
      sym_end,
    ACTIONS(42), 1,
      sym__line,
    STATE(8), 2,
      sym__haskell_statement,
      aux_sym_code_repeat1,
  [64] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym_begin,
      sym__line,
  [72] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      sym_begin,
      sym__line,
  [80] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(55), 1,
      sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 84,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tex_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tex_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tex_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhaskell, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lhaskell, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhaskell, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lhaskell, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lhaskell(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
