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

| Function Name  | Description                                          | Difficulty    | Max number of operations | Skeleton |
| -------------- | ---------------------------------------------------- | ------------- | ------------------------ | -------- |
| bitAnd(x, y)   | (x&y) using only ~ and \|                            | 1             | 8                        | [bitAnd skeleton][bit-and-skeleton] |
| bitOr(x, y)    | (x\|y) using only ~ and &                            | 1             | 8                        | [bitOr skeleton][bit-or-skeleton] |
| copyLSB(x)     | Word with all bits set to LSB of x                   | 2             | 5                        | [copyLSB skeleton][copyLSB-skeleton] |
| isEqual(x, y)  | (x === y)                                            | 2             | 5                        | [isEqual skeleton][is-equal-skeleton] |
| reverseByte(x) | Reverse the bytes of x                               | 3             | 25                       | [reverseByte skeleton][reverse-byte-skeleton] |
| evenBits(void) | Even numbered bits set to 1                          | 2             | 8                        | [evenBits skeleton][even-bits-skeleton] |
| bitParity(x)   | 1 if x has odd number of 1s and 0 otherwise          | 4             | 20                       | [bitParity skeleton][bit-parity-skeleton] |
| leastBitPos(x) | Mask with position of least significant 1 bit marked | 4             | 30                       | [leastBitPos skeleton][least-bit-pos-skeleton] |

[bit-and-skeleton]: ./skeletons/bit-and-skeleton.c
[bit-or-skeleton]: ./skeletons/bit-or-skeleton.c
[copyLSB-skeleton]: ./skeletons/copyLSB-skeleton.c
[is-equal-skeleton]: ./skeletons/is-equal-skeleton.c
[reverse-byte-skeleton]: ./skeletons/reverse-byte-skeleton.c
[even-bits-skeleton]: ./skeletons/even-bits-skeleton.c
[bit-parity-skeleton]: ./skeletons/bit-parity-skeleton.c
[least-bit-pos-skeleton]: ./skeletons/least-bit-pos-skeleton.c

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
   to 1. *Note* that you have to start with an 8-bit int and return a 32-bit int
   that has all the even bits set. So, your goal is to return `0x55555555` but
   you must start with `0x55`.

 * Function bitParity() returns 1 if its argument contains an odd number of 1's,
   and 0 otherwise.

 * Function leastBitPos() returns a mask that marks the position of the least
   significant 1 bit within x with a 1. All other positions of the mask should
   be 0.

## Hints

 * **General:** Remember the difference between `or` and `xor`:
   Using `a|b` (the inclusive 'or') will return any bits that are set in
   *either or both* `a` and `b`.

   ```
   0011 1100 | 0001 1011 -> 0011 1111
   ```

   Using `a^b` (the exclusive 'or') will return only bits that are set in
   *one or the other, but not both* `a` and `b`.

   ```
   0011 1100 ^ 0001 1011 -> 0010 0111
   ```

 * **`bitAnd` and `bitOr`**: Remember [modus ponens][modus-ponens], a concept
   from discrete math that basically means `a&b == !(!a&!b)`

 * **`copyLSB`**: A ["word"][word] in this context just means a chunk of computer
  memory. [The least significant bit][l-s-b] in this case (I think) is the
  rightmost bit. You can get it's value [using a mask][mask], and your result should
  either be `0000 0000` or `1111 1111`. There is
  [a stackoverflow answer explaining more about how to solve this one.][s-o-copy-lsb]

 * **`isEqual`**: Remember that 0 is `0000 0000` in binary, and that you can
   reverse the bits of `1111 1111` to get `0000 0000`. Getting this to return
   either 0 or 1 can be tricky, but a `!` can also be useful for that.

 * **`reverseByte`**: [Here is an approach][reverse-parallel] that could be used for this problem.

 * **`evenBits`**: The goal is to start with the number `1010 1010` (which is
  the hexadecimal number `0x55`) and convert it to the 32 bit number
  `1010 1010 1010 1010 1010 1010 1010 1010`, which is `0x55555555`. You cannot
  just use `0x55555555`.

 * **`bitParity`**: The ["Computing parity in Parallel"][parity-parallel] approach and the other
   approaches listed above it can give you ideas of how to solve this one.

 * **`leastBitPos`**: Remember what the [Least Significant Bit][l-s-b] is; in
   this case they want the least significant '1' bit, so in the number
   `0001 0100` the least significant 1 bit would be the `1` two spaces from the
   right, which is in the "8's place". Also remember what a [mask][mask] is.

   Your function should always return one of the following numbers:
   ```
   0000 0000 -> 0
   0000 0001 -> 1
   0000 0010 -> 2
   0000 0100 -> 4
   0000 1000 -> 8
   0001 0000 -> 16
   0010 0000 -> 32
   0100 0000 -> 64
   1000 0000 -> 128
   ```

   There is a trick to this one. It's explained a bit in [this stackoverflow][s-o-lsb].

[modus-ponens]: http://www.cs.ucsb.edu/~pconrad/cs40/lessons/logic/modusPonensModusTollens.html
[l-s-b]: http://en.wikipedia.org/wiki/Least_significant_bit
[word]: http://en.wikipedia.org/wiki/Word_%28computer_architecture%29
[mask]: http://en.wikipedia.org/wiki/Mask_%28computing%29
[s-o-copy-lsb]: http://stackoverflow.com/questions/12416639/how-to-create-mask-with-least-significat-bits-set-to-1-in-c
[reverse-parallel]: https://graphics.stanford.edu/~seander/bithacks.html#ReverseParallel
[even-bits-thread]: http://cboard.cprogramming.com/cplusplus-programming/72897-standard-cs-introductory-problem.html
[parity-parallel]: https://graphics.stanford.edu/~seander/bithacks.html#ParityParallel
[s-o-lsb]: http://stackoverflow.com/questions/18806481/how-can-i-get-the-position-of-the-least-significant-bit-in-a-number

## Solutions
**DISCLAIMER:** These were just a first attempt at the problems by someone who
is still learning, so feel free to improve them and *submit a pull request*!
They are unofficial and may not be the best possible answers.

 * [bitAnd][bit-and-solution]

 * [bitOr][bit-or-solution]

 * [copyLSB][copyLSB-solution]

 * [isEqual][is-equal-solution]

 * [reverseByte][reverse-byte-solution]

 * [evenBits][even-bits-solution]

 * [bitParity][bit-parity-solution]

 * [leastBitPos][least-bit-pos-solution]

[bit-and-solution]: ../../solutions/twiddling_bits/bit-and.c
[bit-or-solution]: ../../solutions/twiddling_bits/bit-or.c
[copyLSB-solution]: ../../solutions/twiddling_bits/copyLSB.c
[is-equal-solution]: ../../solutions/twiddling_bits/is-equal.c
[reverse-byte-solution]: ../../solutions/twiddling_bits/reverse-byte.c
[even-bits-solution]: ../../solutions/twiddling_bits/even-bits.c
[bit-parity-solution]: ../../solutions/twiddling_bits/bit-parity.c
[least-bit-pos-solution]: ../../solutions/twiddling_bits/least-bit-pos.c

---

This is a summary of a challenge described in [Lab 1 assignment][cmu-lab1] from
[course 15-213: Intro to Computer Systems][cmu-15-213] at Carnegie Mellon School
of Computer Science.

[cmu-lab1]: http://www.cs.cmu.edu/afs/cs/academic/class/15213-s02/www/applications/labs/lab1/datalab.html
[cmu-15-213]: http://www.cs.cmu.edu/~213/schedule.html
