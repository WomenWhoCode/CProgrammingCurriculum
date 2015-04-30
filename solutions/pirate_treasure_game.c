#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};

// 3x3 map
#define MAP_WIDTH 3
// give the user 5 guesses to find the treasure
#define TOTAL_GUESSES 5
struct point guessed_points[TOTAL_GUESSES];

// Returns  0 for mismatch, 1 for match
int points_match(struct point point_a, struct point point_b) {
  if ((point_a.x == point_b.x) && (point_a.y == point_b.y)) {
    return 1;
  } else {
    return 0;
  }
};

void print_treasure_location(struct point treasure_point) {
  printf("The treasure was buried at %d, %d.\n", treasure_point.x, treasure_point.y);
}


int main() {
  // bury the secret treasure!
  int treasure_x = 1; // TODO: randomly assign # between 0 and MAP_WIDTH;
  int treasure_y = 1; // TODO: randomly assign # between 0 and MAP_WIDTH;
  struct point treasure_point;
  treasure_point.x = treasure_x;
  treasure_point.y = treasure_y;

  // let the user guess
  int guesses_left = TOTAL_GUESSES;
  int treasure_found = 0;

  printf("~~~ PIRATE TREASURE GAME ~~~");
  printf("The treasure map is %d by %d.\n", MAP_WIDTH, MAP_WIDTH);
  printf("Yarr! Where be the treasure?\n");
  while (!(treasure_found) && (guesses_left > 0)) {
    printf("There be %d guesses left. Choose wisely yarr!\n", guesses_left);
    int guessed_x;
    int guessed_y;
    struct point guessed_point;
    // TODO: handle bad input
    printf("What X coordinate do you choose?:\n");
    scanf("%d", &guessed_x);
    printf("What Y coordinate do you choose?:\n");
    scanf("%d", &guessed_y);
    guessed_point.x = guessed_x;
    guessed_point.y = guessed_y;

    if (points_match(guessed_point, treasure_point)) {
      treasure_found = 1;
      print_treasure_location(treasure_point);
      printf("AVAST YE MATEY! Behold, the treasure is found.\n");
    }

    guesses_left--;
  }

  if (!treasure_found) {
    print_treasure_location(treasure_point);
    printf("Ye lost, yo ho ho and a bottle of rum!\n");
  }

  return 0;
};
