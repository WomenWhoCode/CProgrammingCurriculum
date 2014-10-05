#include <stdio.h>
#include <limits.h>
#include <float.h>


// There are 6 data types:
// Char
// Int
// Short
// Long
// Float
// Double
//
// Using the 'limits' and 'float' libraries, we can check the size of the
// storage for each type on the current platform. These values will vary by
// platform.
//
// I couldn't find an example of the way to get the size of a Long;
// LNG_MAX and LNG_MIN didn't do the trick. ?

int main()
{
  puts ("**INTEGERS**");
  printf("The value of INT_MAX is %i\n", INT_MAX);
  printf("The value of INT_MIN is %i\n", INT_MIN);
  printf("An int takes %zu bytes\n", sizeof(int));

  puts ("**FLOATS**");
  printf("The value of FLT_MAX is %f\n", FLT_MAX);
  printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
  printf("A float takes %zu bytes\n", sizeof(float));

  puts("**CHARS**");
  printf("The value of CHAR_MAX is %i\n", CHAR_MAX);
  printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
  printf("A char takes %zu bytes\n", sizeof(char));

  puts("**DOUBLES**");
  printf("The value of DBL_MAX is %g\n", DBL_MAX);
  printf("The value of DBL_MIN is %g\n", DBL_MIN);
  printf("A double takes %zu bytes\n", sizeof(double));

  puts("**SHORT**");
  printf("The value of SHRT_MAX is %i\n", SHRT_MAX);
  printf("The value of SHRT_MIN is %i\n", SHRT_MIN);
  printf("A short takes %zu bytes\n", sizeof(short));

  return 0;
}
