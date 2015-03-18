#Conditionals In C

## `if` and `else`
The syntax for conditionals in C is very common; many languages were influenced
by C.

```c
if (1) {
  printf("I will always print.");
}
else {
  printf("I will never print.");
}
```

If the expression within your conditional is **only** one line, then you may
omit the curly-braces:

```c
if (1)
  printf("I will always print.");
else
  printf("I will never print.");
  printf("I will ACTUALLY always print.");
```

Remember that in C, we use `0` as 'false' and any number that is *not* `0` as
'true'.

The `?` *ternary operator* provides an even more short-hand way to write this:
```c
(1) ? printf("I will always print.") : printf("I will never print.");
```

You may chain multiple `if` and `else` expressions together:

```c
int current_temperature = 90;

if (current_temperature == -10)
  printf("Brrrrrr!\n");
else if ((current_temperature > 50) && (current_temperature < 70))
  printf("Mmmm - just right.\n");
else
  printf("Getting toasty!\n");
```

**However** if you have many different cases to test then you may prefer a
`switch` statement.

##`switch`
A `switch` statement tests an expression against a series of constant integer
values. We could write a similar program to above as follows:

```c
int current_temperature = 90;

switch (current_temperature) {
  case -10: case -9: case -8: case -7: case -6: case -5: case -4: case -3: case
  -2: case -1: case 0:
    printf("Brrrrrr!\n");
    break;
  case 50:
  case 60:
  case 70:
    printf("Mmmm - just right.\n");
    break;
  case 90:
    printf("Getting toasty!\n");
    break;
  default:
    printf("It's a fine day.\n");
    break;
}

printf("Outside the switch~\n");
```

If the `current_temperature` is equal to the value following any `case`
statement, then the code beneath that `case` will execute. A `break` causes an
immediate exit from the `switch, and would jump to the line with `printf("Outside
the switch~\n");`. The above code would output:
> Getting toasty!
> Outside the switch~

**Reference:** ["The C Programming Language" Section 2.11][k-r-p51]

[k-r-p51]: http://www.iups.org/media/meeting_minutes/C.pdf#page=47
