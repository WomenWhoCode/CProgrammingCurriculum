# Caesar Cipher

## Reading and Writing Files

We just learned about
[how to read and write to files with C][reading-and-writing-to-files].
Write a program that uses Standard Input and Standard Output to take a message
and encode it using a simple [Caesar cipher][caesar-cipher-wikipedia]. So, you
should be able to redirect file input to your program:

```
> ./caesar_cipher_encode < ./my_message.txt > ./encoded_my_message.txt
```

*and* you should be able to encode keyboard input and print to the terminal:

(arbitrarily assumming you're shifting right by three letters)
```
> ./caesar_cipher_encode
> foo bar baz
> irr edu edc
```

# Code Reuse
We just learned about [using multiple files][using-mult-files]. Let's say we
want another program to do encoding using your Caesar cipher; we need to split 
the 'encode' function into a separate file to be shared.

Remember the steps for sharing code:

1. Move the function declarations to a header file.
2. Move the function definitions to a separate .c file.
3. Require the header files in your main program file.
4. When you compile the program, list all the .c files you need.

The other program to use your encoding function will
[read a file][read-file-notes] from a filename [passed on the command line][command-line-args-notes], and then write an
output file with the encoded message. You will want to reuse the function
performing the encryption between the two programs; put it in a separate file,
and use a *header file* to include it in both your encoding programs.

[read-file-notes]: https://github.com/LearnToCodeC/CProgrammingCurriculum/blob/master/notes/intro/reading_and_writing_to_files.md#reading-and-writing-files
[command-line-args-notes]: https://github.com/LearnToCodeC/CProgrammingCurriculum/blob/master/notes/small_tools/command_line_options.md#reading-command-line-arguments

# Extra Credit
 - Make your program handle numbers and symbols by not changing them, using `isalpha`
 - Handle lower and upper case letters using `islower` and/or `isupper`
 - Handle errors (see [section 7.6 of "The C Programming Language"][k-r-p163])

**Solution:** [Caesar Cipher][caesar-cipher-solution]

[reading-and-writing-to-files]: ../../notes/intro/reading_and_writing_to_files.md
[caesar-cipher-wikipedia]: http://en.wikipedia.org/wiki/Caesar_cipher
[k-r-p163]: http://www.iups.org/media/meeting_minutes/C.pdf#page=133
[using-mult-files]: ../../notes/organizing_code/using_multiple_files.md
[caesar-cipher-solution]:
../../solutions/code_organization/caesar_cipher
