#ifndef SNARE_H
#define SNARE_H
#include "Spot.h"
#include "Influence.h"

//Snare.h
class Snare : public Spot, public Influence {

private:
    bool operative;


public:

    Snare(int x, int y) : Spot(x, y, 'S'), operative(true) {}

    bool isOperative() const {

        return operative;
    }

    void implement(Spot& spot) override {
        if (operative) {

            spot.setCategory('S');
            operative = false;

        }
    }
};
#endif