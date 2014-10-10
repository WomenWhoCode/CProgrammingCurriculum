#include <stdio.h>
#include "shift_cipher.h"

int main()
{
  char msg[80];
  while (fgets(msg, 80, stdin)) {
    shift_cipher(msg);
    printf("%s", msg);
  }
  return 0;
}
