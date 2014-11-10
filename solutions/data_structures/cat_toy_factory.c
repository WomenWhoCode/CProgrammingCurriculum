#include <stdio.h>

// Define cat toy structure
struct cat_toy {
  char name[50];
  char type[50];
  char color[50];
};

// Define the cat structure (with nested cat toy structures)
struct cat {
  char *name;
  char *breed;
  int weight;
  int age;
  struct cat_toy favorite_toy;
  struct cat_toy toys[3];
};

// Create a method that can generate cat toys based on user input
struct cat_toy generate_cat_toy()
{
  char toy_name[50] = "";
  char toy_type[50] = "";
  char toy_color[50] = "";
  puts("Please enter a name for this cat toy:");
  scanf("%s", toy_name);

  puts("Please enter a type for this cat toy:");
  scanf("%s", toy_type);

  puts("Please enter a color for this cat toy:");
  scanf("%s", toy_color);
  printf("\n");
  printf("%s was created.", toy_name);

  struct cat_toy this_toy  = {*toy_name, *toy_type, *toy_color};
  return this_toy;
}

// Make a method to print a summary of any toy
void print_toy_info(struct cat_toy t)
{
  printf("a %s", t.name);
}

// Make a method to print a bio of any cat
void print_bio(struct cat c)
{
  printf("Let me introduce %s the cat:\n", c.name);
  printf("%s is a %s that weighs %i.\n", c.name, c.breed, c.weight);
  printf("After %i years, it's favorite toy is %s", c.age, c.favorite_toy.name);
  printf("Let me tell you about %s's toys:\n", c.name);
  printf("%s has...", c.name);
  int counter;
  for (counter = 0; counter <= 3; counter++) {
    print_toy_info(c.toys[counter]);
  }
  printf("\n");
  printf("That's all there is to know about %s!\n", c.name);
}

int main()
{
// Make an instance of a cat (Garfield)
// No toys yet
struct cat garfield = {"Garfield", "main coon", 200, 14};

// Generate 3 instances of cat toys
struct cat_toy all_toys[3];
generate_cat_toy();
puts("First toy:");
all_toys[0] = generate_cat_toy();
puts("Second toy:");
all_toys[1] = generate_cat_toy();
puts("Third toy:");
all_toys[2] = generate_cat_toy();

// List the 3 toys and ask the user to pick Garfield's favorite
printf("%s has three toys:\n", garfield.name);
int counter;
for (counter = 0; counter <= 3; counter++) {
  printf("%i. ", counter);
  print_toy_info(all_toys[counter]);
  printf("\n");
}
/*
printf("Which one is %s's favorite?", garfield.name);
int favorite_index;
scanf("%d", &favorite_index);

// Assign the toys and the favorite toy to the Garfield struct
garfield.favorite_toy = all_toys[favorite_index];

garfield.toys[0] = all_toys[0];
garfield.toys[1] = all_toys[1];
garfield.toys[2] = all_toys[2];

// Print Garfield's bio
print_bio(garfield);
*/
}
