#Advanced Compilation

##How Compilation Works

Compilation translates your C code into an **executable program**, but
there are several phases involved in the process.

1. **Preprocessing** is where any `#include` directives are replaced with
the code that they are meant to require.

2. **Compilation** takes the C code and turns it into
[assembly][assembly-wikipedia].

3. **Assembly** is the step where the *assembly language symbols* are assembled
into *machine* or *object code*. It's just ones and zeroes at that point.

4. **Linking** is the last step, where different pieces of object code are
linked together and turned into the **executable program**.

[assembly-wikipedia]: http://en.wikipedia.org/wiki/Assembly_language

##Generating Object Files

Normally "gcc" completes all 4 steps automatically when you compile a
program. However, once you have very large programs with many files, running
the compiler to update your executable can become slow.

If you only changed one file in your project, why make "gcc" complete all
of those steps for every file again?

It's more efficient if you save the *object code* generated in step three as
a separate file, and then reuse it when the source file hasn't changed.

To generate an object file for your C code:
> gcc -c my_program.c

To link your object files and generate an executable:
> gcc my_program.o -o my_program

For the fizz_buzz example from previous notes, we could try the following
experiment:
First generate object files for every `.c` file in the project.
> gcc -c *.c

Next, link them all and compile the executable.
> gcc *.o -o fizz_buzz

Then, if you change just the 'fizz.c' file, only re-compile the object file
for that source code.
> gcc -c fizz.c && gcc *.o -o fizz_buzz

**References:**
These notes inspired by [Head First C][head-first-c], p. 187-196

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
