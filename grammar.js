module.exports = grammar({
  name: 'BoGL',

  extras: $ => [
    $.comment,
    /[\n\s\uFEFF\u2060\u200B\u00A0\t]/
  ],

  word: $ => $.identifier,

  rules: {

    // recognize identifiers and types as known words
    //word: $ => $.identifier,

    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice (
      $.game_definition,
      $.board_definition,
      $.function_definition,
      $.type_definition,
      $.let_expr
    ),

    // defining a game
    game_definition: $ => seq(
      'game',
      $.upperIdentifier
    ),

    // defining a board
    board_definition: $ => prec.left(3, seq(
      $.identifier,
      ':',
      'Board',
      repeat1($.board_pattern)
    )),

    // defining a function with Input & Output
    function_definition: $ => prec.left(2,seq(
      $.identifier,
      ':',
      $._type,
      optional(seq('->',$._type)), // optional input -> output
      $.pattern
    )),

    // defining a type
    type_definition: $ => seq(
      'type',
      $.upperIdentifier,
      '=',
      $._type
    ),

    comment: $ => seq('--',/.*/),

    // BoGL types
    _type: $ => choice (
      $.builtin_type,
      $.user_defined_type
    ),

    // builtin types
    builtin_type: $ => prec(2,choice(
      'Input',
      'Bool',
      'Int',
      'Board',
      $.array_type,
      'Input',
      'Player'
    )),

    // user defined types
    user_defined_type: $ => prec(1,$.upperIdentifier),

    array_type: $ => seq(
      'Array',
      '(',
      $.number,
      ',',
      $.number,
      ')',
      'of',
      $._type
    ),

    // pattern without parameters
    pattern: $ => seq(
      $.identifier,
      optional($.parameter_list),
      '=',
      $._expression
    ),

    // board pattern
    board_pattern: $ => seq(
      $.identifier,
      '!',
      $.position_list,
      '=',
      $._expression
    ),

    // position list for board equations
    position_list: $ => seq(
      '(',
      choice(
        seq($.identifier, ',', $.identifier),
        seq($.number, ',', $.identifier),
        seq($.identifier, ',', $.number),
        seq($.number, ',', $.number),
      ),
      ')'
    ),

    // parameter listing for pattern matching
    parameter_list: $ => seq(
      '(',
      seq($.identifier, repeat(seq(',', $.identifier))),
      ')'
    ),

    // types of valid BoGL expressions
    _expression: $ => choice(
      $.binary_expr,
      $.identifier,
      $.number,
      $.bool,
      $.let_expr,
      $.while_do,
      $.if_then_else,
      $.unary_expr
    ),

    // starts with a lowercase letter
    identifier: $ => /([a-z])|([a-z][a-zA-Z0-9_]+)/,

    // starts with an uppercase letter
    upperIdentifier: $ => /([A-Z])|([A-Z][a-zA-Z0-9_]+)/,
    number: $ => /\d+/, ///-?\d+(\.\d+)?/,
    bool: $ => /True|False/,

    // let exprs
    let_expr: $ => seq(
      'let',
      $.identifier,
      '=',
      $._expression,
      'in',
      $._expression
    ),

    while_do: $ => seq(
      'while',
      $._expression,
      'do',
      $._expression
    ),

    if_then_else: $ => seq(
      'if',
      $._expression,
      'then',
      $._expression,
      'else',
      $._expression
    ),

    binary_expr: $ => choice(
      prec.left(1, seq($._expression, '>=', $._expression)),
      prec.left(1, seq($._expression, '>', $._expression)),
      prec.left(1, seq($._expression, '<', $._expression)),
      prec.left(1, seq($._expression, '<=', $._expression)),
      prec.left(1, seq($._expression, '==', $._expression)),
      prec.left(1, seq($._expression, '/=', $._expression)),

      prec.left(2, seq($._expression, '+', $._expression)),
      prec.left(2, seq($._expression, '-', $._expression)),

      prec.left(3, seq($._expression, '*', $._expression)),
      prec.left(3, seq($._expression, '/', $._expression)),
      prec.left(3, seq($._expression, '%', $._expression)),
    ),

    unary_expr: $ => choice(
      prec.left(2, seq('-', $._expression))
    ),
  }
});
