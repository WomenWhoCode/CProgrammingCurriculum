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
