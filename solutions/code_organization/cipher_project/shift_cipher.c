#include <stdio.h>
#include <string.h>
#include "shift_cipher.h"

void shift_cipher(char message[])
{
  char *letters[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
    "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y",
    "z"};

  int i;
  int j;

  for (j = 0; j < (strlen(message) - 1); j++) {
    char message_char = message[j];
    int shifted_found = 0;
    for (i = 0; i < 26; i++) {
      if (shifted_found)
        break;
      // strcmp returns 0 if equal, otherwise neg. or pos. number
      int result = strcmp(&message_char, letters[i]);
      if (!strncmp(&message_char, letters[i], 1)) {
        // compare the current message char to the current abc char
        // if a match is found
        // find the letter that is at (i + 2) % 26
        // and print that
        int shifted_index = (i + 1) % 26;
        message[j] = *letters[shifted_index];
        shifted_found = 1;
        break;
      } else if ((i + 1) == 26) {
        // if neither fits, then just print the original message char
        // (it might be a space)
      }
    }
  }

  printf("\n");
}
