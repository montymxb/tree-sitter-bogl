module.exports = grammar({
  name: 'bogl',

  extras: $ => [
    $.comment,
    /[\n\s\uFEFF\u2060\u200B\u00A0\t]/
  ],

  conflicts: $ => [
    [$.equation]
  ],

  word: $ => $.identifier,

  rules: {

    // recognize identifiers and types as known words
    //word: $ => $.identifier,

    source_file: $ => $.game,

    // single & multi line comments
    comment: $ => choice(
      seq('--',/.*/),
      seq('{-',/([^-]|-[^}])+/,'-}')
    ),

    // game definition
    game: $ => seq(
      $.game_def,
      repeat($.type_def),
      repeat($.value_def)
    ),

    // defining a game
    game_def: $ => seq(
      'game',
      $.upperIdentifier
    ),

    // type definition
    type_def: $ => choice(
      $.gen_type_def,
      $.board_type_def
    ),

    // general type definition
    gen_type_def: $ => seq(
      'type',
      $.upperIdentifier,
      '=',
      $.type
    ),

    // board type definition
    board_type_def: $ => seq(
      'type',
      'Board',
      '=',
      $.array_type
    ),

    array_type: $ => seq(
      'Array',
      '(',
      $.number,
      ',',
      $.number,
      ')',
      'of',
      $.type
    ),

    // base type
    btype : $ => choice(
      $.builtin_type,
      $.upperIdentifier,
      $.tuple_type
    ),

    // tuple types
    tuple_type: $ => seq(
      '(',
      seq($.btype, repeat1(seq(',', $.btype))),
      ')'
    ),

    // enumeration type
    etype: $ => seq(
      '{',
      seq($.upperIdentifier, repeat(seq(',', $.upperIdentifier))),
      '}'
    ),

    // builtin types
    builtin_type: $ => choice(
      'Input',
      'Bool',
      'Int',
      'Board',
      'Input',
      'Player',
      'Content'
    ),

    // type expression
    type: $ => choice(
      $.btype,
      $.etype,
      seq($.type, '&', $.builtin_type),
      seq($.type, '&', $.etype)
    ),

    // function type
    ftype: $ => seq(
      $.btype,
      '->',
      $.btype
    ),

    // value type
    vtype: $ => choice(
      $.btype,
      $.ftype
    ),

    // value definition
    value_def: $ => seq(
      $.signature,
      $.equation
    ),

    // type signature
    signature: $ => seq(
      $.identifier,
      ':',
      $.vtype
    ),

    // value equation
    equation: $ => choice(
      repeat1($.board_eq),
      seq($.identifier,'=',$.expr),
      seq($.identifier,$.parameter_list,'=',$.expr)
    ),

    // board equation
    board_eq: $ => seq(
        $.identifier,
        '!',
        '(',
        $.pos,
        ',',
        $.pos,
        ')',
        '=',
        $.expr
    ),

    // board position
    pos: $ => choice(
      $.number,
      $.identifier
    ),

    // parameter listing for pattern matching
    parameter_list: $ => prec(1,seq(
      '(',
      seq($.identifier, repeat(seq(',', $.identifier))),
      ')'
    )),

    // value, name
    aexpr: $ => choice(
      $.number,
      $.bool,
      $.upperIdentifier,
      $.identifier
    ),

    // tuples
    tuple: $ => seq(
      '(',
      $.expr,
      repeat1(
        seq(
          ',',
          $.expr
        )
      ),
      ')'
    ),

    // function arguments
    args: $ => prec(1,seq(
      '(',
      seq($.expr, repeat(seq(',', $.expr))),
      ')'
    )),

    // atomic expressions
    expr: $ => choice(
      $._expr,
      seq('(',$._expr,')')  // parenthesized expressions
    ),

    _expr: $ => choice(
      $.aexpr,
      $.tuple,
      $.app,
      $.infix_app,
      $.single_tuple_proj,
      $.tuple_proj,
      $.let_expr,
      $.conditional,
      $.while_loop
    ),

    // function application
    app: $ => seq($.identifier,$.args),

    // infix application
    infix_app: $ => prec.left(2,seq($.expr,$.binop,$.expr)),

    // single tuple projection
    single_tuple_proj: $ => prec.left(4,seq($.expr,'#',$.number)),

    // tuple projection
    tuple_proj: $ => prec.left(4,seq($.expr,'#','(',$.number,repeat1(seq(',',$.number)),')')),

    // starts with a lowercase letter
    identifier: $ => /([a-z])|([a-z][a-zA-Z0-9_]+)/,

    // starts with an uppercase letter
    upperIdentifier: $ => /([A-Z])|([A-Z][a-zA-Z0-9_]+)/,
    number: $ => /(-?\d+)/,
    bool: $ => /(True|False)/,

    // local definition
    let_expr: $ => seq(
      'let',
      $.identifier,
      '=',
      $.expr,
      'in',
      $.expr
    ),

    // conditional
    conditional: $ => seq(
      'if',
      $.expr,
      'then',
      $.expr,
      'else',
      $.expr
    ),

    // while loop
    while_loop: $ => seq(
      'while',
      $.expr,
      'do',
      $.expr
    ),

    binop: $ => choice(
      '+','-','*','/','!','==','/=','>','>=','<','<='
    ),

    break: $ => /\n|\r\n/

    /*
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
    */

    /*
    unary_expr: $ => choice(
      prec.left(2, seq('-', $._expression))
    ),
    */
  }
});
