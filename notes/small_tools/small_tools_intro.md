# Small Tools

A "small tool" is a concise program that targets only one function and can be
chained or combined with other "small tool" type programs.

The programs used to complete actions from the command line, such as `ls` or
`cd`, could be considered small tools. Unix-style operating systems use small
tools to complete many tasks.

*Things to remember about "small tools":*
 * "Do one thing, and do it well"
 * "When you have a big problem, break it into small problems and write small
   tools to solve each of them."
 * Small tools are usually text-based and work from the command line
 * They should be general enough to reuse in different situations.

For example, if you were writing a program to read data from files, you would
want to allow configuration for which file it reads the data from, and then
output the data in a stream that can be directed. If you hard-code the name of
the file it is reading from, then it will need to be updated each time you want
to reuse it.
