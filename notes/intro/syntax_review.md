#C Syntax Review

```c
#include <stdio.h> // <- Imports the "stdio" library
// "stdio" stands for "Standard Input and Output", and gives us functions like
// 'printf' and 'scanf'.

// "int" below is the type returned by this function
int main(int argc, char *argv[]) // <- "main" is the function that your program runs
{
  // Above, we name the arguments of the "main" function. "main" is special
  // because it gets any arguments entered on the command line in an array as
  // it's second argument, and the number of command line arguments as it's
  // first argument.
  // The name of the program will always appear as the first command line
  // argument.


  // Below we print out the command line arguments:
  int i; // <- Notice we always have a "type declaration", which here is "int".
  for (i = 0; i < argc; i++) { // <- the "for" loop executes the block repeatedly
  // until the condition "i < argc" is false
    printf("Command line arg %d: %s\n", i, argv[i]); // <- formatted printing
    // Above, the "%d" and "%i" will be replaced with the values of "i" and "argv[i]"
  }

  return 0; // <- Remember how we said "int main" earlier?
  // That meant that this function would return an integer.
  // In C, returning 0 from main is the convention for saying the program
  // finished successfully. To indicate an error, return 1.
}
```
