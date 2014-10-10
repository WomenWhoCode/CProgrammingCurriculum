#include "shift_cipher.h"

void shift_cipher(char *message)
{
  while (*message) {
    *message = *message ^ 2;
    message++;
  }
}
