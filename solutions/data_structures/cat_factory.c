#include <stdio.h>
#include <stdlib.h>

struct cat {
  const char *name;
  const char *breed;
  int weight;
  int age;
};

/* record the cat data in the csv */
void record_stats(struct cat c) {
  FILE *cat_csv = fopen("cat_s.csv", "w");

  fprintf(cat_csv, "name: %s\n, breed: %s\n, weight: %i\n, age: %i,\n\n", c.name, c.breed, c.weight, c.age);
  fclose(cat_csv);
}

/* display the cat data to the user */
void display_stats(struct cat c) {
  printf("%s is a %s who weighs %i and is %i years old.", c.name, c.breed, c.weight, c.age);
}

/* enter the cat in show */
void enter_in_cat_show(struct cat c) {
  printf("%s has been entered in the cat show.", c.name);
}


int main()
{
  struct cat garfield = {"Garfield", "main coon", 200, 13};

  record_stats(garfield);
  display_stats(garfield);
  enter_in_cat_show(garfield);

  return 1;
}
