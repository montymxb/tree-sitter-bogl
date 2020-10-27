#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_identifier = 1,
  anon_sym_game = 2,
  anon_sym_COLON = 3,
  anon_sym_Board = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_type = 6,
  anon_sym_EQ = 7,
  anon_sym_DASH_DASH = 8,
  aux_sym_comment_token1 = 9,
  anon_sym_Input = 10,
  anon_sym_Bool = 11,
  anon_sym_Int = 12,
  anon_sym_Player = 13,
  anon_sym_Array = 14,
  anon_sym_LPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_RPAREN = 17,
  anon_sym_of = 18,
  anon_sym_BANG = 19,
  sym_upperIdentifier = 20,
  sym_number = 21,
  sym_bool = 22,
  anon_sym_let = 23,
  anon_sym_in = 24,
  anon_sym_while = 25,
  anon_sym_do = 26,
  anon_sym_if = 27,
  anon_sym_then = 28,
  anon_sym_else = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_LT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_SLASH_EQ = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_game_definition = 43,
  sym_board_definition = 44,
  sym_function_definition = 45,
  sym_type_definition = 46,
  sym_comment = 47,
  sym__type = 48,
  sym_builtin_type = 49,
  sym_user_defined_type = 50,
  sym_array_type = 51,
  sym_pattern = 52,
  sym_board_pattern = 53,
  sym_position_list = 54,
  sym_parameter_list = 55,
  sym__expression = 56,
  sym_let_expr = 57,
  sym_while_do = 58,
  sym_if_then_else = 59,
  sym_binary_expr = 60,
  sym_unary_expr = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_board_definition_repeat1 = 63,
  aux_sym_parameter_list_repeat1 = 64,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_game] = "game",
  [anon_sym_COLON] = ":",
  [anon_sym_Board] = "Board",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_Input] = "Input",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Int] = "Int",
  [anon_sym_Player] = "Player",
  [anon_sym_Array] = "Array",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_of] = "of",
  [anon_sym_BANG] = "!",
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
  [anon_sym_PERCENT] = "%",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_game_definition] = "game_definition",
  [sym_board_definition] = "board_definition",
  [sym_function_definition] = "function_definition",
  [sym_type_definition] = "type_definition",
  [sym_comment] = "comment",
  [sym__type] = "_type",
  [sym_builtin_type] = "builtin_type",
  [sym_user_defined_type] = "user_defined_type",
  [sym_array_type] = "array_type",
  [sym_pattern] = "pattern",
  [sym_board_pattern] = "board_pattern",
  [sym_position_list] = "position_list",
  [sym_parameter_list] = "parameter_list",
  [sym__expression] = "_expression",
  [sym_let_expr] = "let_expr",
  [sym_while_do] = "while_do",
  [sym_if_then_else] = "if_then_else",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_board_definition_repeat1] = "board_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Board] = anon_sym_Board,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_Input] = anon_sym_Input,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Player] = anon_sym_Player,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_game_definition] = sym_game_definition,
  [sym_board_definition] = sym_board_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_comment] = sym_comment,
  [sym__type] = sym__type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_array_type] = sym_array_type,
  [sym_pattern] = sym_pattern,
  [sym_board_pattern] = sym_board_pattern,
  [sym_position_list] = sym_position_list,
  [sym_parameter_list] = sym_parameter_list,
  [sym__expression] = sym__expression,
  [sym_let_expr] = sym_let_expr,
  [sym_while_do] = sym_while_do,
  [sym_if_then_else] = sym_if_then_else,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_board_definition_repeat1] = aux_sym_board_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_Board] = {
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PERCENT] = {
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
  [sym_board_definition] = {
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
  [sym_comment] = {
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
  [sym_board_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_position_list] = {
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
  [aux_sym_board_definition_repeat1] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'B') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'B') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_Board);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Input);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_Player);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'd') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'u') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'u') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'y') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (lookahead == 'y') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_upperIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'g') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 20},
  [96] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Board] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_Input] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Player] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_PERCENT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym__definition] = STATE(42),
    [sym_game_definition] = STATE(44),
    [sym_board_definition] = STATE(44),
    [sym_function_definition] = STATE(44),
    [sym_type_definition] = STATE(44),
    [sym_comment] = STATE(1),
    [sym_let_expr] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_game] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(2), 1,
      sym_comment,
    ACTIONS(15), 8,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(17), 12,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
  [31] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    STATE(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(21), 8,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
  [74] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(37), 8,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
  [117] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(5), 1,
      sym_comment,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(41), 12,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
  [148] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    STATE(6), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
    ACTIONS(41), 11,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
  [183] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(41), 10,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT,
      anon_sym_LT,
  [222] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(45), 8,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
  [265] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PLUS,
    ACTIONS(49), 11,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
      anon_sym_in,
      anon_sym_do,
      anon_sym_then,
      anon_sym_else,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
  [300] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(53), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [339] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(57), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [378] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(61), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [417] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__expression,
    STATE(13), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [453] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(3), 1,
      sym__expression,
    STATE(14), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [489] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym__expression,
    STATE(15), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [525] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__expression,
    STATE(16), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [561] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_comment,
    STATE(28), 1,
      sym__expression,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [597] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_comment,
    STATE(27), 1,
      sym__expression,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [633] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym__expression,
    STATE(19), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [669] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym__expression,
    STATE(20), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [705] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__expression,
    STATE(21), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [741] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__expression,
    STATE(22), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [777] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym__expression,
    STATE(23), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [813] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_comment,
    STATE(32), 1,
      sym__expression,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [849] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym_comment,
    STATE(31), 1,
      sym__expression,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [885] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__expression,
    STATE(26), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_bool,
    STATE(2), 5,
      sym_let_expr,
      sym_while_do,
      sym_if_then_else,
      sym_binary_expr,
      sym_unary_expr,
  [921] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_do,
    STATE(27), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [954] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_then,
    STATE(28), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [987] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_game,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym__definition,
    STATE(44), 5,
      sym_game_definition,
      sym_board_definition,
      sym_function_definition,
      sym_type_definition,
      sym_let_expr,
  [1022] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_game,
    ACTIONS(87), 1,
      anon_sym_type,
    ACTIONS(90), 1,
      anon_sym_let,
    STATE(42), 1,
      sym__definition,
    STATE(30), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(44), 5,
      sym_game_definition,
      sym_board_definition,
      sym_function_definition,
      sym_type_definition,
      sym_let_expr,
  [1055] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(93), 1,
      anon_sym_in,
    STATE(31), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1088] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_else,
    STATE(32), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_EQ,
  [1121] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(99), 1,
      anon_sym_Array,
    ACTIONS(101), 1,
      sym_upperIdentifier,
    STATE(33), 1,
      sym_comment,
    STATE(59), 1,
      sym_array_type,
    STATE(63), 1,
      sym__type,
    STATE(61), 2,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(97), 5,
      anon_sym_Board,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Player,
  [1151] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(99), 1,
      anon_sym_Array,
    ACTIONS(101), 1,
      sym_upperIdentifier,
    STATE(34), 1,
      sym_comment,
    STATE(58), 1,
      sym__type,
    STATE(59), 1,
      sym_array_type,
    STATE(61), 2,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(97), 5,
      anon_sym_Board,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Player,
  [1181] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(99), 1,
      anon_sym_Array,
    ACTIONS(101), 1,
      sym_upperIdentifier,
    ACTIONS(103), 1,
      anon_sym_Board,
    STATE(35), 1,
      sym_comment,
    STATE(55), 1,
      sym__type,
    STATE(59), 1,
      sym_array_type,
    STATE(61), 2,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(97), 4,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Player,
  [1213] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_Array,
    ACTIONS(109), 1,
      sym_upperIdentifier,
    STATE(36), 1,
      sym_comment,
    STATE(40), 1,
      sym_array_type,
    STATE(41), 1,
      sym__type,
    STATE(50), 2,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(105), 5,
      anon_sym_Board,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Player,
  [1243] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(107), 1,
      anon_sym_Array,
    ACTIONS(109), 1,
      sym_upperIdentifier,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      sym_array_type,
    STATE(47), 1,
      sym__type,
    STATE(50), 2,
      sym_builtin_type,
      sym_user_defined_type,
    ACTIONS(105), 5,
      anon_sym_Board,
      anon_sym_Input,
      anon_sym_Bool,
      anon_sym_Int,
      anon_sym_Player,
  [1273] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_board_definition_repeat1,
    STATE(46), 1,
      sym_board_pattern,
    ACTIONS(113), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1295] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(46), 1,
      sym_board_pattern,
    STATE(39), 2,
      sym_comment,
      aux_sym_board_definition_repeat1,
    ACTIONS(120), 3,
      anon_sym_game,
      anon_sym_type,
      anon_sym_let,
  [1317] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_comment,
    ACTIONS(124), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1333] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_comment,
    ACTIONS(128), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1349] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1365] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1381] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1397] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_comment,
    ACTIONS(144), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1413] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1429] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1445] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1461] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_comment,
    ACTIONS(160), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1477] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
    ACTIONS(164), 4,
      anon_sym_game,
      anon_sym_type,
      sym_identifier,
      anon_sym_let,
  [1493] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_board_definition_repeat1,
    STATE(46), 1,
      sym_board_pattern,
    STATE(51), 1,
      sym_comment,
  [1512] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_parameter_list_repeat1,
  [1528] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(53), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [1542] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_comment,
    STATE(81), 1,
      sym_parameter_list,
  [1558] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym_pattern,
    STATE(55), 1,
      sym_comment,
  [1574] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_parameter_list_repeat1,
    STATE(56), 1,
      sym_comment,
  [1590] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_identifier,
      sym_number,
  [1601] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(49), 1,
      sym_pattern,
    STATE(58), 1,
      sym_comment,
  [1614] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1625] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1636] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1647] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym_identifier,
      sym_number,
  [1658] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [1669] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_comment,
    STATE(68), 1,
      sym_position_list,
  [1682] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1693] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_comment,
  [1703] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_comment,
  [1713] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym_comment,
  [1723] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1733] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(201), 1,
      anon_sym_EQ,
    STATE(70), 1,
      sym_comment,
  [1743] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [1753] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
  [1763] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_comment,
  [1773] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(209), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_comment,
  [1783] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(211), 1,
      sym_upperIdentifier,
    STATE(75), 1,
      sym_comment,
  [1793] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(213), 1,
      anon_sym_of,
    STATE(76), 1,
      sym_comment,
  [1803] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_comment,
  [1813] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_comment,
  [1823] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_comment,
  [1833] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_comment,
  [1843] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(223), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_comment,
  [1853] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(225), 1,
      sym_number,
    STATE(82), 1,
      sym_comment,
  [1863] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(227), 1,
      sym_upperIdentifier,
    STATE(83), 1,
      sym_comment,
  [1873] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(229), 1,
      anon_sym_EQ,
    STATE(84), 1,
      sym_comment,
  [1883] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_comment,
  [1893] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(233), 1,
      anon_sym_BANG,
    STATE(86), 1,
      sym_comment,
  [1903] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(235), 1,
      sym_number,
    STATE(87), 1,
      sym_comment,
  [1913] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(237), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym_comment,
  [1923] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_comment,
  [1933] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(241), 1,
      sym_number,
    STATE(90), 1,
      sym_comment,
  [1943] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(243), 1,
      anon_sym_of,
    STATE(91), 1,
      sym_comment,
  [1953] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_comment,
  [1963] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(247), 1,
      sym_number,
    STATE(93), 1,
      sym_comment,
  [1973] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
  [1983] = 1,
    ACTIONS(251), 1,
      aux_sym_comment_token1,
  [1987] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 453,
  [SMALL_STATE(15)] = 489,
  [SMALL_STATE(16)] = 525,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 597,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 669,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 777,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 885,
  [SMALL_STATE(27)] = 921,
  [SMALL_STATE(28)] = 954,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1055,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1151,
  [SMALL_STATE(35)] = 1181,
  [SMALL_STATE(36)] = 1213,
  [SMALL_STATE(37)] = 1243,
  [SMALL_STATE(38)] = 1273,
  [SMALL_STATE(39)] = 1295,
  [SMALL_STATE(40)] = 1317,
  [SMALL_STATE(41)] = 1333,
  [SMALL_STATE(42)] = 1349,
  [SMALL_STATE(43)] = 1365,
  [SMALL_STATE(44)] = 1381,
  [SMALL_STATE(45)] = 1397,
  [SMALL_STATE(46)] = 1413,
  [SMALL_STATE(47)] = 1429,
  [SMALL_STATE(48)] = 1445,
  [SMALL_STATE(49)] = 1461,
  [SMALL_STATE(50)] = 1477,
  [SMALL_STATE(51)] = 1493,
  [SMALL_STATE(52)] = 1512,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1542,
  [SMALL_STATE(55)] = 1558,
  [SMALL_STATE(56)] = 1574,
  [SMALL_STATE(57)] = 1590,
  [SMALL_STATE(58)] = 1601,
  [SMALL_STATE(59)] = 1614,
  [SMALL_STATE(60)] = 1625,
  [SMALL_STATE(61)] = 1636,
  [SMALL_STATE(62)] = 1647,
  [SMALL_STATE(63)] = 1658,
  [SMALL_STATE(64)] = 1669,
  [SMALL_STATE(65)] = 1682,
  [SMALL_STATE(66)] = 1693,
  [SMALL_STATE(67)] = 1703,
  [SMALL_STATE(68)] = 1713,
  [SMALL_STATE(69)] = 1723,
  [SMALL_STATE(70)] = 1733,
  [SMALL_STATE(71)] = 1743,
  [SMALL_STATE(72)] = 1753,
  [SMALL_STATE(73)] = 1763,
  [SMALL_STATE(74)] = 1773,
  [SMALL_STATE(75)] = 1783,
  [SMALL_STATE(76)] = 1793,
  [SMALL_STATE(77)] = 1803,
  [SMALL_STATE(78)] = 1813,
  [SMALL_STATE(79)] = 1823,
  [SMALL_STATE(80)] = 1833,
  [SMALL_STATE(81)] = 1843,
  [SMALL_STATE(82)] = 1853,
  [SMALL_STATE(83)] = 1863,
  [SMALL_STATE(84)] = 1873,
  [SMALL_STATE(85)] = 1883,
  [SMALL_STATE(86)] = 1893,
  [SMALL_STATE(87)] = 1903,
  [SMALL_STATE(88)] = 1913,
  [SMALL_STATE(89)] = 1923,
  [SMALL_STATE(90)] = 1933,
  [SMALL_STATE(91)] = 1943,
  [SMALL_STATE(92)] = 1953,
  [SMALL_STATE(93)] = 1963,
  [SMALL_STATE(94)] = 1973,
  [SMALL_STATE(95)] = 1983,
  [SMALL_STATE(96)] = 1987,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_do, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_do, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 6),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expr, 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_board_pattern, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_board_pattern, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_board_definition, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_board_definition, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_board_definition_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_board_definition_repeat1, 2), SHIFT_REPEAT(86),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_board_definition_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 8),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_definition, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_board_definition_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_board_definition_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(69),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_list, 5),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
