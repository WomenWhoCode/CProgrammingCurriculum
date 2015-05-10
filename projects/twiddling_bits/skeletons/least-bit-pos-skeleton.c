#include <stdio.h>

// challenge 8:
// return a mask with position of least significant 1 bit marked
int leastBitPos(int n) {
  // FILL IN CODE HERE
};

int main() {
  int a = 7;
  int b = 20;

  int c = leastBitPos(a);
  int d = leastBitPos(b);

  printf("least significant bit of %d is %d\n", a,  1);

  printf("leastBitPos(%d) -> %d\n", a, c);

  printf("least significant bit of %d is %d\n", b,  4);

  printf("leastBitPos(%d) -> %d\n", b, d);
}
