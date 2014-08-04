/* An initial version of a dungeon crawler
 */

#include <stdio.h>
#include <stdlib.h>

char monsters[][80] = {
  "goblin \n",
  "land_shark \n",
  "skeleton \n",
  "boggart \n",
  "gelatinous_cube \n",
}; // length == 5

void random_monster(int index)
{
  printf("%s", monsters[index]);
  return;
}

void monster_hits(int* life)
{
  int damage = 10;
  printf("The monster hit you for %i life. \n\n", damage);
  *life = *life - damage;
  printf("Your life is now %i. \n", *life);
  if (!*life) {
    printf("Game over. \n");
  }
}

int main()
{
  int life = 40;
  printf("Welcome to the Dungeon! \n");
  int count = 0;
  while (life) {
    printf("You have encounted a monster. It's a ");
    int mod_count = (count % 5);
    random_monster(mod_count);
    printf("Will you befriend it? \n");
    char user_input[3];
    fgets(user_input, sizeof(user_input), stdin);
    if (user_input[0] == 'y') {
      printf("You have passed into the next room. \n\n");
    }
    else {
      monster_hits(&life);
    }
    count ++;
  }

  return 1;
}
