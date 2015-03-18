#External Variables

In C, we call variables declared inside of a function *internal*, and variables
declared outside of all functions *external*. *Internal* variables are scoped to
the function in which they are declared. *External* variables are normally scoped
from their declaration to the end of the file in which they are defined.

To define a variable in one file, and use is somewhere else, you must declare it
in the second file with the `extern` keyword.

When declaring a variable with `extern`, storage is not allocated for it. That
only happens once, in the place where it is defined.

Example:
```c
// in file 1
int max_count = 100;
```

```c
// in file 2
extern int max_count;

for (int i = 0; i < max_count; i++) {
...
```

**References**:

[The C Programming Language][k-r-p80] Section 4.3

[Understanding the `extern` keyword in C][understanding-extern]

[k-r-p80]: http://www.iups.org/media/meeting_minutes/C.pdf#page=63
[understanding-extern]: http://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
