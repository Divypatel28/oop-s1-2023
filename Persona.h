#ifndef PERSONA_H
#define PERSONA_H
#include "Spot.h"
//Persona.h
class Persona : public Spot {

public:
    Persona(int x, int y) : Spot(x, y, 'P') {}

    void change(int dx, int dy) {

        std::tuple<int, int> loc = getLoc();

        int y = std::get<1>(loc) + dy;
        int x = std::get<0>(loc) + dx;

        setLoc(x, y);
    }
};

#endif