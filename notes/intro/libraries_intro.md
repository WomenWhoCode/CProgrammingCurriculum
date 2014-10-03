#C Libraries
Nearly everything in C requires importing a library.

```C
#include <stdio.h>
#indluce <stdlib.h>
```

The above code has to come first (like any other dependency
management) and imports the two libraries.

The hash indicates that this is a command for the pre-processor,
which imports the libraries.[0]

`stdio.h` is the C standard library header, and contains
functions for file input and output.[1]

`stdlib.h` is the general purpose standard library, and contains
utility functions for memory management, process control, conversion,
and others.[2]

The angle brackets tell the preproccessor to look in the
systems folders.

If you want to import a local file, use double-quotes.[3]

[0]: http://msdn.microsoft.com/en-us/library/36k2cdd4(VS.80).aspx
[1]: http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdio.h
[2]: http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdlib.h
[3]: http://stackoverflow.com/questions/19088284/what-does-include-stdio-h-really-do-in-a-c-program
