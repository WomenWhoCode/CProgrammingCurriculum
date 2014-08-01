/* An initial version of a dungeon crawler
 */

#include <stdio.h>
#include <stdlib.h>

void goblin()
{
  printf("goblin \n");
}

void land_shark()
{
  printf("land_shark \n");
}

void skeleton()
{
  printf("skeleton \n");
}

void boggart()
{
  printf("boggart \n");
}

void gelatinous_cube()
{
  printf("gelatinous_cube \n");
}

void random_monster(int index)
{
  if (index == 0) {
    goblin();
    return;
  }
  if (index == 1) {
    land_shark();
    return;
  }
  if (index == 2) {
    skeleton();
    return;
  }
  gelatinous_cube();
  return;
}

int main()
{

  printf("Welcome to the Dungeon! \n");
  int keep_playing = 1;
  int count = 0;
  while (keep_playing) {
    printf("You have encounted a monster. It's a ");
    int mod_count = (count % 3);
    random_monster(mod_count);
    printf("Will you befriend it? \n");
    char user_input[3];
    fgets(user_input, sizeof(user_input), stdin);
    if (user_input[0] == 'y') {
      printf("You have passed into the next room. \n\n");
    }
    else {
      printf("The monster ate you. Game over! \n\n");
      keep_playing = 0;
    }
    count ++;
  }

  return 1;
}
