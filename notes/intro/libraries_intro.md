#C Libraries
Nearly everything in C requires importing a library.

```C
#include <stdio.h>
#include <stdlib.h>
```

The above code has to come first (like any other dependency
management) and imports the two libraries.

The hash indicates that this is a command for the pre-processor,
which imports the libraries.

`stdio.h` is the C standard library header, and contains
functions for file input and output.

`stdlib.h` is the general purpose standard library, and contains
utility functions for memory management, process control, conversion,
and others.

The angle brackets tell the preproccessor to look in the
systems folders.

If you want to import a local file, use double-quotes.

**References:**

[The #include directive][msdn-include-directive]

[Wikibook C Programming/C Reference/stdio.h][wikibook-c-stdio]

[Wikibook C Programming/C Reference/stdlib.h][wikibook-c-stdlib]

[Stackoverflow: What does #include <stdio.h> really do in a C program][stackoverflow-what-does-stdio-do]

[msdn-include-directive]: http://msdn.microsoft.com/en-us/library/36k2cdd4(VS.80).aspx
[wikibook-c-stdio]: http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdio.h
[wikibook-c-stdlib]: http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdlib.h
[stackoverflow-what-does-stdio-do]: http://stackoverflow.com/questions/19088284/what-does-include-stdio-h-really-do-in-a-c-program
