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

  return 0;
}
