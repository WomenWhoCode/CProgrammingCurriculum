#Make and Makefiles

`Make` is a tool that can be used to compile code, as well as completing
other tasks. Type `man make` on the command line to get the full description
and documentation.

To use it, you write a configuration file for your project named `makefile` or
`Makefile`, with instructions that `make` will follow.

##Compiling C Programs with Make

In the [Advanced Compilation][advanced-compilation] notes, we saw how you can
choose to only re-compile object files that are out of date when updating your
C program. However, keeping track of which files to recompile manually would
be more trouble than it's worth.

[advanced-compilation]: ./advanced_compilation.md

**`make` can automatically recompile of only the outdated files.**

To set this up, we need to tell `make` about any *targets*, (files to
compile), and any *dependencies*, (files that the targets depend on).

For our example Fizz Buzz project, here is an `makefile`:

```make
# below, 'fizz.o' is the target, and 'fizz.c' 'fizz.h' are the dependencies
fizz.o: fizz.c fizz.h
  gcc -c fizz.c       # this line gets run if the dependencies are out of date

# below, 'buzz.o' is the target, and 'buzz.c' 'buzz.h' are the dependencies
buzz.o: buzz.c buzz.h
  gcc -c buzz.c       # this line gets run if the dependencies are out of date

# below, 'fizz_buzz' is the target and 'fizz_buzz.c' 'fizz.o' 'buzz.o' are dependencies
fizz_buzz: fizz_buzz.c fizz.o buzz.o
  gcc fizz_buzz.c fizz.o buzz.o -o fizz_buzz
```

##Gotchas

**Windows users beware:** `make` may have a different name on Windows.
"MinGW" includes a version of `make` called `mingw32-make` and Microsoft has
their own version called `NMAKE`. Also, some makefiles may not work on
different operating systems.

**Use tabs, not spaces:** When writing a `makefile`, you *must* use tabs and
not spaces. If you use spaces, it just won't work.

**References:**

[Head First C][head-first-c], p. 198-205

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
