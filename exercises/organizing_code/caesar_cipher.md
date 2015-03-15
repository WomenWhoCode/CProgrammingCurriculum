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
want another program to do encoding using your Caesar cipher; this one will
read a file from a filename passed on the command line, and then write an
output file with the encoded message. You will want to reuse the function
performing the encryption between the two programs; put it in a separate file,
and use a *header file* to include it in both your encoding programs.

# Extra Credit
 - Make your program handle numbers and symbols by not changing them, using `isalpha`
 - Handle lower and upper case letters using `islower` and/or `isupper`
 - Handle errors (see [section 7.6 of "The C Programming Language"][k-r-p163])

[reading-and-writing-to-files]: ../../../notes/intro/reading_and_writing_to_files.md
[caesar-cipher-wikipedia]: http://en.wikipedia.org/wiki/Caesar_cipher
[k-r-p163]: http://www.iups.org/media/meeting_minutes/C.pdf#page=133
[using-mult-files]: ../../notes/organizing_code/using_multiple_files.md
