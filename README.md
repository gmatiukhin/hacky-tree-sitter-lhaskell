# hacky-tree-sitter-lhaskell

[![CI][ci]](https://github.com/gmatiukhin/hacky-tree-sitter-lhaskell/actions/workflows/ci.yaml)

A quick and dirty way to enable [tree-sitter]
higlighting for `.lhs` files with TeX syntax.


# Installation

## [nvim-treesitter]:

Specify the parser like this:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.lhaskell = {
    install_info = {
        url = "https://github.com/gmatiukhin/hacky-tree-sitter-lhaskell",
        branch = "main",
        files = { "src/parser.c" },
    },
    filetype = "lhaskell",
}
```

Install it either with `:TSInstall lhaskell` or add it to `ensure_installed`.

Don't forget to install the 
[haskell parser] and
[tex parser] parsers too,
as they are needed to parse different parts of the document.

For some reason `nvim-treesitter` doesn't download the `injections.scm`
and `highlights.scm` files, so you'll have to download them yourself and put them
into `parsers` folder of your `nvim-treesitter` installation.
If using [lazy.nvim] it should be in
`~/.local/share/nvim/lazy/nvim-treesitter/queries/lhaskell`


# How this works

This parser takes the following example `.lhs` file with TeX syntax:
```tex
\documentclass[12pt]{article}
\usepackage[T1, T2A]{fontenc}
\usepackage[utf8]{inputenc}

\author{John Doe}
\title{My wonderful literate haskell}
\begin{document}
\maketitle
\newpage
\tableofcontents
\newpage

\begin{code}
main :: IO ()
main = do
  putStrLn "hello"
\end{code}

\end{document}
```

into this representation:

```scheme
(source
  (tex)
  (lhaskell
    (begin)
    (code)
    (end))
  (tex))
```

Then injections from [injections.scm](./queries/injections.scm)
turn the parse the `code` block with a
[haskell parser]
to turn it into this:

```scheme
(source
  (tex)
  (lhaskell
    (begin)
    (code
      (haskell
        declarations: (declarations
          (signature
            name: (variable)
            type: (apply
              constructor: (name)
              argument: (unit)))
          (bind
            name: (variable)
            match: (match
              expression: (do
                statement: (exp
                  (apply
                    function: (variable)
                    argument: (literal
                      (string))))))))))
    (end))
  (tex))
```

Same thing happens with `tex`, `begin` and `end`,
which are parsed using a [tex parser],
but their tranformations are ommited for brevity.

This allows us to highlight different parts of the source file differently.
For which we need [highlights.scm](./queries/highlights.scm).
It can be empty as just its presents enables the highlighting
(at least with [nvim-treesitter]).

[tree-sitter]: (https://github.com/tree-sitter/tree-sitter)
[nvim-treesitter]: (https://github.com/nvim-treesitter/nvim-treesitter)
[haskell parser]: (https://github.com/tree-sitter/tree-sitter-haskell)
[tex parser]: (https://github.com/latex-lsp/tree-sitter-latex),
[lazy.nvim]: (https://github.com/folke/lazy.nvim)
[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter/tree-sitter-haskell/ci.yml?logo=github&label=CI
