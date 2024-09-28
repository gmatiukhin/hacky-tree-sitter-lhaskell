====
Code block after TeX
====

\documentclass[12pt]{article}
\usepackage[T1, T2A]{fontenc}
\usepackage[utf8]{inputenc}

\author{John Doe}
\title{My wonderful literate haskell, where are you?}
\begin{document}
\maketitle
\newpage
\tableofcontents
\newpage


\end{document}

\begin{code}
main :: IO ()
main = do
  putStrLn "hello"
\end{code}
---

(source
  (tex)
  (lhaskell
    (begin)
    (code)
    (end)))
