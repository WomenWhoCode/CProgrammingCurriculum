##Checking the size of Data Types
You can check the size of storage available for different
[data types][data-types-notes] on your platform using the `limits` library:

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

//...
printf("The value of FLT_MAX is %f\n", FLT_MAX);
// You can access FLT_MIN in the same way.
printf("A float takes %zu bytes\n", sizeof(float));
//...
```

Can you find the min, max, and bytes values for the other data types?

(`INT`, `FLT`, `CHAR`, `SHRT`, and `DBL` are the constant prefixes.)

[**Solution:** Checking the size of Data Types][data-types-solution]

[data-types-notes]: ../../notes/intro/data_types.md
[data-types-solution]: ../../solutions/data_types/data_type_size_checker.c
