#include <stdio.h>

// challenge 1:
// (x&y) using only ~ and |
int bitAnd(int a, int b) {
  // FILL IN CODE HERE
};

int main() {
  int a = 60;
  int b = 13;

  int c = bitAnd(a, b);

  printf("%d&%d should be %d\n", a, b, 12);

  printf("bitAnd(%d, %d) -> %d\n", a, b, c);
}
