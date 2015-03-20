#include <stdio.h>
#include <ctype.h>
#include "encode_character.h"
#include "configs.h"

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    printf("%c", encode_character(c, CIPHER_SHIFT));
  }

  return 0;
}

