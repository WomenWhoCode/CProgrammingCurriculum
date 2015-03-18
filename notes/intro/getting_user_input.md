#Getting User Input

##`getchar()` and `putchar()`
`getchar()` reads the next character from the text stream, which in our examples
is the keyboard input.
`putchar(c)` will print out the character `c`.
Example:
```c
int main() {
  char c;
  c = getchar();
  puts("The first character was:");
  putchar(c);
  return 0;
}
```

This can be used for looping through command line input one character at a time:
```c
int main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }

  return 0;
}
```
When running the above type of example, remember that you can trigger an 'EOF'
(End Of File symbol) by
[entering Ctrl-D on a line by itself. On Windows enter Ctrl-Z.][how-to-enter-eof]

[how-to-enter-eof]: http://stackoverflow.com/questions/11857148/the-c-programming-language-book-example-maybe-out-of-date

Reference: [The C Programming Language section 1.4][k-r-p15], p.15

[k-r-p15]: http://www.iups.org/media/meeting_minutes/C.pdf#page=17

##`scanf()`
Example:
```c
int main() {
  char name[11]; // We want to store 10 characters, plus the string terminator
  puts("Enter your name: ");
  // scanf will save the first 10 characters of input entered into 'name'
  scanf("%10s", name);
  printf("Hello %s!\n", name);

  return 0;
}
```
**Always specify the string length when using `scanf()`.**

###Good:
```c
scanf("%10s", name);
```

###BAD:
```c
// Antipattern!
scanf("%s", name);
```

###How to break it
Try using `scanf` without a character limit, and giving it more characters than
the variable can hold.

It will cause the program to write more data into the character array than it
can hold, and this leads to a crash.

##`fgets()`
With `fgets()`, you must always pass the length of your buffer:
```c
int main() {
  char name[11]; // We want to store 10 characters, plus the string terminator
  puts("Enter your name: ");
  // fgets will save the first 10 characters of input entered into 'name'
  // params: pointer to a buffer, max size, and the source of the data
  fgets(name, sizeof(name), stdin);
  // "stdin" just means the data will come from the keyboard
  printf("Hello %s!\n", name);

  return 0;
}
```

##`scanf()` vs. `fgets()`

|                                | `scanf()`                                          | `fgets()`                         |
| ------------------------------ | -------------------------------------------------- | --------------------------------- |
| Setting character limits       | `scanf` gives you the option                       | `fgets` requires you pass a limit |
| Can you enter multiple fields? | Yes, and you may enter complex data strutures too  | Only one thing at a time, and only strings |
| Can the string contain spaces? | No; `scanf` will stop reading when it hits a space | Yes; `fgets` reads the whole string |

## Avoid `gets()`

The function `fgets()` is a safer, newer version of `gets()`, which has no way
to limit the character input.

**Always prefer `fgets()` to `gets()`.**

Reference: [Head First C][head-first-c], p. 66-68

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
