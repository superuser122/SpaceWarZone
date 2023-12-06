#include "globals.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int get_random_between(int from, int till){
    // Seed the random number generator
    srand(time(0));
    // Generate a random number within the specified range
    int random_number = (rand() % (till - from + 1)) + from;
    return random_number;
}
