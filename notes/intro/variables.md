#Variables in C

When assigning variables in C, you must specify the type.

Examples:
```c
int main ()
{
  /* variable declaration: */
  int a, b;
  int c;
  float f;

  /* variable assignment: */
  a = 10;
  b = 20;

  c = a + b;
  printf("value of c : %d \n", c);

  f = 70.0/3.0;
  printf("value of f : %f \n", f);

  return 0;
}
```

The above program should output:
> value of c : 30
>
> value of f : 23.333334

##Declaration vs. Assignment

From ["The C Programming Language" Section 1.2][k-r-p9]

> "In C, all variables must be declared before they are used, usually at the
> beginning of the function before any executable statements. A *declaration*
> announces the properties of variables; it consists of a type name and a
> list of variables, such as
>
>   `int fahr, celsius;
>    int lower, upper, step;`
> ...
>
>
> Computation in the temperature conversion program begins with the
> *assignment statements*
>
>   `lower = 0;
>
>    upper = 300;
>
>    step = 20;
>
>    fahr = lower;`
>
>
> which set the variables to their initial value."

[k-r-p9]: http://www.iups.org/media/meeting_minutes/C.pdf#page=12

##Weak Static Typing

C uses a weak static typing system.
For more on what type systems are, and a comparison of C's type system to other
languages, [read the "Introduction to Programming Type Systems"][intro-to-type-systems]
from Smashing Magazine.

##Some Common Types

| Type      | Description                                                   |
| --------- | ------------------------------------------------------------- |
| `char`    | Typically a single octet (one byte). This is an integer type. |
| `int`     | The most natural size of integer for the machine.             |
| `float`   | A single-precision floating point value.                      |
| `double`  | A double-precision floating point value.                      |
| `void`    | Represents the absence of type.                               |

When choosing variable names, remember to avoid [reserved
keywords][reserved-keywords].

Reference: [C Variables from TutsPoint][c-variables-tutorial]

[reserved-keywords]: ./reserved_keywords.md
[intro-to-type-systems]: http://www.smashingmagazine.com/2013/04/18/introduction-to-programming-type-systems/
[c-variables-tutorial]: http://www.tutorialspoint.com/cprogramming/c_variables.htm
