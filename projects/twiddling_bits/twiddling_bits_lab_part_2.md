# Twiddling Bits PART II
*(from 15-213: Intro to Comp. Systems at CMU)*

*Introduction repeated for convenience:*
---

Your challenge is to complete each function using only straightline code (i.e.,
no loops or conditionals) and a limited number of C arithmetic and logical
operators. Specifically, you are only allowed to use the following eight
operators:

```c
! ~ & ^ | + << >>
```

A few of the functions further restrict this list.

In order to keep the code short and simple, you should try to use the fewest
number of operations possible, staying under the "Max Operations" listed for
that function.

---

## Part II: Two's Complement Arithmetic

| Function Name  | Description                                          | Difficulty    | Max number of operations |
| -------------- | ---------------------------------------------------- | ------------- | ------------------------ |
| tmin(void)     | Smallest Two's Complement integer                    | 1             | 4                        |
| negate(x)      | -x                                                   | 2             | 5                        |
| fitsBits(x, n) | x can be represented with n bits                     | 2             | 15                       |
| addOK(x, y)    | Can compute (x+y) without overflow                   | 3             | 20                       |
| isLessOrEqual(x, y) | x <= y                                          | 3             | 24                       |
| isNonZero(x)   | x!=0 without using ! or &                            | 4             | 10                       |
| sm2tc(x)       | Convert sign-magnitude to two's complement           | 4             | 15                       |

The above table describes a set of functions that make use of the two's complement representation of integers:

 * Function tmin() returns the smallest integer.

 * Function fitsBits() determines whether argument x could be represented as an
   n-bit, two's complement number.

 * Function addOK() determines whether argument y can be added to argument y
   without overflow.

 * Function isLessOrEqual() determines whether x is less than or equal to y.

 * Function isNonZero() determines whether x != 0. To make things more
   interesting, you may not use the operation ! for this problem.

 * Function sm2tc() converts a number from sign-magnitude format to two's
   complement format. That is, the high order bit of x is a sign bit s, while
   the remaining bits denote a nonnegative magnitude m. The function should then
   return the two's complement representation of (-1)s*m.

---

This is a summary of a challenge described in [Lab 1 assignment][cmu-lab1] from
[course 15-213: Intro to Computer Systems][cmu-15-213] at Carnegie Mellon School
of Computer Science.

[cmu-lab1]: http://www.cs.cmu.edu/afs/cs/academic/class/15213-s02/www/applications/labs/lab1/datalab.html
[cmu-15-213]: http://www.cs.cmu.edu/~213/schedule.html
