#include <stdio.h>
#include <unistd.h>

// This program takes one command line option
// -l
// Which switches it to allow storing an extra large number as the total
// It takes two command line arguments;
//  * Total cost without top
//  * Percent tip desired (as a whole integer)
//
//  Example usage:
//  ./tip_calculator 56.62 20
//
//  For totals larger than 32767, use the '-l' option
//  ./tip_calculator -l 2147483642.36 15
int main(int argc, char *argv[])
{
  int extra_long_total = 0;
  char ch;

  while ((ch = getopt(argc, argv, "l")) != EOF)
    switch(ch) {
      case 'l':
        extra_long_total = 1;
        break;
      default:
        fprintf(stderr, "Unknown option: '%s'\n", optarg);
        return 1;
    }

  argc -= optind;
  argv += optind;

  if (extra_long_total) {
    puts("You have an extra long total\n");
    double total;
    short tip_percent;
    double tip;
    puts("Total: ");
    if(sscanf(argv[0], "%lf", &total)!= 1) {
      fprintf(stderr, "error - please provide a total that is a floating point number");
    }
    if(sscanf(argv[1], "%hi", &tip_percent)!= 1) {
      fprintf(stderr, "error - please provide a total that is a floating point number");
    }
    tip = ((float)tip_percent / 100.0) * total;
    printf("Total: %lf\n", total);
    printf("Tip: %lf\n", tip);
  } else {
    puts("You have an normal length total\n");
    float total;
    short tip_percent;
    float tip;
    if(sscanf(argv[0], "%f", &total)!= 1) {
      fprintf(stderr, "error - please provide a total that is a floating point number");
    }
    if(sscanf(argv[1], "%hi", &tip_percent)!= 1) {
      fprintf(stderr, "error - please provide a total that is a floating point number");
    }
    tip = ((float)tip_percent / 100.0) * total;
    printf("Total: %f\n", total);
    printf("Tip: %f\n", tip);
  }
}
