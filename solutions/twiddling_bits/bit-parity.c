#include <stdio.h>

// challenge 7:
// return 1 if x has odd number of 1's and 0 otherwise
int bitParity(int a) {
  int b = 1;
  b = b ^ (a);
  b = b ^ (a >> 1);
  b = b ^ (a >> 2);
  b = b ^ (a >> 4);
  b = b ^ (a >> 5);
  b = b ^ (a >> 6);
  b = b ^ (a >> 7);
  return ((~b) & 1);
};

int main() {
  int a = 129;
  int b = 128;

  int c = bitParity(a);
  int d = bitParity(b);

  printf("%d has bitParity of %d\n", a,  0);

  printf("bitParity(%d) -> %d\n", a, c);

  printf("%d has bitParity of %d\n", b,  1);

  printf("bitParity(%d) -> %d\n", b, d);
}
