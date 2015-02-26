#Learn To Code C

## Goals
 - Understand the topics listed in the curriculum.
 - Complete a [personal project][project-ideas] written in C.
 - Contribute to an [open source project that is written in
   C][open-source-c-projects].

[open-source-c-projects]: notes/meta/open_source_projects.md
[project-ideas]: notes/meta/project_ideas.md

## Week 1: Compilation
 - [Why Learn C?][why-learn-c]
 - Compiling and Running C Programs
   - [gcc demo][gcc-demo]
   - [clang demo][clang-demo]
   - [clang versus gcc][clang-vs-gcc] from clang.llvm.org
 - [The "Main" Function][main]
 - **Exercises:**
   - [Hello World][hello-world]
   - [Formatted Printing][learn-c-hard-way-ex-3] from "Learn C The Hard Way"
     (Ignore the comments about using Make.)
   - [Fahrenheit to Celsius][k-r-p8] from "The C Programming Language" (p.  8-14)
   - [Fizz Buzz][fizz-buzz]
   - **Bonus:** [Euler Problem #1: Multiples of 3 and 5][euler-1]
   - **Bonus:** [Euler Problem #2: Even Fibonacci Numbers][euler-2]
   - **Bonus:** [Euler Problem #3: Largest Prime Factor][euler-3]


[why-learn-c]: notes/intro/why_learn_c.md
[gcc-demo]: notes/intro/gcc-demo.md
[clang-demo]: notes/intro/clang-demo.md
[clang-vs-gcc]: http://clang.llvm.org/comparison.html#gcc
[main]: notes/intro/main_function.md
[hello-world]: exercises/intro/hello_world.md
[fizz-buzz]: exercises/intro/fizz_buzz.md
[learn-c-hard-way-ex-3]: http://c.learncodethehardway.org/book/ex3.html
[k-r-p8]: http://books.cat-v.org/computer-science/c-programming-language/The.C.Programming.Language.2nd.Edition.pdf#page=22
[euler-1]: https://projecteuler.net/problem=1
[euler-2]: https://projecteuler.net/problem=2
[euler-3]: https://projecteuler.net/problem=3

## Week 2: Basics Part 1
 - [Variable Declaration][variables]
 - [Data Types][data-types]
   - **Exercise:** [Types of Variables][learn-c-hard-way-ex-6] from "Learn C The Hard Way"
   - **Exercise:** [Finding the Size of Data Types][finding-size-of]
 - [Strings in C][c-strings]
   - **Exercise:** [Arrays and Strings][learn-c-hard-way-ex-9] from "Learn C The Hard Way"
   (Read the error output from the "break it" section [here][arrays-and-strings-break-it])
 - [Printing][printing]
 - [Conditionals][conditionals]
   - **Exercise:** [If, Else-If, Else][learn-c-hard-way-ex-12] from "Learn C The Hard Way" (Bonus: This exercise uses [command line arguments][command-line-options].)
 - [Loops][loops]
   - **Exercise:** [Word Counter][k-r-p20] from "The C Programming Language" (p.  20-22)
 - [Arithmetic Operations][arithmetic-operations] from "The C Programming Language" (p.41)
   - **Exercise:** [More Variables, Some Math][learn-c-hard-way-ex-7] from "Learn C The Hard Way"
 - **More Exercises:**
   - **Bonus:** [Switch Statement][learn-c-hard-way-ex-13] from "Learn C The Hard Way"
   - **Bonus:** [Arrays of Strings, Looping][learn-c-hard-way-ex-10] from "Learn C The Hard Way"
   - **Bonus:** [While-Loop And Boolean Expressions][learn-c-hard-way-ex-11] from "Learn C The Hard Way"

[variables]: notes/intro/variables.md
[c-strings]: notes/intro/strings.md
[printing]: notes/intro/printing.md
[data-types]: notes/intro/data_types.md
[learn-c-hard-way-ex-6]: http://c.learncodethehardway.org/book/ex6.html
[finding-size-of]: exercises/data_types/finding_size_of.md
[learn-c-hard-way-ex-12]: http://c.learncodethehardway.org/book/ex12.html
[conditionals]: notes/intro/conditionals.md
[loops]: notes/intro/loops.md
[k-r-p20]: http://books.cat-v.org/computer-science/c-programming-language/The.C.Programming.Language.2nd.Edition.pdf#page=34
[arithmetic-operations]: notes/intro/arithmetic_operations.md
[learn-c-hard-way-ex-7]: http://c.learncodethehardway.org/book/ex7.html
[learn-c-hard-way-ex-9]: http://c.learncodethehardway.org/book/ex9.html
[arrays-and-strings-break-it]: https://github.com/Frederick-S/Learn-C-The-Hard-Way-Exercise/tree/master/Ex9
[learn-c-hard-way-ex-13]: http://c.learncodethehardway.org/book/ex13.html
[learn-c-hard-way-ex-10]: http://c.learncodethehardway.org/book/ex10.html
[learn-c-hard-way-ex-11]: http://c.learncodethehardway.org/book/ex11.html

## Week 3: Basics Part 2
 - Syntax Review *(TODO)*
 - Type Conversion *(TODO)*
 - Getting User Input *(TODO)*
 - **Exercises:**
   - [Sizes and Arrays][learn-c-hard-way-ex-8] from "Learn C The Hard Way"
   - [Writing and Using Functions][learn-c-hard-way-ex-14] from "Learn C The Hard Way"
   - **Project:** Build a Game *(TODO)*

[learn-c-hard-way-ex-8]: http://c.learncodethehardway.org/book/ex8.html
[learn-c-hard-way-ex-14]: http://c.learncodethehardway.org/book/ex14.html

## Week 4: C Specific Basics
 - [C Libraries][c-libraries]
 - Using multiple files in a project *(TODO)*
   - **Exercise:** [Variations of Fizz Buzz][fizz-buzz-variations]
 - External Variables *(TODO)*
   - **Exercise:** [RPN Calculator][k-r-p74] from "The C Programming Language" (p.74-79)
 - [Make Files][make-files] *(TODO)*
   - **Exercise:** [Make some Makefiles][makefile-exercise]
 - sizeof and memory allocation *(TODO)*
   - **Exercise:** Caesar Cipher *(TODO)*

[c-libraries]: notes/intro/libraries_intro.md
[fizz-buzz-variations]: exercises/organizing_code/fizz_buzz_variations.md
[k-r-p74]: http://books.cat-v.org/computer-science/c-programming-language/The.C.Programming.Language.2nd.Edition.pdf#page=74
[makefile-exercise]: exercises/organizing_code/makefiles.md
[reserved-keywords]: notes/intro/reserved_keywords.md

## Week 5: Pointers and Standard Libraries
 - Pointers *(TODO)*
 - Standard Libraries *(TODO)*
 - **exercise**s *(TODO)*

## Week 6: Memory Allocation
 - *(TODO)*

## Week 7: Data Types
 - [Structs][structs-intro]
 - Unions *(TODO)*
 - Enums *(TODO)*
 - **exercise**s *(TODO)*

[structs-intro]: notes/data_structures/structs.md

## Week 8: Advanced Topic
 - Bitwise Operations or Buffer Overflow *(TODO)*

###Bonus Material:

- [C Snacks (Tips and Tricks)][c-snacks]

[c-snacks]: notes/intro/c_snacks.md
###Small Tools
 - [Small Tools Intro][small-tools-intro]
 - [Command Line Options & Arguments][command-line-options]
   - **Exercise:** [Tip Calculator][tip-calculator]
   - **Exercise:** [D&D Character Generator][character-generator]

[small-tools-intro]: notes/small_tools/small_tools_intro.md
[command-line-options]: notes/small_tools/command_line_options.md
[tip-calculator]: exercises/command_line_opts_args/tip_calculator.md
[character-generator]: exercises/command_line_opts_args/character_generator.md

###Resources

Much of the material for this course was drawn from the following:
 - ["The C Programming Language"][k-r-main] by Brian W. Kernighan and Dennis M.  Ritchie
 - ["Learn C The Hard Way"][learn-c-hard-way-main] by Zed Shaw

[k-r-main]: http://books.cat-v.org/computer-science/c-programming-language/The.C.Programming.Language.2nd.Edition.pdf
[learn-c-hard-way-main]: http://c.learncodethehardway.org/book/

###License
[MIT License][mit-license]

[mit-license]: ./MIT-LICENSE
