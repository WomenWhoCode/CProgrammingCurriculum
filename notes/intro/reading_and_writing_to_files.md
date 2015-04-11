# Reading and Writing to Files

## Standard Input and Standard Output

When you use `scanf()` and `printf()`, they don't just read and write data to
the command line. These methods write to the
**Standard Input and Standard Output**. When a program runs, the operating
system creates the Standard Input and Standard Output streams to control the
flow of information in and out of the program. In our programs so far, these
have been hooked up to the keyboard, but using the `<` and `>` operators we can
tell the operating system to connect the Standard Input and Standard Output to
files.

For example, let's say we have a program that stretches out text by adding
spaces:

```c
#include <stdio.h>

int main()
{
  char c;
  c = getchar();
  while (c != EOF) {
    printf("%c ", c);
    c = getchar();
  }

  return 0;
}
```

Running this program the regular way will allow you to enter a message with the
keyboard, and then see the stretched version:

> gcc text_stretcher.c -o text_stretcher && ./text_stretcher
>
> foo bar baz
>
> f o o  b a r  b a z

To read a file and write the stretched version into another file, use the `<`
and `>` operators:

> ./text_stretcher < ./my_message.txt > ./stretched_my_message.txt

## Reading and Writing Files

> "The examples so far have all read the standard input and written the standard
> output, which are automatically defined for a program by the local operating
> system. The next step is to write a program that accesses a file that is *not*
> already connected to the program. One program that illustrates the need for such
> operations is `cat`, which concatenates a set of named files onto the standard
> output. ... For example, the command
>
>   `cat x.c y.c`
>
> prints th contents of the files `x.c` and `y.c` (and nothing else) on the
> standard output.
>
> The question is how to arrange for the named files to be read - ...
>
> The rules are simple. Before it can be read or written, a file has to be
> *opened* by the library function `fopen`. `fopen` takes an external name like
> `x.c` or `y.c`, does some housekeeping and negotiation with the operating system
> (details of which needn't concern us), and returns a pointer to be used in
> subsequent reads or writes of the file.
>
> This pointer, called the *file pointer*, points to a structure that contains
> information about the file, such as the location of the bugger, the current
> character position in the buffer, whether the file is being read or written, and
> whether errors or end of file have occurred. ...

```c
FILE *fp;
FILE *fopen(char *name, char *mode);
```

> This says that `fp` is a pointer to a `FILE`, and `fopen` returns a pointer to
> `FILE`. Notice that `FILE` is a type name, like `int`, not a structure tag; it
> is defined with `typedef`. ...
>
> The call to `fopen` in a program is

```c
fp = fopen(name, mode);
```

> The first argument of `fopen` is a character string containing the name of the
> file. The second argument is the *mode*, also a character string, which
> indicates how one intends to use the file. Allowable modes include read ("r"),
> write ("w"), and append ("a"). Some systems distinguish between text and binary
> files; for the latter, a "b" must be appended to the mode string.
>
> If a file that does not exist is opened for writing or appending, it is created
> if possible. Opening an existing file for writing causes the old contents to be
> discarded, while opening for appending preserves them. Trying to read a file
> that does not exist is an error, and there may be other causes of error as well,
> like trying to read a file when you don't have permission. If there is any
> error, `fopen` will return `NULL`. ...
>
> ... `getc` returns the next character from a file; it needs the file pointer to
> tell it which file.

```c
int getc(FILE *fp);
```

> ... `putc` writes the character c to the file `fp` and returns the character
> written, or `EOF` if an error occurs.

```c
int putc(int c, FILE *fp)
```

> For formatted input or output of files, the functions `fscanf` and `fprintf` may
> be used. These are identical to `scanf` and `printf`, except that the first
> argument is a file pointer that specifies the file to be read or written; the
> format string is the second argument."

```c
int fscanf(FILE *fp, char *format, ...)
int fprintf(FILE *fp, char *format, ...)
```

Example implementation of `cat`:

```c
#include <stdio.h>

/* cat: concatenate files, version 1 */
int main(int argc, char *argv[])
{
  FILE *fp;
  void filecopy(FILE *, FILE *);

  if (argc == 1) /* no args; copy standard input */
    filecopy(stdin, stdout);
  else
    while (--argc > 0)
      if ((fp = fopen(*++argv, "r")) == NULL) {
        printf("cat: can't open %s\n", *argv);
        return 1;
      } else {
        filecopy(fp, stdout);
        fclose(fp);
      }
  return 0;
}
```

## Gotchas
**You must use double quotes for the mode argument.**

If you get the following error:
> Incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *'

then the problem is you are passing an integer type (a single quoted char) instead of a string (double quotes).

**References:**

[Head First C][head-first-c] p. 109-112

[The C Programming Language, Chapter 7][k-r-p151]

[Working with files in C - gives incompatible integer to pointer conversion][s-o-file-read-error] from StackOverflow

[s-o-file-read-error]: http://stackoverflow.com/questions/25954982/working-with-files-in-c-gives-incompatible-integer-to-pointer-conversion-code

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
[k-r-p151]: http://www.iups.org/media/meeting_minutes/C.pdf#page=124
