#include <tuple>
#include <cstdlib>
#include <cmath>
//Assists.h

class Assists {

public:

    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {

        int y = rand() % matrixHeight;

        int x = rand() % matrixWidth;

        return std::make_tuple(x, y);
    }

    static double evaluateDistance(std::tuple < int, int > loc1, std::tuple <int, int> loc2) {

        int y1, y2, x1, x2;
       
        std::tie(x2, y2) = loc2;

         std::tie(x1, y1) = loc1;

        return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    }
};
