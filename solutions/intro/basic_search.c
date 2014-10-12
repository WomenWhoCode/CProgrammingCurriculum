#include <stdio.h>
#include <string.h>

char languages[][80] = {
"# .NET",
"A# (Axiom)",
"A-0 System",
"A+",
"A++",
"ABAP",
"ABC",
"ABC ALGOL",
"ABLE",
"ABSET",
"ABSYS",
"ACC",
"Accent",
"Ace DASL",
"ACL2",
"ACT-III",
"Action!",
"ActionScript",
"Ada",
"Adenine",
"Agda",
"Agilent VEE",
"Agora",
"AIMMS",
"Alef",
"ALF",
"ALGOL 58",
"ALGOL 60",
"ALGOL 68",
"ALGOL W",
"Alice",
"Alma-0",
"AmbientTalk",
"Amiga E",
"AMOS",
"AMPL",
"APL",
"AppleScript",
"Arc",
"ARexx",
"Argus",
"AspectJ",
"Assembly language",
"ATS",
"Ateji PX",
"AutoHotkey",
"Autocoder",
"AutoIt",
"AutoLISP / Visual LISP",
"Averest",
"AWK",
"Axum",
};

int main()
{
  printf("Please enter a language to search for: ");
  char search_term[80];
  scanf("%80s", search_term);
  int found = 0;
  int i;
  for (i = 0; i < 52; i ++)
  {
    if (strstr(languages[i], search_term))
    {
      printf("Found search term in word %s at index %i \n", languages[i], i);
      found ++;
    }
  }
  int item_count = strlen(*languages);
  printf("Found %i results out of %i items. Goodbye! \n", found, item_count);
  return 0;
};
