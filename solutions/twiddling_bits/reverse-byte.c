#include <stdio.h>

// challenge 5:
// Reverse the bytes of x
int reverseByte(int a) {
  return  ((a << 7) & 128) |
    ((a << 5) & 64) |
    ((a << 3) & 32) |
    ((a << 1) & 16) |
    ((a >> 1) & 8) |
    ((a >> 3) & 4) |
    ((a >> 5) & 2) |
    ((a >> 7) & 1);
};

int main() {
  int a = 141;

  int c = reverseByte(a);

  printf("%d reversed should be %d\n", a, 177);

  printf("reversedByte(%d) -> %d\n", a, c);
}
