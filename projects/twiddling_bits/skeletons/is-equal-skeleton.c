#include <stdio.h>

// challenge 4:
// (x == y) with only ! ~ & ^ | + << >>
int isEqual(int a, int b) {
  // FILL IN CODE HERE
};

int main() {
  int a = 60;
  int b = 13;

  int c = isEqual(a, b);

  printf("%d == %d should be %d\n", a, b, 0);

  printf("isEqual(%d, %d) -> %d\n", a, b, c);

  int d = isEqual(a, a);

  printf("%d == %d should be %d\n", a, a, 1);

  printf("isEqual(%d, %d) -> %d\n", a, a, d);
}
