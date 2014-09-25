#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
printf("Your word is %lu letters long\n", strlen(s));
  // iterate through it's characters backwards
  size_t len = strlen(s);
  char *t = s + len - 1;
  while (t >= s) {
    printf("%c", *t);
    t--;
  }
  printf("\n");
}

void print_reverse_2(char *s)
{
printf("Your word is %lu letters long\n", strlen(s));
  // iterate through it's characters backwards
  size_t len = strlen(s);
  char reversed_word[len + 1];
  int i = 0;
  char *t = s + len - 1;
  while (t >= s) {
    reversed_word[i] = *t;
    i++;
    t--;
  }
  printf("\n");
  printf("%s", reversed_word);
  printf("\n");
}

int main()
{
  // get a string from the user
  char string_from_user[80];
  printf("Give me a word to reverse: (80 char. max)");
  scanf("%79s", string_from_user);
  print_reverse_2(string_from_user);
  return 0;
};
