#Structs

When you need to pass around a set of non-uniform data types, use a *struct*.

**"Struct" is short for "structured data type".**

Example: You have a database of info about cats. Every cat has it's weight, age,
name, and breed recorded in the database.

Passing those 4 values around into your functions is going to be a bummer - we
never want more than 3 parameters being passed into a function.

**Without a struct:**

```c
/* Record the cat data in the database */
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
/* record the cat data in the database */
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
  struct cat {
    const char* name;
    const char* breed;
    int weight;
    int age;
  };

  struct cat garfield = {"Garfield", "main coon", 200, }

  record_stats();
  display_stats();
  enter_in_cat_show();
}
```
