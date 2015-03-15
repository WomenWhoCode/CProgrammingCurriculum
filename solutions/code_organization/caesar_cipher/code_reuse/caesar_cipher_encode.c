#include <stdio.h>
#include <ctype.h>
#include "encode_character.h"

#define ALPHABET_LENGTH 26 /* number of letters in alphabet */
#define CIPHER_SHIFT 3 /* how many places to shift the letter */

char alphabet_lower[(ALPHABET_LENGTH + 1)] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
char alphabet_upper[(ALPHABET_LENGTH + 1)] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};

int main() {

  int c;
  while ((c = getchar()) != EOF) {
    printf("%c", encode_character(c, CIPHER_SHIFT));
  }

  return 0;
}

