#Strings in C

All strings in C are:
 * Stored as an array of characters
 * End with a 'sentinal' character (Null character which is `/0` in ASCII)
 * Use single quotes for single characters, double quotes for longer strings

###String Literals
```C
char *s = "string literal"
```

 * Immutable (can't be changed after assignment.)
 * Stored in 'Read Only' memory, so you can't pass it around.

###Character Arrays
```C
/* To store three initials, we need an array of length 4 */
/* Because of the 'sentinal' character */
char initials[4]
initials[0] = 'A'
initials[1] = 'B'
initials[2] = 'C'

/* Shorthand: */
char initials[] = "ABC";
```

 * Character arrays are mutable (_can_ be changed after assignment), but have a static length.
