# Twiddling Bits PART I
*(from 15-213: Intro to Comp. Systems at CMU)*

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

## Part I.: Bit Manipulations

| Function Name  | Description                                          | Difficulty    | Max number of operations |
| -------------- | ---------------------------------------------------- | ------------- | ------------------------ |
| bitAnd(x, y)   | (x&y) using only ~ and \|                            | 1             | 8                        |
| bitOr(x, y)    | (x\|y) using only ~ and &                            | 1             | 8                        |
| copyLSB(x)     | Word with all bits set to LSB of x                   | 2             | 5                        |
| isEqual(x, y)  | (x === y)                                            | 2             | 5                        |
| reverseByte(x) | Reverse the bytes of x                               | 3             | 25                       |
| evenBits(void) | Even numbered bits set to 1                          | 2             | 8                        |
| bitParity(x)   | 1 if x has odd number of 1s and 0 otherwise          | 4             | 20                       |
| leastBitPos(x) | Mask with position of least significant 1 bit marked | 4             | 30                       |

The above table describes a set of functions that manipulate and test sets of
bits. The "Difficulty" field gives the difficulty rating (1 being the easiest)
for the puzzle.

 * Functions bitAnd() and bitOr() should duplicate the behavior of the bit
   operations & and |, respectively. In bitAnd() you may only use the operations
   | and ~, while in bitOr() you may only use the operations & and ~.

 * Function copyLSB() generates a word in which every bit is set to the same
   value as the least significant bit of x.

 * Function isEqual() compares x to y. As with all predicate operations, it
   should return 1 if the tested condition holds and 0 otherwise.

 * Function reverseByte() generates a word by reversing the order of the bytes
   of x.

 * Function evenBits() generates a word in which the even-numbered bits are set
   to 1.

 * Function bitParity() returns 1 if its argument contains an odd number of 1's,
   and 0 otherwise.

 * Function leastBitPos() returns a mask that marks the position of the least
   significant 1 bit within x with a 1. All other positions of the mask should
   be 0.

---

This is a summary of a challenge described in [Lab 1 assignment][cmu-lab1] from
[course 15-213: Intro to Computer Systems][cmu-15-213] at Carnegie Mellon School
of Computer Science.

[cmu-lab1]: http://www.cs.cmu.edu/afs/cs/academic/class/15213-s02/www/applications/labs/lab1/datalab.html
[cmu-15-213]: http://www.cs.cmu.edu/~213/schedule.html
