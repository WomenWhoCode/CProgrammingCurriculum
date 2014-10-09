#Data Types

##`Char`
Each character is stored as a character code.

##`Int`
An `int` is a general purpose type for storing whole numbers. The size of
the space available for an `int` varies by platform, but it will be at least
16 bits, so you can use it for numbers up to a few million.

They are `signed` by default, meaning they can store positive or negative numbers.
If you specify an int that is `unsigned`, it can store about twice as much, and
it will always be positive.
Example:

```c
unsigned char c;
```

##`Short`
A `short` is like an `int`, but only can store numbers up to a few thousands;
it takes about half the space of an `int`.

##`Long`
Similar to the way a `short` is just a smaller int, a `long` is like an `int`
but with at least 32 bits of storage. There is variation between machines in
how much storage is available for a long.

`long` can also be added before any other type (except `char`) to make it
get an extra large amount of data.

##`Float`
Unlike all the previous data types, a `float` stores floating point (decimal)
numbers.

##`Double`
A double takes up twice as much memory as a `float`, and it allows larger and
more precise numbers.

##Casting
You can "cast" some types into others:

```c
int x = 7;
int y = 2;
float z = (float)x / (float)y;
```
