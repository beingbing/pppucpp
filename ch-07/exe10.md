# 7.exercise.10.md

## Statement

Modify the calculator to operate on ints (only); give errors for overflow and
underflow. Hint: Use narrow_cast (§7.5).

## Thoughts

I will not do this one.

Force use of ints is rather easy, since we could use narrow_cast to check if
numbers introduced by the user are ints or not. But narrow_cast is a dead end,
since it only produces a not very verbose (for this situation) error message
"info loss".

Also, to check for overflow and underflow tells me we have to carry changes on
multiplication, add and substraction (and pow() function), and to be able to
check that we must have int typed operands.
This, if we do that checking the sign of the result. As I have discovered,
overflow of signed integers results in __undefined behavior__ (see paragraph
about overflow detection in [exercise 10 from chapter
6](https://gitlab.com/0p3r4t4/PPPUCPP2nd/blob/master/ch06/6.exercise.10.md)).

Previously I've implemented a checked multiplication on positive integers.
Simple enough for the work. But now I'll have to take care of more operations
and consider positive and negative numbers. Perhaps too much work for what's
intended.

So I don't see the need for this exercise. And I don't want to do it the
_undefined_ way.

Call me lazy if you want.