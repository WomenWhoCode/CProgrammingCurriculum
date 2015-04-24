#Unions

A union can be used to create a variable that supports different data types.

Example:

Let's say we want to create a struct representing an order of fruit.

We have three fruit orders to represent:
 - 6 apples
 - 1.5 lbs of strawberries
 - 0.5 pints of orange juice

When defining the `fruit_order` struct, we have one value (quantity) that can
be either an integer or a floating point.

```c
struct fruit_order {
  const char* fruit_type;
  ??? quantity; // Should we use int or float?
};
```

We could just use a float, but in the case of apple orders it makes sense to
restrict the value to whole integers.

To represent quantity as either an integer **or** a float, we use a `union`.

```c
// This defines a `quantity` as either a count, a weight, or a volume.
union {
  short count;
  float weight;
  float volume;
} quantity
```

This means that `quantity` can hold a `short` **or** a `float`. It will
still only hold one value.

## Setting the value of a union
There are three different ways to set the value of a union:

 * C89 style for the first field
```c
quantity = {4};
```
 * **Designated initializers** set any value
```c
quantity = {.weight=1.5};
// or
quantity = {.volume=.15};
```
 * Dot notation
```c
quantity.volume = 3.7;
```

## Union Example
```c
#include <stdio.h>
#include <stdlib.h>

// Create a struct with a nested union
typedef struct {
  const char* type;
  union {
    short count;
    float weight;
    float volume;
  } quantity;
  char quantity_type; // 'c' for count, 'w' for weight, 'v' for volume
} fruit_order;

void print_fruit_order(fruit_order this_order) {
  if (this_order.quantity_type == 'c') {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %i\n", this_order.type, this_order.quantity.count);
  } else if (this_order.quantity_type == 'w') {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.weight);
  } else if (this_order.quantity_type == 'v') {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.volume);
  }
};

// fruit order program
int main() {
  // create three fruit orders
  fruit_order apples = {"apples", 6, .quantity_type='c'};
  fruit_order strawberries = {"strawberries", .quantity.weight=1.5, .quantity_type='w'};
  fruit_order orange_juice = {"orange juice", .quantity.volume=0.5, .quantity_type='v'};

  // print out the fruit orders
  print_fruit_order(apples);
  print_fruit_order(strawberries);
  print_fruit_order(orange_juice);

  return 0;
};
```

## Gotchas
 - C++ does **not** support the *designated initializer* syntax.
 - Once you store a value in a union, **you have no way of knowing what type it is.**

How could we store a reference to what type has been chosen for a given
instance of a `union`? [Perhaps we could use an `enum`][enum-notes]

##References:
 - Examples from [Head First C][head-first-c-book], p.246-254

[head-first-c-book]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
[enum-notes]: enums.md
