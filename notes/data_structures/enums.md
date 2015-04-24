# Enums

An `enum` is an alternative to using `define` to create a constant. Example:

```c
#define YES 1
#define NO 0

// is the same as:
enum boolean { NO, YES }; // assigns NO = 0
                          // and YES = 1
                          // based on their order
// is the same as:
enum boolean { YES = 1, NO = 0 };
```

If you have a limited set of symbols to choose from for a value, this can come
in handy. Like for dates:
```c
enum weekdays { SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
                THURSDAY, FRIDAY, SATURDAY };

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
              JUL, AUG, SEP, OCT, NOV, DEC };
```

When we assign the first item to 1, (`JAN = 1`), then the others auto-increment
such that `FEB = 2`, `MAR = 3`, etc.

## Why Use Enum?

It may seem just as efficient to use `define` as to use `enum`.
However, if you have a long list of items which you want to assign numbers to,
and you may want to add or change items in the list, then it's much easier to
manage with enum.

```c
#define HEARTS 0
#define STARS 1
#define HORSESHOES 2
#define CLOVERS 3
#define RAINBOWS 4
```
To insert 'BLUEMOONS' into the above list after 'HORSESHOES', you would also
need to update the values of 'CLOVERS' and 'RAINBOWS' to keep the numbers in
sequential order.

```c
enum { HEARTS = 0, STARS, HORSESHOES, CLOVERS, RAINBOWS }
```
The `enum` equivalent reduces our 5 lines of code down to one line, and we can
insert 'BLUEMOONS' into the list without updating any values at all.

---

In our example of using a `union` inside of a `struct`, we were using a
character in the `struct` to keep track of what data type the `union` held.
Wouldn't that be easier to do with an `enum`?:
```c
#include <stdio.h>
#include <stdlib.h>

typedef enum { COUNT, WEIGHT, VOLUME } quantity_types;

// Create a struct with a nested union
typedef struct {
  const char* type;
  union {
    short count;
    float weight;
    float volume;
  } quantity;
  quantity_types quantity_type;
} fruit_order;

void print_fruit_order(fruit_order this_order) {
  if (this_order.quantity_type == COUNT) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %i\n", this_order.type, this_order.quantity.count);
  } else if (this_order.quantity_type == WEIGHT) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.weight);
  } else if (this_order.quantity_type == VOLUME) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.volume);
  }
};

// fruit order program
int main() {
  // create three fruit orders
  // NOTE: Because we used an 'enum', an error will be thrown if we pass the
  // wrong type of value for '.quantity_type'.
  fruit_order apples = {"apples", 6, .quantity_type = COUNT};
  fruit_order strawberries = {"strawberries", .quantity.weight=1.5, .quantity_type = WEIGHT};
  fruit_order orange_juice = {"orange juice", .quantity.volume=0.5, .quantity_type = VOLUME};

  // print out the fruit orders
  print_fruit_order(apples);
  print_fruit_order(strawberries);
  print_fruit_order(orange_juice);

  return 0;
};
```

## References
[Head First C][head-first-c]

[Why Use Enum? from StackOverflow][s-o-why-use-enum]

[head-first-c]: http://www.amazon.com/Head-First-C-David-Griffiths/dp/1449399916
[s-o-why-use-enum]: http://stackoverflow.com/questions/5243269/why-use-enum-when-define-is-just-as-efficient
