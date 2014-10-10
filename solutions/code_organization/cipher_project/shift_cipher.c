#include <stdio.h>
#include <string.h>
#include "shift_cipher.h"

void shift_cipher(char *message)
{
  char *letters[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
    "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y",
    "z"};

  int i;
  int j;

  for (j = 0; j < (strlen(message) - 1); j++) {
    printf("message index is %i \n", j);
    char message_char = message[j];
    printf("message char is %c \n", message_char);
    for (i = 0; i < 26; i++) {
      printf("alphabet index is %i \n", i);
      printf("alphabet char is %c \n", *letters[i]);
      if (strcmp(&message_char, letters[i])) {
        // compare the current message char to the current abc char
        // if a match is found
        // find the letter that is at (i + 2) % 26
        // and print that
        int shifted_index = (i + 2) % 26;
        printf("shifted_index is %i \n", shifted_index);
        printf("shifted char is %s \n", letters[shifted_index]);
        break;
      } else if ((i + 1) == 26) {
        // if neither fits, then just print the original message char
        // (it might be a space)
        printf("%s", &message_char);
      }
    }
  }

  printf("\n");

  while (*message) {
    *message = *message ^ 2;
    message++;
  }
}
