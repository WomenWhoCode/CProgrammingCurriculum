#Find the Pirate's Treasure

The goal is to make a simple command line game about guessing where a pirate's
treasure is buried. The rules:

1. The "treasure" is assigned random x and y coordinates within a 3x3 map.

2. The player gets 5 guesses to pick the correct x and y coordinates.

The size of the map and the number of guesses are arbitrary numbers, and they
determine the difficulty of the game.

## Let's Build It!

1. Set up your file with the `.c` extension, include the standard input and
output library `stdio.h`, and create the `main` function to contain your code.

2. It makes sense to use a [struct][struct-notes] to store pairs of x and y
coordinates in our code. We are following an example straight out of
"The C Programming Language":

```c
struct point {
  int x;
  int y;
};
```

2. For now we can always assign the treasure to the coordinates 1,2. That
will make testing easier. Create an instance of a struct called
`treasure_point` with coordinates of 1,2.

3. We'll want to compare the user's guess to the `treasure_point` and
see if they are equal. It won't work to simply say
`user_guess === treasure_point`; we need to compare
`(user_guess.x === treasure_point.x) && (user_guess.y === treasure_point.y)`.

Let's make a function that takes to `point` structs and compares them, returning
`1` if they match and `0` if they don't match.

4. For every user turn, we want to:
 - Get their guess
 - Save it in a `point` struct
 - Compare it to the `treasure_point`
 - If it matches, stop the game and print `YARR! YE BE A WINNER` message.
 - If it's not a match, keep looping through turns until they have run out of
   guesses.


## Hints

 - **Getting a number from user input** is easy with `scanf`:

 ```c
 int guessed_x;
 scanf("%d", &guessed_x);
 ```

 - For the numbers we use that are arbitrary and never change, we should store
   them in constants to avoid having [magic numbers][magic-numbers-info] in our
   code.

```c
#define MAP_WIDTH 3
#define TOTAL_GUESSES 5
```

[magic-numbers-info]: http://en.wikipedia.org/wiki/Magic_number_%28programming%29#Unnamed_numerical_constants


**Solution:** [Pirate Treasure Game][pirate-treasure-game]

## Bonus
 - Randomly assign the treasure's location.
 - Print out a list of previously guessed locations.
 - Re-prompt the user if they guess the same location twice in a row.
 - Print a map showing guessed locations crossed out.

[structs-intro]: ../../notes/data_structures/structs.md
[pirate-treasure-game]:
../../solutions/pirate_treasure_game.c
