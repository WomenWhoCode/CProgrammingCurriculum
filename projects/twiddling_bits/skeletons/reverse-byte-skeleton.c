#include <stdio.h>

// challenge 5:
// Reverse the bytes of x
int reverseByte(int a) {
  // FILL IN CODE HERE
};

int main() {
  int a = 141;

  int c = reverseByte(a);

  printf("%d reversed should be %d\n", a, 177);

  printf("reversedByte(%d) -> %d\n", a, c);
}
