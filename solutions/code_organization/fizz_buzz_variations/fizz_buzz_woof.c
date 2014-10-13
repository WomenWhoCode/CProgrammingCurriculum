#include <stdio.h>
#include "fizz.h"
#include "buzz.h"

void woof()
{
  puts("woof");
}

int given_number_includes_digit(int n, int digit)
{
  int matches_found = 0;
  while (n) {
    int current_digit = n % 10;
    n = n / 10;
    if (current_digit == digit) {
      matches_found++;
    }
  }
  return matches_found;
}

void times(int i, void(*f)())
{
  for (;i > 0; i--) {
    f();
    printf("\n");
  }
}

int main()
{
  for (int i = 0; i <= 100; i++) {
    printf("(%i)\n", i);
    int found_matches = 0;
    int number_of_threes = given_number_includes_digit(i, 3);
    if (number_of_threes) {
      times(number_of_threes, fizz);
      found_matches = 1;
    }
    if (i % 3 == 0) {
      fizz();
      printf("\n");
      found_matches = 1;
    }
    int number_of_fives = given_number_includes_digit(i, 5);
    if (number_of_fives) {
      times(number_of_fives, buzz);
      found_matches = 1;
    }
    if (i % 5 == 0) {
      buzz();
      printf("\n");
      found_matches = 1;
    }
    int number_of_sevens = given_number_includes_digit(i, 7);
    if (number_of_sevens) {
      times(number_of_sevens, woof);
      found_matches = 1;
    }
    if (i % 7 == 0) {
      woof();
      printf("\n");
      found_matches = 1;
    }
    if (!found_matches) {
      printf("%i \n", i);
    }
  }
  return 0;
}
