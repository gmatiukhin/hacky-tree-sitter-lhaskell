====
Code block before TeX
====

\begin{code}
main :: IO ()
main = do
  putStrLn "hello"
\end{code}

\documentclass[12pt]{article}
\usepackage[T1, T2A]{fontenc}
\usepackage[utf8]{inputenc}

\author{John Doe}
\title{My wonderful literate haskell, what are you doing up there?}
\begin{document}
\maketitle
\newpage
\tableofcontents
\newpage


\end{document}
---

(source
  (lhaskell
    (begin)
    (code)
    (end))
  (tex))
