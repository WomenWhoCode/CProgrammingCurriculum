##Command Line Options

Command line options are flags or configurations that are listed after the name
of the program when you call it on the command line. The `-a` option can be
used with the `ls` program to show even hidden files:

```
ls -a
```

##Command Line Arguments

When your program only needs one or more strings of the same type, (a list of
filenames to read from, or a name to use for saving output), then use command
line arguments. An example of this would be when you specify the name when
calling the `mkdir` program from the command line:
```
mkdir my_file
```

### Reading Command Line Arguments

To access the command line arguments, your [main function][] must take parameters:

```c
int main(int argc, char *argv[])
{
 //...
 // Access elements of argv as follows:
 argv[0] // Will be the name of your program as called on the command line
 argv[1] // Will be the first command line argument
 argc // Gives the length of the argv array
}
```

### Reading Command Line Options

```c
int main(int argc, char *argv[])
{
  // You can loop through the options using getopt
  // "ae:" here are the allowed command line options
  // the ":" means that it takes an additional argument
  while ((ch = getopt(argc, argv, "ae:")) != EOF) {
    switch(ch) {
      case 'a':
        // do something
        break;
      case 'e':
        // do something with optarg
        break;
      default:
        fprintf(stderr, "unknown option: '%s'\n", optarg);
        return 1;
    }

    // The following incrementations allow you to cycle through the options:
    argc -= optind;
    argv += optind;
  }
}
```

| Command Line Options     | Command Line Arguments                                  |
| ------------------------ | ------------------------------------------------------- |
| Configurations, settings | Provides variable data to the program (often filenames) |
| Listed first             | Listed second, after the command line options (if any)  |
| Prefaced with a '-'      | No special format (Optionally preface with '---' to separate from options) |


# Separating the Command Line Options and Command Line Arguments
The program identifies the command line options by their leading `-`, but what
if you need to pass a commend line *argument* (not an option) that begins with
  a `-`?

In that case, use `--` to separate the command line options from the command
line arguments.

```
> ./set_temperature -c -- -4
```
[command-line-args]: ./command_line_arguments.md
