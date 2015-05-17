(?# Keyword Beginning Regex )

(?# Keyword prefix restrictions group )
(?:
    (?<={)\s*|
    ^\s*|
    (?<=each|each*|where|with)\s+|
    [;=%,]\s+
)

(?# Keyword symbol group )
([a-zA-Z$_](?:[a-zA-Z$_0-9-]*[a-zA-Z$_0-9])?)

(?# Line can't end right after keyword )
(?!$)

(?# Keyword postfix restrictions )
(?:\:|
   \s+(?!(?:
          [+\-*/%&=]|
          as|
          each\*?|
          in|
          is|
          mod|
          not|
          of|
          or|
          when|
          where|
          with|
          and
         )[\s:]
      )
)
