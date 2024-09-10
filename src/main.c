#include <stdio.h> 

#include "game.h"

int main(int argc, char* argv[])
{
  int answer = generate_random_number(1, 100), player_guess = 0, count = 0;

  if (guess(&player_guess, &count) < 0)
  {
    return -1;
  }
  
   while (player_guess != answer) {
    if (player_guess > answer) {
      printf("too high, try again.. ");
      guess(&player_guess, &count);
    } else {
      printf("too low, try again.. ");
      guess(&player_guess, &count);
    }
  }

  printf("you win, you found the answer in %d tries\n", count);
  return 0;
}
