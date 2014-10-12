#include <stdio.h>
#include <stdlib.h>
#include "shift_cipher.h"

int main(int argc,char *argv[])
{
  char *file_to_hide = argv[1];
  char *file_to_write_to = argv[2];

  FILE *in = fopen(file_to_hide, "r");
  FILE *out_file = fopen(file_to_write_to, "w");

  char line[80];
  while (fscanf(in, "%79[^\n]\n", line) == 1) {
    shift_cipher(line);
    fprintf(out_file, "%s", line);
  }
  return 0;
}
