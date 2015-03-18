#Arithmetic Operations

> "The binary arithmetic operators are `+`, `-`, `*`, `/`, and the modulus
> operator `%`. Integer division truncates any fractional part. The expression
>
> `x % y`
>
> produces the remainder when `x` is divided by `y`, and thus is zero when `y`
> divides `x` exactly. For example, a year is a leap year if it is divisible by
> 4 but not by 100, except that years divisible by 400 *are* leap years.
> Therefore
>
> ```
>   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
>     printf("%d is a leap year\n", year);
>   else
>     printf("%d is not a leap year\n", year);
>
> The `%` operator cannot be applied to `float` or `double`. The direction of
> truncation for `/` and the sign of the result for `%` are machine-dependent
> for negative operands, as is the action taken on overflow or underflow.
>
> The binary `+` and `-` operators have the same precedence, which is lower than
> the precedence of `*`, `/`, and `%`, which is in turn lower than unary `+` and
> `-`. Arithmetic operators associate left to right.

From ["The C Programming Language" Sections 2.5-2.6][k-r-p41]

[k-r-p41]:
http://www.iups.org/media/meeting_minutes/C.pdf#page=39
