#include <time.h> // time
#include <stdlib.h> // srand
#include <stdio.h> //scanf, printf

#include "game.h"

int generate_random_number(int min_num, int max_num)
{
  int result = 0, low_num = 0, hi_num = 0;

  if (min_num < max_num)
  {
     low_num = min_num;
     hi_num = max_num + 1; // include max_num in output
  } else {
     low_num = max_num + 1; // include max_num in output
     hi_num = min_num;
  }

  srand(time(NULL));
  result = (rand() % (hi_num - low_num)) + low_num;
  return result;
}

int guess(int* g, int* c)
{
  printf("guess a number between 1 and 100: ");
  if (scanf("%d", g) < 1) {
    perror("scanf");
    return -1;
  }
  *c += 1;
  return 0;
}
