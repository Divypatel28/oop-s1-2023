#include "Play.h"

int main() {
    Play game;

    game.playCycle(35, 4.0);  
    
    game.initPlay(2, 4, 20, 20); //20x20 matrix

    return 0;
}