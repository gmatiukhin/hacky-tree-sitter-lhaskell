====
Code block in TeX
====

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

---

(source
  (tex)
  (lhaskell
    (begin)
    (code)
    (end))
  (tex))
