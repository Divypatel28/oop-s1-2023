#include "Play.h"

int main() {
    
    Play game;

    game.initPlay(2, 4, 20, 20);  // 2 persona, 5 snares, in a 15x15 matrix

    game.playCycle(30, 4.0);  // Limit of number of cycles is 20, Snare dist: 4.0 Units

    return 0;
}