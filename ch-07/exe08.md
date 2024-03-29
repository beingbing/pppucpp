# 7.exercise.08.md

## Statement

The grammar in §7.6.4 is incomplete (we did warn you against overreliance on
comments); it does not define sequences of statements, such as 4+4;
5–6;, and it does not incorporate the grammar changes outlined in §7.8. Fix
that grammar.  Also add whatever you feel is needed to that comment as the
first comment of the calculator program and its overall comment.

## Thoughts

I've been modifying the grammar while doing drill steps and exercises. I feel
is now fairly complete.

I've introduced generic terminals inside square brackets as [alphabetic-char].
I think its a nice notation.

Grammar rules for variables are done. Also, rules for what a variable name
could be are introduced.

Some restrictions, as the second argument of pow() function to be an integer,
are not expressed in the grammar. Somehow I feel thar expressing such
a restriction in the grammar overcomplicates it and do it less generic. It's
purely a restriction of the function, not the grammar itself, and since I admit
the funcion arguments to be expressions, telling that some expressions must
result an integer value and other don't feels artificial and out of the grammar
scope. (Mistaken I could be).

For sequence of statements "Calculation Statement" alternative is intorduced.
This makes unimportant to me when statements are in the same line or different
lines. Perhaps more work on this has to be done to fix the "> =" issue when
multiple statements are written in the same line. But this fix will need, as
book says, major changes.

## Grammar

    Calculation:
        Statement
        Help
        Print
        Quit
        Calculation Statement
    Statement:
        Declaration
        Assignment
        Expression
    Help:
        "help"
    Print:
        ";"
        "\n"
    Quit:
        "quit"
    Declaration:
        "let" Name "=" Expression
        "const" Name "=" Expression
    Assignment:
        Name "=" Expression
    Expression:
        Term
        Expression "+" Term
        Expression "-" Term
    Term:
        Primary
        Term "*" Primary
        Term "/" Primary
        Term "%" Primary
    Primary:
        Number
        "("Expression")"
        "-" Primary
        "+" Primary
        Name
        Function"("Arguments")"
    Function:
        "sqrt"
        "pow"
    Arguments:
        Expression
        Argument","Expression
    Number:
        [floating-point-literal]
    Name:
        [alphabetic-char]
        Name[alphabetic-char]
        Name[digit-char]
        Name"_"