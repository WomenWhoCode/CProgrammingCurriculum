/* An initial version of the classic card game
 * ***BLACKJACK***
 */
#include <stdio.h>
#include <stdlib.h>

int card_value(char card_code[3])
{
  char suit = card_code[0];
  if ((suit == 'Q') || (suit == 'K') || (suit == 'J'))
    return 10;
  if (suit == 'A')
    return 11;
  return atoi(card_code);
}

int valid_input(char user_input[2])
{
  char input = user_input[0];
  if ((input != 'y') && (input != 'n'))
    return 0;
  return 1;
}

int parse_user_input(char user_input[2])
{
  char input = user_input[0];
  if (input == 'y')
    return 1;
  if (input == 'n')
    return 0;
  return 500;
}

int will_hit()
{
  char user_input[2];
  printf("Will you hit?");
  fgets(user_input, sizeof(user_input), stdin);
  if (valid_input(user_input))
    return parse_user_input(user_input);
  return 500;
}

int main()
{
  /* Play blackjack! (Coming soon.) */

  /* Testing the 'card_value' function: */
  char ace_code[3];
  ace_code[0] = 'A';
  ace_code[1] = 'H';
  int ace_value = card_value(ace_code);

  char queen_code[3];
  queen_code[0] = 'Q';
  queen_code[1] = 'H';
  int queen_value = card_value(queen_code);

  char four_code[3];
  four_code[0] = '4';
  four_code[1] = 'H';
  int four_value = card_value(four_code);

  puts("Card values for AH, QH, and 4H should be 11, 10, and 4: ");
  printf("%i, %i, %i", ace_value, queen_value, four_value);

  /* Testing the "will_hit" function */
  if (will_hit())
    puts("You will hit!");
  else
    puts("You will not hit.");

  return 0;
}
