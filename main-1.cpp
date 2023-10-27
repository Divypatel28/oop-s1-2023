#include <iostream>
#include "Spot.h"
#include "Assists.h"
// main-1.cpp

int main() {
    Spot spot(1, 2, 'A');
    std::cout << "Initiated the location: (" << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << ")" << std::endl;

    std::cout << "Initiated the category: " << spot.getCategory() << std::endl;

    spot.setLoc(3, 4);
    spot.setCategory('B');
    std::cout << "The location updated to: (" << std::get<0>(spot.getLoc()) << "," << std::get<1>(spot.getLoc()) << ")" << std::endl;

    std::cout << "The category updated to: " << spot.getCategory() << std::endl;

    auto randomLoc = Assists::createRandomLoc(10, 10);
    std::cout << "The random generated location is: (" << std::get<0>(randomLoc) << "," << std::get<1>(randomLoc) << ")" << std::endl;

    auto distance = Assists::evaluateDistance(std::make_tuple(0, 0), std::make_tuple(3, 4));

    std::cout << "The distance between (0,0) to (3,4) is: " << distance << std :: endl;

return 0;
}
