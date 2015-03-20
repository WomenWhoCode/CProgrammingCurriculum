#include <stdio.h>
#include <ctype.h>
#include "configs.h"

char alphabet_lower[(ALPHABET_LENGTH + 1)] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
char alphabet_upper[(ALPHABET_LENGTH + 1)] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};

int get_index(char s) {
  for(int i = 0; i <= ALPHABET_LENGTH; i++) {
    if (isupper(s)) {
      if (alphabet_upper[i] == s)
        return i;
    }
    else {
      if (alphabet_lower[i] == s)
        return i;
    }
  }
  return -1;
};

int get_encoded_index(int original_index, int modifier) {
  return (original_index + modifier) % ALPHABET_LENGTH;
}

char encode_character(char s, int modifier) {
  if (!isalpha(s))
    return s;
  int index = get_index(s);
  int encodedIndex = get_encoded_index(index, modifier);
  if (isupper(s))
    return alphabet_upper[encodedIndex];
  else
    return alphabet_lower[encodedIndex];
}
