#include <stdio.h>
#include "fizz.h"
#include "buzz.h"

void fizz_buzz(i) {
  int fizz_buzzed = 0;
  if (i % 3 == 0) {
    fizz();
    fizz_buzzed = 1;
  }
  if (i % 5 == 0) {
    buzz();
    fizz_buzzed = 1;
  }
  if (!fizz_buzzed) {
    printf("%i", i);
  }
  puts("\n");
}
