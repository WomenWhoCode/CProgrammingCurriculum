#Learn To Code C

## Goals
 - Understand the topics listed in the curriculum.
 - Complete a [personal project][project-ideas] written in C.
 - Contribute to an [open source project that is written in
   C][open-source-c-projects].

[open-source-c-projects]: notes/meta/open_source_projects.md
[project-ideas]: notes/meta/project_ideas.md

## Prerequisites
 - [Familiarity with Command Line Interface][learn-cli] (`pwd`, `cd`, `ls`, `mkdir`, `rmdir`, `cp`, `mv`, `rm`)
 - [The compiler setup][c-setup]

[learn-cli]: http://cli.learncodethehardway.org/book/
[c-setup]: http://c.learncodethehardway.org/book/ex0.html

## Week 1: Compilation
 - [Why Learn C?][why-learn-c]
   - [Slides on "Why Learn C?"][daphne-slides-why-learn-c]
 - Compiling and Running C Programs
   - [gcc demo][gcc-demo]
   - [clang demo][clang-demo]
   - [clang versus gcc][clang-vs-gcc] from clang.llvm.org
 - [The "Main" Function][main]
 - **Exercises:**
   - [Hello World][hello-world]
   - [Formatted Printing][learn-c-hard-way-ex-3] from "Learn C The Hard Way"
     (Ignore the comments about using Make.)
   - [Fahrenheit to Celsius][k-r-p8] from "The C Programming Language" (Sections
     1.2-1.4)
   - [Fizz Buzz][fizz-buzz]
   - **Bonus:** [Euler Problem #1: Multiples of 3 and 5][euler-1]
   - **Bonus:** [Euler Problem #2: Even Fibonacci Numbers][euler-2]
   - **Bonus:** [Euler Problem #3: Largest Prime Factor][euler-3]


[why-learn-c]: notes/intro/why_learn_c.md
[daphne-slides-why-learn-c]: https://docs.google.com/presentation/d/18gWp1Lubwot9QB6nsrXT8Ds-0gX8bdqzmHxF8Gs9ZEo/edit?usp=sharing
[gcc-demo]: notes/intro/gcc-demo.md
[clang-demo]: notes/intro/clang-demo.md
[clang-vs-gcc]: http://clang.llvm.org/comparison.html#gcc
[main]: notes/intro/main_function.md
[hello-world]: exercises/intro/hello_world.md
[fizz-buzz]: exercises/intro/fizz_buzz.md
[learn-c-hard-way-ex-3]: http://c.learncodethehardway.org/book/ex3.html
[k-r-p8]: http://www.iups.org/media/meeting_minutes/C.pdf#page=11
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
   - **Exercise:** [Word Counter][k-r-p20] from "The C Programming Language" (Sections 1.5.1-1.5.2)
 - [Arithmetic Operations][arithmetic-operations] from "The C Programming Language" (Sections 2.5-2.6)
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
[k-r-p20]: http://www.iups.org/media/meeting_minutes/C.pdf#page=21
[arithmetic-operations]: notes/intro/arithmetic_operations.md
[learn-c-hard-way-ex-7]: http://c.learncodethehardway.org/book/ex7.html
[learn-c-hard-way-ex-9]: http://c.learncodethehardway.org/book/ex9.html
[arrays-and-strings-break-it]: https://github.com/Frederick-S/Learn-C-The-Hard-Way-Exercise/tree/master/Ex9
[learn-c-hard-way-ex-13]: http://c.learncodethehardway.org/book/ex13.html
[learn-c-hard-way-ex-10]: http://c.learncodethehardway.org/book/ex10.html
[learn-c-hard-way-ex-11]: http://c.learncodethehardway.org/book/ex11.html

## Week 3: Basics Part 2
 - [Syntax Review][syntax-review]
 - [Type Conversion][k-r-p42] from "The C Programming Language" (Section 2.7)
 - [Getting User Input][getting-user-input]
 - **Exercises:**
   - [Sizes and Arrays][learn-c-hard-way-ex-8] from "Learn C The Hard Way"
   - [Writing and Using Functions][learn-c-hard-way-ex-14] from "Learn C The Hard Way"
   - **Project:** [Make a Game][game-project]
   - **Bonus:** [Recursion Exercise][k-r-p86] from "The C Programming Language" (Section 4.10)

[syntax-review]: notes/intro/syntax_review.md
[k-r-p42]: http://www.iups.org/media/meeting_minutes/C.pdf#page=40
[getting-user-input]: notes/intro/getting_user_input.md
[learn-c-hard-way-ex-8]: http://c.learncodethehardway.org/book/ex8.html
[learn-c-hard-way-ex-14]: http://c.learncodethehardway.org/book/ex14.html
[game-project]: projects/make_a_game.md
[k-r-p86]: http://www.iups.org/media/meeting_minutes/C.pdf#page=73

## Week 4: C Specific Basics
 - [C Libraries][c-libraries]
 - [Using multiple files in a project][using-mult-files]
 - [Advanced Compilation][advanced-compilation]
   - **Exercise:** [Variations of Fizz Buzz][fizz-buzz-variations]
 - [External Variables][external-variables]
   - **Exercise:** [RPN Calculator][k-r-p74] from "The C Programming Language" (Sections 4.3-4.6)
 - [`make` and Makefiles][make-files]
   - **Exercise:** [Make some Makefiles][makefile-exercise]
 - [reading and writing to files][reading-and-writing-to-files]
   - **Exercise:** [Caesar Cipher][caesar-cipher]

[c-libraries]: notes/intro/libraries_intro.md
[using-mult-files]: notes/organizing_code/using_multiple_files.md
[advanced-compilation]: notes/organizing_code/advanced_compilation.md
[external-variables]: notes/intro/external_variables.md
[fizz-buzz-variations]: exercises/organizing_code/fizz_buzz_variations.md
[k-r-p74]: http://www.iups.org/media/meeting_minutes/C.pdf#page=64
[make-files]: notes/organizing_code/make_files.md
[makefile-exercise]: exercises/organizing_code/makefiles.md
[reading-and-writing-to-files]: notes/intro/reading_and_writing_to_files.md
[caesar-cipher]: exercises/organizing_code/caesar_cipher.md

## Week 5: Pointers and Standard Libraries
 - Pointers:
   - [Pointers and Memory][pointers-memory]: Hands-on example of pointers and memory
   - [Chapter 5: Pointers and Arrays][k-r-p93] from "The C Programming Language" (Chapter 5)
   - [Pointers Dreaded Pointers][learn-c-hard-way-ex-15] from "Learn C The Hard Way"
   - [Pointers to Functions][learn-c-hard-way-ex-18] from "Learn C The Hard Way"
   - [Example: Caesar Cipher using Pointers][caesar-cipher-with-pointers]
   - [Slides on Pointers and Memory][zoe-slides-pointers-mem] from our lightning talk (Thanks @hazmatzo)
 - Standard Libraries:
   - [C Standard libraries][wikibook-c-standard-libraries] from Wikibooks "C Programming"
   - [Appendix B. Standard Library][k-r-p-241] from "The C Programming Language" (Appendix B.)

[pointers-memory]: notes/pointers/pointers_memory.md
[zoe-slides-pointers-mem]: https://docs.google.com/presentation/d/1okgHQMeEjSSEBe-6pg5BnSgQtutKi_Uc6dU0yXVLwUs/edit?usp=sharing
[k-r-p93]: http://www.iups.org/media/meeting_minutes/C.pdf#page=78
[learn-c-hard-way-ex-15]: http://c.learncodethehardway.org/book/ex15.html
[learn-c-hard-way-ex-18]: http://c.learncodethehardway.org/book/ex18.html
[caesar-cipher-with-pointers]: http://www.thegeekstuff.com/2014/08/c-caesar-cipher-example/
[wikibook-c-standard-libraries]: http://en.wikibooks.org/wiki/C_Programming/Standard_libraries
[k-r-p-241]: http://www.iups.org/media/meeting_minutes/C.pdf#page=200

## Week 6: Memory Allocation
 - [Allocating Memory with `malloc`][malloc-k-n-r-notes]: summary of sections 5.4, 5.6, 6.5, and 7.8.5 from "The C Programming Language"
 - [Freeing Memory][freeing-memory-k-n-r-notes]: continued summary of memory management
 - [Reference Documentation for Malloc][wikibooks-malloc] from Wikibooks "C Programming"
 - [Memory Allocation Intro Slides][mem-allocation-intro-slides] from U of Washington
 - [C Memory Management Examples][tutspoint-c-mem-management] from TutorialsPoint
 - **Exercises:**
   - [Reimplementing `malloc` and `free`][k-n-r-section-5-4] from "The C Programming Language" (Section 5.4)
   - [Reversing User Input Tutorial][reverse-user-input-tut] Dynamic Array Example/Tutorial from CodeCall Forum

[tutspoint-c-mem-management]: http://www.tutorialspoint.com/cprogramming/c_memory_management.htm
[wikibooks-malloc]: http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdlib.h/malloc
[malloc-k-n-r-notes]: https://www.eskimo.com/~scs/cclass/notes/sx11a.html
[freeing-memory-k-n-r-notes]: https://www.eskimo.com/~scs/cclass/notes/sx11b.html
[mem-allocation-intro-slides]: https://d396qusza40orc.cloudfront.net/hardware/lecture_slides/10/101-memallocation-intro.pdf
[k-n-r-section-5-4]: http://www.iups.org/media/meeting_minutes/C.pdf#page=84
[reverse-user-input-tut]: http://forum.codecall.net/topic/51010-dynamic-arrays-using-malloc-and-realloc/

## Week 7: Data Types
 - [Structs][structs-intro]
 - [TypeDef][k-n-r-section-6-7] from "The C Programming Language" section 6.7
 - [Unions][unions-intro]
 - [Enums][enums-intro]
 - [Slides on Data Structures][data-structures-slides]
 - **Bonus Reading:**
   - [More about Structs][k-n-r-section-6-1] from "The C Programming Language" sections 6.1-6.2
   - [More about Unions][k-n-r-section-6-8] from "The C Programming Language" section 6.8
 - **Exercises:**
   - [Structs and Pointers To Them][learn-c-hard-way-ex-16] from "Learn C The Hard Way"
   - [Arrays of Structures][k-n-r-section-6-3] from "The C Programming Language" section 6.3
 - **Bonus:**
   - [Pirate Treasure Game Tutorial][pirate_treasure_tutorial]
   - [Heap and Stack Memory Allocation][learn-c-hard-way-ex-17] (uses Structs) from "Learn C The Hard Way"
   - [A Simple Object System][learn-c-hard-way-ex-19] (Uses Enum, Struct) from "Learn C The Hard Way"
   - [Input, Output, Files][learn-c-hard-way-ex-24] (Uses Enum, Struct) from "Learn C The Hard Way"

[structs-intro]: notes/data_structures/structs.md
[unions-intro]: notes/data_structures/unions.md
[enums-intro]: notes/data_structures/enums.md
[data-structures-slides]: https://docs.google.com/presentation/d/1P6h0GR8lIUpzSX3UwcczoXdErvq_uhGNtMKjmBxykM0/edit?usp=sharing
[pirate_treasure_tutorial]: projects/pirate_treasure_game_tutorial.md
[k-n-r-section-6-1]: http://www.iups.org/media/meeting_minutes/C.pdf#page=105
[k-n-r-section-6-3]: http://www.iups.org/media/meeting_minutes/C.pdf#page=109
[k-n-r-section-6-7]: http://www.iups.org/media/meeting_minutes/C.pdf#page=119
[k-n-r-section-6-8]: http://www.iups.org/media/meeting_minutes/C.pdf#page=120
[learn-c-hard-way-ex-16]: http://c.learncodethehardway.org/book/ex16.html
[learn-c-hard-way-ex-17]: http://c.learncodethehardway.org/book/ex17.html
[learn-c-hard-way-ex-19]: http://c.learncodethehardway.org/book/ex19.html
[learn-c-hard-way-ex-24]: http://c.learncodethehardway.org/book/ex24.html

## Week 8: Advanced Topic
 - **Binary Numbers:**
   - [Intro to Binary and Hexadecimal Number Systems][intro-to-binary-khan-academy] :movie_camera: from Khan Academy (for those who are not familiar with binary) **or**
   - [Binary Numbers Slides][binary-numbers-slides-bu] from Boston University CS101
 - **Bitwise Operators:**
  - [Bitwise Operators in C][bitwise-operators-tut] from TutorialsPoint
  - [Bitwise Operators][k-n-r-section-2-9] Section 2.9 from The C Programming Language
 - **Exercises:**
   - :sparkles: [Twiddling Bits Challenge Part 1][bitwise-cmu-lab-part1] :sparkles:
 - **Two's Compliment:**
  - [Two's Compliment][twos-compliment-notes]
 - **More Exercises:**
   - :sparkles: [Twiddling Bits Challenge Part 2][bitwise-cmu-lab-part2] :sparkles:


[binary-numbers-slides-bu]: http://www.cs.bu.edu/courses/cs101/old/2013spring/slides/CS101.03.BinaryNumbers.ppt.pdf
[intro-to-binary-khan-academy]: https://www.khanacademy.org/math/pre-algebra/applying-math-reasoning-topic/alternate-number-bases/v/number-systems-introduction
[bitwise-cmu-lab-part1]: projects/twiddling_bits/twiddling_bits_lab_part_1.md
[bitwise-cmu-lab-part2]: projects/twiddling_bits/twiddling_bits_lab_part_2.md
[bitwise-operators-tut]: http://www.tutorialspoint.com/cprogramming/c_bitwise_operators.htm
[k-n-r-section-2-9]: http://www.iups.org/media/meeting_minutes/C.pdf#page=45
[twos-compliment-notes]: http://www.cs.cornell.edu/~tomf/notes/cps104/twoscomp.html

##Bonus Material:

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

##Resources

Much of the material for this course was drawn from the following:
 - ["The C Programming Language"][k-r-main] by Brian W. Kernighan and Dennis M.  Ritchie
 - ["Learn C The Hard Way"][learn-c-hard-way-main] by Zed Shaw

[k-r-main]: http://www.iups.org/media/meeting_minutes/C.pdf
[learn-c-hard-way-main]: http://c.learncodethehardway.org/book/

## How to Host This Event
[Tips for Running This Series][hosting-tips]

[hosting-tips]: ./notes/meta/how_to_host.md

##License
[MIT License][mit-license]

[mit-license]: ./MIT-LICENSE
