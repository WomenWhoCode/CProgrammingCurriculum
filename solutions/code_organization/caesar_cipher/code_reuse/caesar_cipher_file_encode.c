#include <stdio.h>
#include "encode_character.h"
#include "configs.h"

int main(int argc, char *argv[])
{
  FILE *fp;
  fp = fopen(argv[1], "r");

  FILE *encoded_fp;
  encoded_fp = fopen("encoded.txt", "w");

  if (fp) {
    int c;
    while ((c = getc(fp)) != EOF) {
      fprintf(encoded_fp, "%c", encode_character(c, CIPHER_SHIFT));
    }
  }
  else {
    printf("There was an error reading the file %s\n", argv[1]);
    return 1;
  }
  return 0;
}
