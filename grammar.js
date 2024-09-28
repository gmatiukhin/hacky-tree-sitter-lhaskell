/// <reference types="tree-sitter-cli/dsl" />
// ts-check

module.exports = grammar({
  name: "lhaskell",

  rules: {
    source: $ => repeat($._lang),
    _lang: $ => choice(
      $.tex,
      $.lhaskell,
    ),

    tex: $ => prec.right(repeat1($._tex_statement)),
    lhaskell: $ => seq(
      $.begin,
      optional($.code),
      $.end,
    ),

    begin: $ => "\\begin{code}",
    end: $ => "\\end{code}",
    code: $ => repeat1($._haskell_statement),

    _tex_statement: $ => $._line,
    _haskell_statement: $ => $._line,
    _line: $ => /.+/,
  }
});
