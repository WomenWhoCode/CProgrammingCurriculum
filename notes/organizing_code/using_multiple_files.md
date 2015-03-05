#Using Multiple Files

##Maintaining Order

When the compiler reads your code, the order in which you define your functions
can cause issues. Take the following example:

```c
#include <stdio.h>

int main()
{
  float magic_number = get_magic_number();

  printf("The magic number is %f\n", magic_number);

  return 0;
}

float get_magic_number() {
  return 7.0;
}
```

The compiler will complain about this program because we call the function
`get_magic_number` before it is declared.

In this simple example, we can fix the problem by just changing the order or the
functions, so that `float get_magic_number() { ...` comes before
`int main() ...`.

We can also declare the function `get_magic_number` before actually defining it.
Like so:

```c
#include <stdio.h>

float get_magic_number(); // declaration

int main()
{
  float magic_number = get_magic_number();

  printf("The magic number is %f\n", magic_number);

  return 0;
}

float get_magic_number() { // definition
  return 7.0;
}
```

Splitting out the function declarations and putting them at the top of your file
means you don't have to worry about keeping the definitions in the right order
later.

##Header Files

The function declarations which you can put at the top of your program can be
pulled out of your code and put in a separate file, called a **header file**.

When we write `#include <stdio.h>` at the top of a C program, that is including
the `stdio` header file.

To include a local header file, we would use double-quotes instead of angle
brackets, like so: `#include "my_header_file.h"`.

##Using Header Files
To start with a trivial example, let's break out header files for the functions
in this version of Fizz Buzz:

```c
// fizz_buzz.c
#include <stdio.h>

void fizz();
void buzz();

int main()
{
  int did_fizz_or_buzz = 0;

  int i;
  for(i = 0; i < 100; i++) {
    printf("i = %d\n", i);
    if (i % 3 == 0) {
      fizz();
      did_fizz_or_buzz = 1;
    }
    if (i % 5 == 0) {
      buzz();
      did_fizz_or_buzz = 1;
    }

    if (!did_fizz_or_buzz) {
      printf("%d", i);
    }

    printf("\n");
  }
}

void fizz() {
  puts("fizz");
}

void buzz() {
  puts("buzz");
}
```

A header file ends in a `.h` extension. Save each of the function definitions in
their own header file:

```c
// fizz.h
void fizz();
```

```c
// buzz.h
void buzz();
```
Now you can replace the function definitions in `fizz_buzz.c` by including the
header files:

```c
// fizz_buzz.c
#include <stdio.h>
#include "fizz.h"
#include "buzz.h"

int main()
{
  int did_fizz_or_buzz = 0;

  int i;
  for(i = 0; i < 100; i++) {
    printf("i = %d\n", i);
    if (i % 3 == 0) {
      fizz();
      did_fizz_or_buzz = 1;
    }
    if (i % 5 == 0) {
      buzz();
      did_fizz_or_buzz = 1;
    }

    if (!did_fizz_or_buzz) {
      printf("%d", i);
    }

    printf("\n");
  }
}

void fizz() {
  puts("fizz");
}

void buzz() {
  puts("buzz");
}
```

Compiling and running the version of Fizz Buzz that has header files will work
exactly the same as usual.

##Sharing Code

A header file can also allow you to split code into modules and reuse it between
projects. To pull shared code into a separate file:

1. Move the function declarations to a header file.

2. Move the function definitions to a separate `.c` file.

3. Require the header files in your main program file.

4. When you compile the program, list all the `.c` files you need.

Here is how we would make our `fizz` and `buzz` functions into reusable modules:

```c
// fizz.h
void fizz();
```

```c
// buzz.h
void buzz();
```

```c
// fizz.c
#include <stdio.h>

void fizz() {
  puts("fizz");
}
```

```c
// buzz.c
#include <stdio.h>

void buzz() {
  puts("buzz");
}
```

```c
// fizz_buzz.c
#include <stdio.h>
#include "fizz.h"
#include "buzz.h"

int main()
{
  int did_fizz_or_buzz = 0;

  int i;
  for(i = 0; i < 100; i++) {
    printf("i = %d\n", i);
    if (i % 3 == 0) {
      fizz();
      did_fizz_or_buzz = 1;
    }
    if (i % 5 == 0) {
      buzz();
      did_fizz_or_buzz = 1;
    }

    if (!did_fizz_or_buzz) {
      printf("%d", i);
    }

    printf("\n");
  }
}
```

To compile the program with 'gcc':
> gcc fizz_buzz.c fizz.c buzz.c -o fizz_buzz

**Reference:**
These notes inspired by [Head First C][head-first-c], p. 168-184

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
