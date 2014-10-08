##D&D Character Generator

To practice using command line options, let's get
ridiculous and write a D&D Character Generator
that takes all of it's data in the form of
[command line options][command-line-opts-args-notes].

You should be able to pass the following options
to the program when calling it from the command
line (to start with):

 * `-p` playernamehere
 * `-n` characternamehere
 * `-s` strength-number
 * `-d` dexterity-number
 * `-o` constitution-number (const is a reserved keyword)
 * `-i` intelligence-number (int is a reserved keyword)
 * `-w` wisdom-number
 * `-h` charisma-number (char is a reserved keyword)
 * `-l` (toggles lawful to true)
 * `-c` (toggles chaotic to true)
 * `-g` (toggles good to true)
 * `-e` (toggles evil to true)
 *  (neutral is the default)

 Remember that the order of command line options doesn't matter. An example of
 calling the program from the command line:

```
./character_generator -p "Player 1" -n "Lady Blackbird" -c -g -s 20 -d 55 -o 45 -i 9000 -w 11 -h 82
 ```

 [**Solution:** D&D Character Generator][char-gen-solution]

 [command-line-opts-args-notes]: ../../notes/small_tools/command_line_options.md
 [char-gen-solution]: ../../solution/command_line_opts_args/character_generator.c
