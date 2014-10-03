#Command Line Options

Command line options are flags or configurations that are listed after the name
of the program when you call it on the command line. The `-a` option can be
used with the `ls` program to show even hidden files:

```
ls -a
```

#Command Line Arguments

When your program only needs one or more strings of the same type, (a list of
filenames to read from, or a name to use for saving output), then use command
line arguments. An example of this would be when you specify the name when
calling the `mkdir` program from the command line:
```
mkdir my_file
```

| Command Line Options     | Command Line Arguments                                  |
--------------------------------------------------------------------------------------
| Configurations, settings | Provides variable data to the program (often filenames) |
| Listed first             | Listed second, after the command line options (if any)  |
| Prefaced with a '-'      | No special format (Optionally preface with '---' to separate from options) |

[command-line-args]: ./command_line_arguments.md