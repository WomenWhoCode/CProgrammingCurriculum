#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Expects 5 arguments not including argv[0]
int main(int argc, char *argv[])
{
  if (argc != 6) {
    puts("Must enter 5 arguments: two categories and filename for the rest.");
    return 1;
  }

  printf("Received %i categories", (argc - 2) / 2);

  FILE *in
  if (!(in = fopen("spooky.csv", "r"))) {
    fprintf(stderr, "Can't open the file 'spooky.csv'.\n");
    return 2;
  }

  FILE *file1 = fopen(argv[2], "w");
  FILE *file2 = fopen(argv[4], "w");
  FILE *therest = fopen(argv[5], "w");



  char line[80];
  while (fscanf(in, "%79[^\n]\n", line) == 1) {
    if (strstr(line, argv[1])) {
      fprintf(file1, "%s\n", line);
    }
    else if (strstr(line, argv[3])) {
      fprintf(file2, "%s\n", line);
    }
    else {
      fprintf(therest, "%s\n", line);
    }
  }
  fclose(file1);
  fclose(file2);
  fclose(therest);
  fclose(in);
  return 1;
}
