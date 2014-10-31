#include <stdio.h>

struct person {
  char *name;
};

void change_name(struct person p) {
  p.name = "bar";
  printf("Inside of the 'change_name' method,\n");
  printf("Their name is %s\n\n", p.name);
};

int main() {
  struct person foo = {"foo"};

  printf("Outside of the 'change_name' method,\n");
  printf("Before changing the person's name,\n");
  printf("Their name is %s\n\n", foo.name);

  change_name(foo);

  printf("Outside of the 'change_name' method,\n");
  printf("AFTER changing the person's name,\n");
  printf("Their name is %s\n\n", foo.name);
  return 0;
}
