#ifndef SPOT_H
#define SPOT_H
#include <tuple>

//Spot.h

class Spot {


private:

    std::tuple<int, int> location;
    char category;

public:
    Spot() : location(0, 0), category(' ') {} 
    
    Spot(int x, int y, char category) : location(x, y), category(category) {}

    std::tuple<int, int> getLoc() const {

        return location;
    }

    char getCategory() const {

        return category;
    }

    void setLoc(int x, int y) {

        location = std::make_tuple(x, y);

    }

    void setCategory(char category) {

        this->category = category;
    }

};

#endif