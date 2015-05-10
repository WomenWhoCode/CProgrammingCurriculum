#include <stdio.h>

// challenge 2:
// (x|y) using only ~ and &
int bitOr(int a, int b) {
  // FILL IN CODE HERE
};

int main() {
  int a = 60;
  int b = 13;

  int c = bitOr(a, b);

  printf("%d|%d should be %d\n", a, b, 61);

  printf("bitOr(%d, %d) -> %d\n", a, b, c);
}
