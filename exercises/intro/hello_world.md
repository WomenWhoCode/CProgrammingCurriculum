##Hello World

> "The first program to write is the same for all languages:"
> *Print the words*
>  `hello, world`

 --- 'The C Programming Language', p. 5

###Instructions

> "The only way to learn a new programming language is by writing programs in
> it. The first program to write is the same for all languages:
>
> *Print the words*
>
> `hello, world`
>
> ... In C, the program to print `hello, world` is
>
> ```
> #include <stdio.h>
>
> int main()
> {
>   printf("hello, world\n");
> }
> ```
>
> Just how to run this program depends on the system you are using. As a specific
> example, on the UNIX operating system you must create the program in a file
> whose name ends in `.c`, such as `hello.c`, then compile it with the command
>
> `cc hello.c`
>
> If you haven't botched anything, such as omitting a character or
> misspelling something, the compilation will proceed silently, and make an
> executable file called `a.out`. If you run `a.out` by typing the command
>
> `a.out`
>
> it will print
>
> `hello, world`
>
> Now, for some explanations about the program itself. A C program, whatever its
> size, consists of *functions* and *variables*. A function contains *statements*
> that specify the computing operations to be done, and the variables store
> values used during the computation. C functions are like subroutines and
> functions in Fortran or the procedures and functions of Pascal. Our example
> is a function named `main`. Normally you are at liberty to give functions
> whatever names you like but `main` is special - your program begins
> executing at the begininning of main. This means that every program must
> have a `main` somewhere.
>
> `main` will usually call other functions to help perform its job, some that
> you wrote, and others from libraries that are provided for you. The first line
> of the program,
>
> `#include <stdio.h>`
>
> tells the compiler to include information about the standard input/output
> library; the line appears at the beginning of many C source files...
>
> The function `main` contains only one statement,
>
> `printf("hello, world\n");`
>
> A function is called by naming it, followed by a parenthesized list of
> arguments, so this calls the function `printf` with the argument `"hello,
> world\n"`. `printf` is a library function that prints output, in this case
> the string of characters between the quotes.
>
> ... The sequence `\n` in the string is C notation for the *newline character*,
> which when printed advances the output to the left margin on the next line. If
> you leave out the `\n` (a worthwhile experiment), you will find that there is no
> line advance after the output is printed.
>
> ... Notice that `\n` represents only a single character. An *escape sequence*
> like `\n` provides a general and extensible mechanism for representing
> hard-to-type or invisible characters. Among others that C provides are `\t` for
> tab, `\b` for backspace, `\"` for double quote and `\\` for the backslash
> itself.
>
> **Exercise 1-1.** Run the `hello, world` program on your system. Experiment
> with leaving out parts of the program, to see what error messages you get.
>
> **Exercise 1-2.** Experiment to find out what happens when `prints`'s argument
> string contains `\c`, where `c` is some character not listed above."

[from 'The C Programming Language', p. 5-8][k-r-p5]

###Gotchas
 - In the examples from 'The C Programming Language', they omit the `int` before
the `main` function.
You may see the following warning as a result:
```
 hello_world.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
 main()
 ^~~~
```
In that case, just add the missing type declaration:
```
int main() {
...
```

 - Using [curly quotes][straight-vs-curly-quotes] can lead to the following
   error:

```
  hello_world.c:5:10: error: non-ASCII characters are not allowed outside of literals and identifiers
    printf(“hello, world”);
           ^
  hello_world.c:5:13: error: use of undeclared identifier 'hello'
    printf(“hello, world”);
            ^
  hello_world.c:5:25: error: non-ASCII characters are not allowed outside of literals and identifiers
    printf(“hello, world”);
```

In that case I recommend using a different text editor.

[straight-vs-curly-quotes]: http://practicaltypography.com/straight-and-curly-quotes.html

###Bonus
[More context on Hello World.][hello-world-wikipedia]

**Solution:** [Hello World][hello-world-solution]

 [k-r-p5]: http://www.iups.org/media/meeting_minutes/C.pdf#page=9
 [hello-world-wikipedia]: http://en.wikipedia.org/wiki/%22Hello,_world!%22_program
 [hello-world-solution]: ../../solutions/intro/hello_world.c
