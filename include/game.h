#ifndef GAME_H
#define GAME_H

// generate_random_number generates a random integer value between min_num and max_num
int generate_random_number(int min_num, int max_num);

// guess handles setting a new guess and incrementing the guess counter 
int guess(int* g, int* c);

#endif
