#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_game = 1,
  anon_sym_COLON = 2,
  anon_sym_DASH_GT = 3,
  anon_sym_type = 4,
  anon_sym_EQ = 5,
  sym_comment = 6,
  anon_sym_Input = 7,
  anon_sym_Bool = 8,
  anon_sym_Int = 9,
  anon_sym_Board = 10,
  anon_sym_Player = 11,
  anon_sym_Array = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_of = 16,
  sym_identifier = 17,
  sym_upperIdentifier = 18,
  sym_number = 19,
  sym_bool = 20,
  anon_sym_let = 21,
  anon_sym_in = 22,
  anon_sym_while = 23,
  anon_sym_do = 24,
  anon_sym_if = 25,
  anon_sym_then = 26,
  anon_sym_else = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_SLASH_EQ = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  sym_source_file = 38,
  sym__definition = 39,
  sym_game_definition = 40,
  sym_function_definition = 41,
  sym_type_definition = 42,
  sym__type = 43,
  sym_builtin_type = 44,
  sym_user_defined_type = 45,
  sym_array_type = 46,
  sym_pattern = 47,
  sym_parameter_list = 48,
  sym__expression = 49,
  sym_let_expr = 50,
  sym_while_do = 51,
  sym_if_then_else = 52,
  sym_binary_expr = 53,
  sym_unary_expr = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_function_definition_repeat1 = 56,
  aux_sym_parameter_list_repeat1 = 57,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_game] = "game",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [anon_sym_Input] = "Input",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Int] = "Int",
  [anon_sym_Board] = "Board",
  [anon_sym_Player] = "Player",
  [anon_sym_Array] = "Array",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_of] = "of",
  [sym_identifier] = "identifier",
  [sym_upperIdentifier] = "upperIdentifier",
  [sym_number] = "number",
  [sym_bool] = "bool",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_game_definition] = "game_definition",
  [sym_function_definition] = "function_definition",
  [sym_type_definition] = "type_definition",
  [sym__type] = "_type",
  [sym_builtin_type] = "builtin_type",
  [sym_user_defined_type] = "user_defined_type",
  [sym_array_type] = "array_type",
  [sym_pattern] = "pattern",
  [sym_parameter_list] = "parameter_list",
  [sym__expression] = "_expression",
  [sym_let_expr] = "let_expr",
  [sym_while_do] = "while_do",
  [sym_if_then_else] = "if_then_else",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [anon_sym_Input] = anon_sym_Input,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Board] = anon_sym_Board,
  [anon_sym_Player] = anon_sym_Player,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_of] = anon_sym_of,
  [sym_identifier] = sym_identifier,
  [sym_upperIdentifier] = sym_upperIdentifier,
  [sym_number] = sym_number,
  [sym_bool] = sym_bool,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_game_definition] = sym_game_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_type_definition] = sym_type_definition,
  [sym__type] = sym__type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_array_type] = sym_array_type,
  [sym_pattern] = sym_pattern,
  [sym_parameter_list] = sym_parameter_list,
  [sym__expression] = sym__expression,
  [sym_let_expr] = sym_let_expr,
  [sym_while_do] = sym_while_do,
  [sym_if_then_else] = sym_if_then_else,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_game] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Board] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Player] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_upperIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_game_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_let_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_while_do] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_else] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'B') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'B') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_game);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Board);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Player);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'd') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'y') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'y') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_Input] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Board] = ACTIONS(1),
    [anon_sym_Player] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_upperIdentifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym__definition] = STATE(43),
    [sym_game_definition] = STATE(43),
    [sym_function_definition] = STATE(43),
    [sym_type_definition] = STATE(43),
    [sym_let_expr] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_game] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
    ACTIONS(19), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [33] = 8,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(33), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [66] = 8,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(37), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [99] = 2,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(41), 8,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
  [120] = 4,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
    ACTIONS(41), 7,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
  [145] = 6,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(41), 6,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_GT,
      anon_sym_LT,
  [174] = 4,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
    ACTIONS(45), 7,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
  [199] = 8,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(49), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [232] = 8,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(53), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [265] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(51), 4,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [292] = 4,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 10,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [315] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 4,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [342] = 4,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 10,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [365] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 4,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [392] = 5,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 8,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [417] = 2,
    ACTIONS(41), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(39), 11,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [436] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(67), 2,
      sym_number,
      sym_bool,
    STATE(16), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [464] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 2,
      sym_number,
      sym_bool,
    STATE(12), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [492] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 2,
      sym_number,
      sym_bool,
    STATE(50), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [520] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 2,
      sym_number,
      sym_bool,
    STATE(44), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [548] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 2,
      sym_number,
      sym_bool,
    STATE(56), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [576] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 2,
      sym_number,
      sym_bool,
    STATE(15), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [604] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 2,
      sym_number,
      sym_bool,
    STATE(47), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [632] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 2,
      sym_number,
      sym_bool,
    STATE(45), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [660] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 2,
      sym_number,
      sym_bool,
    STATE(14), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [688] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 2,
      sym_number,
      sym_bool,
    STATE(55), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [716] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 2,
      sym_number,
      sym_bool,
    STATE(54), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [744] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(119), 2,
      sym_number,
      sym_bool,
    STATE(3), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [772] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 2,
      sym_number,
      sym_bool,
    STATE(2), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [800] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 2,
      sym_number,
      sym_bool,
    STATE(9), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [828] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 2,
      sym_number,
      sym_bool,
    STATE(4), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [856] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 2,
      sym_number,
      sym_bool,
    STATE(8), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [884] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_number,
      sym_bool,
    STATE(13), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [912] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 2,
      sym_number,
      sym_bool,
    STATE(10), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [940] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 2,
      sym_number,
      sym_bool,
    STATE(5), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [968] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 2,
      sym_number,
      sym_bool,
    STATE(51), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [996] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 2,
      sym_number,
      sym_bool,
    STATE(17), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [1024] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 2,
      sym_number,
      sym_bool,
    STATE(6), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [1052] = 7,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 2,
      sym_number,
      sym_bool,
    STATE(7), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [1080] = 7,
    ACTIONS(69), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_while,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 2,
      sym_number,
      sym_bool,
    STATE(11), 6,
      sym__expression,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [1108] = 7,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_game,
    ACTIONS(180), 1,
      anon_sym_type,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_let,
    STATE(42), 6,
      sym__definition,
      sym_game_definition,
      sym_function_definition,
      sym_type_definition,
      sym_let_expr,
      aux_sym_source_file_repeat1,
  [1135] = 7,
    ACTIONS(5), 1,
      anon_sym_game,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_comment,
    STATE(42), 6,
      sym__definition,
      sym_game_definition,
      sym_function_definition,
      sym_type_definition,
      sym_let_expr,
      aux_sym_source_file_repeat1,
  [1162] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_in,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1186] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(198), 1,
      anon_sym_then,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1210] = 5,
    ACTIONS(202), 1,
      anon_sym_Array,
    ACTIONS(204), 1,
      sym_upperIdentifier,
    STATE(71), 1,
      sym_array_type,
    STATE(65), 3,
      sym__type,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(200), 5,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Board,
      anon_sym_Player,
  [1232] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_do,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1256] = 5,
    ACTIONS(210), 1,
      anon_sym_Array,
    ACTIONS(212), 1,
      sym_upperIdentifier,
    STATE(60), 1,
      sym_array_type,
    STATE(62), 3,
      sym__type,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(208), 5,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Board,
      anon_sym_Player,
  [1278] = 5,
    ACTIONS(210), 1,
      anon_sym_Array,
    ACTIONS(212), 1,
      sym_upperIdentifier,
    STATE(60), 1,
      sym_array_type,
    STATE(63), 3,
      sym__type,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(208), 5,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Board,
      anon_sym_Player,
  [1300] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(214), 1,
      anon_sym_in,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1324] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(216), 1,
      anon_sym_do,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1348] = 5,
    ACTIONS(202), 1,
      anon_sym_Array,
    ACTIONS(204), 1,
      sym_upperIdentifier,
    STATE(71), 1,
      sym_array_type,
    STATE(73), 3,
      sym__type,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(200), 5,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Board,
      anon_sym_Player,
  [1370] = 5,
    ACTIONS(202), 1,
      anon_sym_Array,
    ACTIONS(204), 1,
      sym_upperIdentifier,
    STATE(71), 1,
      sym_array_type,
    STATE(69), 3,
      sym__type,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(200), 5,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Board,
      anon_sym_Player,
  [1392] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_else,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1416] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(220), 1,
      anon_sym_then,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1440] = 6,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      anon_sym_else,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1464] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(57), 2,
      sym_pattern,
      aux_sym_function_definition_repeat1,
    ACTIONS(226), 3,
      anon_sym_game,
      anon_sym_type,
      anon_sym_let,
  [1481] = 3,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(57), 2,
      sym_pattern,
      aux_sym_function_definition_repeat1,
    ACTIONS(233), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1496] = 3,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(57), 2,
      sym_pattern,
      aux_sym_function_definition_repeat1,
    ACTIONS(237), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1511] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(241), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1522] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1533] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1544] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1555] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1566] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(59), 2,
      sym_pattern,
      aux_sym_function_definition_repeat1,
  [1577] = 3,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
  [1587] = 3,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
  [1597] = 3,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_parameter_list,
  [1607] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(58), 2,
      sym_pattern,
      aux_sym_function_definition_repeat1,
  [1615] = 2,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [1622] = 1,
    ACTIONS(239), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1627] = 1,
    ACTIONS(243), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1632] = 1,
    ACTIONS(251), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1637] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1641] = 1,
    ACTIONS(280), 1,
      sym_number,
  [1645] = 1,
    ACTIONS(282), 1,
      anon_sym_of,
  [1649] = 1,
    ACTIONS(284), 1,
      sym_identifier,
  [1653] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [1657] = 1,
    ACTIONS(288), 1,
      sym_upperIdentifier,
  [1661] = 1,
    ACTIONS(290), 1,
      anon_sym_EQ,
  [1665] = 1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [1669] = 1,
    ACTIONS(294), 1,
      anon_sym_EQ,
  [1673] = 1,
    ACTIONS(296), 1,
      sym_number,
  [1677] = 1,
    ACTIONS(298), 1,
      anon_sym_of,
  [1681] = 1,
    ACTIONS(300), 1,
      sym_identifier,
  [1685] = 1,
    ACTIONS(302), 1,
      sym_upperIdentifier,
  [1689] = 1,
    ACTIONS(304), 1,
      anon_sym_EQ,
  [1693] = 1,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [1697] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ,
  [1701] = 1,
    ACTIONS(310), 1,
      anon_sym_EQ,
  [1705] = 1,
    ACTIONS(312), 1,
      sym_number,
  [1709] = 1,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
  [1713] = 1,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
  [1717] = 1,
    ACTIONS(318), 1,
      anon_sym_COMMA,
  [1721] = 1,
    ACTIONS(320), 1,
      sym_number,
  [1725] = 1,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 292,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 342,
  [SMALL_STATE(15)] = 365,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 417,
  [SMALL_STATE(18)] = 436,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 520,
  [SMALL_STATE(22)] = 548,
  [SMALL_STATE(23)] = 576,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 660,
  [SMALL_STATE(27)] = 688,
  [SMALL_STATE(28)] = 716,
  [SMALL_STATE(29)] = 744,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 800,
  [SMALL_STATE(32)] = 828,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 884,
  [SMALL_STATE(35)] = 912,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 968,
  [SMALL_STATE(38)] = 996,
  [SMALL_STATE(39)] = 1024,
  [SMALL_STATE(40)] = 1052,
  [SMALL_STATE(41)] = 1080,
  [SMALL_STATE(42)] = 1108,
  [SMALL_STATE(43)] = 1135,
  [SMALL_STATE(44)] = 1162,
  [SMALL_STATE(45)] = 1186,
  [SMALL_STATE(46)] = 1210,
  [SMALL_STATE(47)] = 1232,
  [SMALL_STATE(48)] = 1256,
  [SMALL_STATE(49)] = 1278,
  [SMALL_STATE(50)] = 1300,
  [SMALL_STATE(51)] = 1324,
  [SMALL_STATE(52)] = 1348,
  [SMALL_STATE(53)] = 1370,
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1416,
  [SMALL_STATE(56)] = 1440,
  [SMALL_STATE(57)] = 1464,
  [SMALL_STATE(58)] = 1481,
  [SMALL_STATE(59)] = 1496,
  [SMALL_STATE(60)] = 1511,
  [SMALL_STATE(61)] = 1522,
  [SMALL_STATE(62)] = 1533,
  [SMALL_STATE(63)] = 1544,
  [SMALL_STATE(64)] = 1555,
  [SMALL_STATE(65)] = 1566,
  [SMALL_STATE(66)] = 1577,
  [SMALL_STATE(67)] = 1587,
  [SMALL_STATE(68)] = 1597,
  [SMALL_STATE(69)] = 1607,
  [SMALL_STATE(70)] = 1615,
  [SMALL_STATE(71)] = 1622,
  [SMALL_STATE(72)] = 1627,
  [SMALL_STATE(73)] = 1632,
  [SMALL_STATE(74)] = 1637,
  [SMALL_STATE(75)] = 1641,
  [SMALL_STATE(76)] = 1645,
  [SMALL_STATE(77)] = 1649,
  [SMALL_STATE(78)] = 1653,
  [SMALL_STATE(79)] = 1657,
  [SMALL_STATE(80)] = 1661,
  [SMALL_STATE(81)] = 1665,
  [SMALL_STATE(82)] = 1669,
  [SMALL_STATE(83)] = 1673,
  [SMALL_STATE(84)] = 1677,
  [SMALL_STATE(85)] = 1681,
  [SMALL_STATE(86)] = 1685,
  [SMALL_STATE(87)] = 1689,
  [SMALL_STATE(88)] = 1693,
  [SMALL_STATE(89)] = 1697,
  [SMALL_STATE(90)] = 1701,
  [SMALL_STATE(91)] = 1705,
  [SMALL_STATE(92)] = 1709,
  [SMALL_STATE(93)] = 1713,
  [SMALL_STATE(94)] = 1717,
  [SMALL_STATE(95)] = 1721,
  [SMALL_STATE(96)] = 1725,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_do, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_do, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 6),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expr, 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(68),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 8),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_definition, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_BoGL(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
