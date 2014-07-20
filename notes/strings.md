#Strings in C

All strings in C are:
 * Stored as an array of characters
 * End with a 'sentinal' character (Null character which is `/0` in ASCII)
 * Use single quotes for single characters, double quotes for longer strings

###String Literals
```C
s = "string literal"
```

 * Immutable (can't be changed after assignment.)

###Character Arrays
```C
/* To store three initials, we need an array of length 4 */
/* Because of the 'sentinal' character */
char initials[4]
initials[0] = 'J'
initials[1] = 'A'
initials[2] = 'M'
```

 * Character arrays are mutable, but have a static length.
