#Printing

##`getchar` and `putchar`
Each time `getchar()` is called, it reads the *next input character* from the
text stream. In our command line programs, the stream of text input will come
from a user typing into the terminal.
```c
// Reads a character entered from the keyboard
c = getchar();
```

To print characters one at a time, use `putchar()`.
```c
// If the variable 'c' is a character, it will print that character to the
// terminal output.
putchar(c);
```

##`puts`
To print out a statement on the command line, `puts` will do the trick.
```c
puts("Hello world.");
```

##`printf`
The `printf()` function is used to display **formatted output**. It replaces
format characters with the values of variables.
```c
printf("My favorite integer is %i", 7);
```
You can include as many parameters as you like when calling `printf()`,
but make sure you have a matching % format character for each one.
