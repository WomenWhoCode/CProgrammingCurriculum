#Loops

##`while`

```c
// calling do_thing 10 times
int value = 0;
int max = 10;
while (value <= max) {
  do_thing();
  value++;
}
```

##`for`
```c
// calling do_thing 10 times
int i;
int n = 10;
for (i = 0; i < n; i++) {
  do_thing();
}
```
##`do` `while`
This is useful for cases where the body of the conditional must be executed at
least once.
```c
// calling do_thing once, even if n is 0
int n = 0;
do {
  do_thing();
}
while (n);
```

##`break`
This keyword will exit from any surrounding `for`, `while`, `do`, or `switch`
statement.
```c
// Only calls do_thing once, and then exits loop
while (1) {
  do_thing();
  break;
}
```

##`continue`
The `continue` keyword will skip to the next iteration of a
surrounding loop.
```c
// Only prints odd numbers
int i;
int n = 10;
for (i = 0; i < n; i++) {
  if ((i % 2) == 0)
    continue;

  printf("%d", i);
}
```

##`Goto`; an antipattern
The use of `goto` should be avoided, but be aware that it exists.
```c
// When we hit the first odd number
// jump to the label and handle the error
int i;
int n = 10;
for (i = 0; i < n; i++) {
  if ((i % 2) == 0)
    goto error;

  printf("%d", i);
}

error:
  printf("We encountered an odd number.");
```

You can always achieve the same functionality without using `goto`.

**Reference:** ["The C Programming Language" sections 3.5-3.8][k-r-p60]

[k-r-p60]: http://www.iups.org/media/meeting_minutes/C.pdf#page=53
