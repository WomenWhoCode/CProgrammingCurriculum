#Structs

When you need to pass around a set of non-uniform data types, use a *struct*.

**"Struct" is short for "structured data type".**

Example: You have a csv of info about cats. Every cat has it's weight, age,
name, and breed recorded in the csv.

Passing those 4 values around into your functions is going to be a bummer - we
never want more than 3 parameters being passed into a function.

**Without a struct:**

```c
/* Record the cat data in the csv */
void record_stats(const char *name, const char *breed, int weight, int age)
{
 // ...
}

/* Display the cat data to the user */
void display_stats(const char *name, const char *breed, int weight, int age)
{
 // ...
}

/* Enter the cat in a contest */
void enter_in_cat_show(const char *name, const char *breed, int weight, int age)
{
 // ...
}

int main()
{
  record_stats("Garfield", "main coon", 200, 12);
  display_stats("Garfield", "main coon", 200, 12);
  enter_in_cat_show("Garfield", "main coon", 200, 12);

  return 0;
}
```

**With a struct:**

```c
struct cat {
  const char* name;
  const char* breed;
  int weight;
  int age;
};

/* record the cat data in the csv */
void record_stats(struct cat c)
{
 // ...
}

/* display the cat data to the user */
void display_stats(struct cat c)
{
 // ...
}

/* enter cat in show */
void enter_in_cat_show(struct cat c)
{
  // ...
}

int main()
{
  struct cat garfield = {"Garfield", "main coon", 200, 14};

  record_stats(garfield);
  display_stats(garfield);
  enter_in_cat_show(garfield);
}
```

## Call the struct methods with the dot operator
For anyone who has used JavaScript, this should be really familiar:

```c
/* record the cat data in the csv */
void record_stats(struct cat c)
{
 FILE *cat_csv = fopen("cats.csv", "w");

 fprintf(cat_csv, "name: %s\n breed: %s\n weight: %i\n age: %i,\n\n", c.name, c.breed, c.weight, c.age);
 fclose(cat_csv);
}

/* display the cat data to the user */
void display_stats(struct cat c)
{
 printf("%s is a %s who weighs %i and is %i years old.", c.name, c.breed, c.weight, c.age);
}

/* enter cat in show */
void enter_in_cat_show(struct cat c)
{
  printf("%s has been entered in the cat show.", c.name);
}
```

**[Source Code for the Cat Structs][cat-structs-solution]**

[cat-structs-solution]: ../../solutions/data_structures/cat_factory.c

## Structs may be nested
For more complex data, you should use nested structs. For example,
what if we want to record data about the favorite toy of our cat?

Use a nested struct:

```c
struct toy {
  const char *name;
  const char *type;
  const char *color;
}

struct cat {
  const char *name;
  const char *breed;
  int weight;
  int age;
  struct toy favorite_toy;
}
```

You can assign the value of a nested struct the same way as other values inside of a struct:

```c
struct toy mouse_toy = {"Mousey", "mouse", "blue"};
struct cat garfield = {"Garfield", "main coon", 200, 13, mouse_toy};
```

What about recording data about all of their toys?

Use an array of structs (a.k.a a structure array):

```c
struct toy all_toys[5];

// Assigning the 1st toy
struct toy catnip_sachet = {"Catnip Sachet", "catnip", "pink"};
all_toys[0] = catnip_sachet;

// Assigning the 2nd toy (using dot notation)
all_toys[1].name = "Yarn Ball";
all_toys[1].type = "yarn";
all_toys[1].color = "yellow";
```
