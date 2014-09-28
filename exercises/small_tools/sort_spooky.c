#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *in = fopen("spooky.csv", "r");
  FILE *file1 = fopen("ufos.csv", "w");
  FILE *file2 = fopen("elvis.csv", "w");
  FILE *file3 = fopen("other.csv", "w");

  char line[80];
  while (fscanf(in, "%79[^\n]\n", line) == 1) {
    if (strstr(line, "UFO")) {
      fprintf(file1, "%s\n", line);
    }
    else if (strstr(line, "Elvis")) {
      fprintf(file2, "%s\n", line);
    }
    else {
      fprintf(file3, "%s\n", line);
    }
  }
  fclose(file1);
  fclose(file2);
  fclose(file3);
  fclose(in);
  return 1;
}
