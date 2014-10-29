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
  struct cat {
    const char* name;
    const char* breed;
    int weight;
    int age;
  };

  struct cat garfield = {"Garfield", "main coon", 200, 14}

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

 fprintf(cat_csv, "name: %s\n breed: %s\n weight: %i\n age: %i\n\n", c.name, c.breed, c.weight, c.age);
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
