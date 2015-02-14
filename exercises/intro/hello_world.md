##Hello World

> "The first program to write is the same for all languages:"
> *Print the words*
>  `hello, world`

 --- 'The C Programming Language', p. 5

###Instructions
[How To Print Hello World, from 'The C Programming Language', p. 5-8][k-r-5]

###Gotchas
 - In the examples from 'The C Programming Language', they omit the `int` before
the `main` function.
You may see the following warning as a result:
```
 hello_world.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
 main()
 ^~~~
```
In that case, just add the missing type declaration:
```
int main() {
...
```

 - Using [curly quotes][straight-vs-curly-quotes] can lead to the following
   error:

```
  hello_world.c:5:10: error: non-ASCII characters are not allowed outside of literals and identifiers
    printf(“hello, world”);
           ^
  hello_world.c:5:13: error: use of undeclared identifier 'hello'
    printf(“hello, world”);
            ^
  hello_world.c:5:25: error: non-ASCII characters are not allowed outside of literals and identifiers
    printf(“hello, world”);
```

In that case I recommend using a different text editor.

[straight-vs-curly-quotes]: http://practicaltypography.com/straight-and-curly-quotes.html

###Bonus
[More context on Hello World.][hello-world-wikipedia]

**Solution:** [Hello World][hello-world-solution]

 [k-r-5]: http://books.cat-v.org/computer-science/c-programming-language/The.C.Programming.Language.2nd.Edition.pdf#page=19
 [hello-world-wikipedia]: http://en.wikipedia.org/wiki/%22Hello,_world!%22_program
 [hello-world-solution]: ../../solutions/intro/hello_world.c
