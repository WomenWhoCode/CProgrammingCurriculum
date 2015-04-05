The computer's memory is an array of consecutively numbered (ie. addressed) memory cells.
For example, when we assign a string variable `char *my_string = "Foo";`, 
`my_string` is stored in a consecutive memory cells of 3 bytes total (1 byte of each letter).

A pointer is a variable that contains the address of another variable. Here's a hand-ons example.

```c
#include <stdio.h>
int main()
{
  char c = 'a'; // we create a new char variable
  char *p; // we declare a pointer (note the *) variable p which points to a char variable (note the 'char')

  p = &c; // The & operator gets the memory address of whatever follows it.
  // In this case, it's the memory address of the variable c.
  
  char q = *p; // The * operator gets the value of whatever is stored in the memory cell with the address that follows it
  // In this case, it's the value of whatever is stored in the memory cell with the address that is the value of p.

  printf("Here's the address of the variable 'c': %d\n", p);
  printf("Here's the value of the variable 'c': %c\n", c);
  printf("Here's the value of the variable 'q': %c\n", q);

  return 0;
}
```

Note the declaration and assignment of pointer `p` could have been more succinct: 
`char *p = &c` but I split it up in the above snippet to be more clear.

Running the above program, my computer printed this.
```
Here's the address of the variable 'c': 1395622779
Here's the value of the variable 'c': a
Here's the value of the variable 'q': a
```
Our computer's memory is just a massive array of consecutively numbered memory cells. When we created 
the char variable `c`, it stored it in the memory cell with the address: 139562279.
The value of the variable 'c' is 'a' because we assigned it that value; no suprise here.
The variable q was assigned to the dereferencing operator applied to the pointer p.
So instead of being assigned p's value of 139562279, it was assigned to the value stored at that location,
which was the char 'a'.

