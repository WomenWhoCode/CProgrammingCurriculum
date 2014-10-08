#include <stdio.h>
#include <unistd.h>

// command line options
// -p playernamehere
// -n characternamehere
// -s strength-number
// -d dexterity-number
// -o constitution-number (const is a reserved keyword)
// -i intelligence-number (int is a reserved keyword)
// -w wisdom-number
// -h charisma-number (char is a reserved keyword)
// -l (toggles lawful to true)
// -c (toggles chaotic to true)
// -g (toggles good to true)
// -e (toggles evil to true)
// (neutral is the default)
int main(int argc, char *argv[])
{
  char *player_name = "default_player_name";
  char *character_name = "default_PC_name";
  char *str = "0";
  char *dex = "0";
  char *constit = "0";
  char *intel = "0";
  char *wis = "0";
  char *charis = "0";
  int lawful = 0;
  int chaotic = 0;
  int good = 0;
  int evil = 0;

  char ch;

  while ((ch = getopt(argc, argv, "p:n:s:d:o:i:w:h:lcge")) != EOF)
    switch(ch) {
      case 'p':
        player_name = optarg;
        break;
      case 'n':
        character_name = optarg;
        break;
      case 's':
        str = optarg;
        break;
      case 'd':
        dex = optarg;
        break;
      case 'o':
        constit = optarg;
        break;
      case 'i':
        intel = optarg;
        break;
      case 'w':
        wis = optarg;
        break;
      case 'h':
        charis = optarg;
        break;
      case 'l':
        if(chaotic) {
          fprintf(stderr, "You can't be both lawful and chaotic.");
          return 1;
        }
        lawful = 1;
        break;
      case 'c':
        if(lawful) {
          fprintf(stderr, "You can't be both lawful and chaotic.");
          return 1;
        }
        chaotic = 1;
        break;
      case 'g':
        if(evil) {
          fprintf(stderr, "You can't be both good and evil.");
          return 1;
        }
        good = 1;
        break;
      case 'e':
        if(good){
          fprintf(stderr, "You can't be both good and evil.");
          return 1;
        }
        evil = 1;
        break;
      default:
        fprintf(stderr, "unknown option: '%s'\n", optarg);
        return 1;
    }

  argc -= optind;
  argv += optind;

  char *orientation1 = "neutral";

  if(lawful) {
    orientation1 = "lawful";
  } else if (chaotic) {
    orientation1 = "chaotic";
  }

  char *orientation2 = "neutral";
  if(good) {
    orientation2 = "good";
  } else if(evil){
    orientation2 = "evil";
  }

  printf("Player Name: %s\n", player_name);
  printf("Character Name: %s\n", character_name);
  printf("Orientation: %s %s\n", orientation1, orientation2);
  puts("Stats:");
  printf("  Strength: %s\n", str);
  printf("  Dexterity: %s\n", dex);
  printf("  Constitution: %s\n", constit);
  printf("  Intelligence: %s\n", intel);
  printf("  Wisdom: %s\n", wis);
  printf("  Charisma: %s\n", charis);

  return 0;
}
