#include <stdio.h>
#include <string.h>

int main()
{
  int counter;
  for (counter = 1; counter < 100; counter ++) {
    if (counter % 3 == 0) {
      puts("fizz");
    }
    if (counter % 5 == 0) {
      puts("buzz");
    }
    if ((counter % 3 > 0) && (counter % 5 > 0)) {
      printf("%i", counter);
    }
    puts("\n");
  }
  return 0;
}
