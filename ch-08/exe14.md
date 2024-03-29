# 8.exercise.14.md

## Statement

Can we declare a non-reference function argument const (e.g., void f(const
int);)?
What might that mean?
Why might we want to do that?
Why don't people do that often?
Try it; write a couple of small programs to see what works.

## Comments

Yes, it seems we can declare a pass-by-value parameter as const. Compiler
doesn't complain at all and it's completely legal.

Declaring a paramente in such a way means that it can't be modified inside the
body of the function.

Perhaps we want to do that as a form of expression, or documentation, that the
parameter will not be modified. Also, some people say that it could come in
handy to avoid syntactical errors as '==' vs '=', although I think such errors
could be better avoided with statical analysis.

I think it's not very popular since we have a cheaper way to do it through pass
by const-reference, avoiding the copy of the object passed and mantaining the
constness of the argument.
Also, it has no effect from the point of view of the caller. An argument passed
by value won't live beyond the return from the function, so the changes made to
it are trivial.

## Interesting readings

I've read these after answering to the exercise and I find them really
interesting:

[Herb Sutter - GotW #6 Const-Correctness](http://www.gotw.ca/gotw/006.htm)

[Herb Sutter - GotW #6b Const-Correctness, Part
2](https://herbsutter.com/2013/05/28/gotw-6b-solution-const-correctness-part-2/)