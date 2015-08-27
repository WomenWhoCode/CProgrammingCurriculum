#Using Clang to Compile and Run C Programs

To see all `clang` features:
```
clang --help
```

To compile with clang:
```
clang file_name.c -o executable_name
```
If you omit the `-o executable_name` the default executable name will be `a.out`.

To run the program (in Mac):
```
./a.out
```

Try changing something in `file_name.c` and re-running `a.out`.

Result? The output hasn't changed. You have to recompile and overwrite
`a.out`.

To compile and run in the same step:
```
clang file_name.c -o executable_name && ./executable_name
```

[Clang Documentation][clang-docs]

[clang-docs]: http://clang.llvm.org/docs/
