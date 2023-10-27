#ifndef PLAY_H
#define PLAY_H
#include <vector>
#include <iostream>
#include "Spot.h"
#include "Persona.h"
#include "Snare.h"
#include "Assists.h"
//including all needed classes and libraries from previous questions 1 and 2
//Play.h

class Play {

private:
    std::vector<Spot*> matrix;


public:
    Play() {}
    std::vector<Spot*>& getMatrix() { 

        return matrix;
    }

    void initPlay(int numPersonas, int numSnares, int matrixHeight, int matrixWidth) {
        matrix.clear();


        for (int i = 0; i < numSnares; ++i) {
            auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            matrix.push_back(new Snare(std::get<0>(loc), std::get<1>(loc)));
        }


        for (int i = 0; i < numPersonas; ++i) {
            auto loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            matrix.push_back(new Persona(std::get<0>(loc), std::get<1>(loc)));
        }

    }

       void playCycle(int maxCycles, double snareTriggerDistance) {
    
        int cycles = 0;
        while (cycles < maxCycles) {
            for (Spot* spot : matrix) {
                if (spot->getCategory() == 'P') {
                    Persona* persona = static_cast<Persona*>(spot);
                    persona->shift(1, 0);

                    if (std::get<0>(persona->getLoc()) > static_cast<int>(matrix.size())) {
                        std::cout << "Victory!! This Persona has just won the game!!" << std::endl;
                        return;
                    }
                }
            }

            cycles++;
        }

        std::cout << " GAME OVER!!! Nice Try! But the limit of cycles has been reached!" << std::endl;
    }
};

#endif