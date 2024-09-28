====
Code blocks all over TeX
====

\begin{code}
\end{code}

\documentclass[12pt]{article}
\usepackage[T1, T2A]{fontenc}
\usepackage[utf8]{inputenc}
\usepackage[russian]{babel}

\author{John Doe}
\title{My wonderful literate haskell got out of hand.}
\begin{document}
\maketitle
\newpage
\tableofcontents
\newpage


\begin{code}
putStrLn "hello"
\end{code}

\end{document}

\begin{code}
main :: IO ()
main = do
  putStrLn "hello"
\end{code}
---

(source
  (lhaskell
    (begin)
    (end))
  (tex)
  (lhaskell
    (begin)
    (code)
    (end))
  (tex)
  (lhaskell
    (begin)
    (code)
    (end)))
