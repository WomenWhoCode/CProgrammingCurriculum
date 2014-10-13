#include <stdio.h>
#include "fizz_buzz.h"

int main()
{
  int i;
  for (i = 0; i <= 100; i++) {
    // check if we need to skip so that we count using base-5
    int prev_num = i - 1;
    if ((i != 0) && (prev_num % 5 == 0) && (prev_num % 10 != 0)) {
      i = i + 3;
    } else {
      fizz_buzz(i);
    }
  }
}
