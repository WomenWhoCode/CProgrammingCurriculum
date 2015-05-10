#include <stdio.h>

// challenge 6:
// Even-numbered bits set to 1
int evenBits(void) {
    /* 0x55 = 10101010, so to create a number with all even bits we shift
     * 10101010 to the left 8, 16, and 24 bits to fill out the remainder of a
     * 32 bit int without using 0x55555555.
     */
    int z;
    int f;
    z = 0x55;
    f = (z + (z<<8) + (z<<16) + (z<<24));
    return f;
};

int main() {
  int c = evenBits();

  printf("a number with even bits set to 1 would be %d\n", 0x55555555);

  printf("evenBits() -> %d\n", c);
}
