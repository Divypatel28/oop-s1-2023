#include <iostream>
#include <tuple>
#include "Snare.h"
#include "Persona.h"

int main() {
    Snare snare(8, 3);
    Persona persona(5, 9);

    std::cout << "The initiated snare lcation is (" << std::get<0>(snare.getLoc()) << "," << std::get<1>(snare.getLoc()) << ")" << std::endl;

    std::cout << "The snare category is " << snare.getCategory() << std::endl;

    std::cout << "Is the snare operative/functional? " << (snare.isOperative() ? "yes" : "no") << std::endl;

    std::cout << "\nThe initied persona's Location is (" << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << ")" << std::endl;
    
    std::cout << "Persona Category: " << persona.getCategory() << std::endl;


    snare.implement(persona);

    std::cout << "\nAfter Snare's influence on Persona. " << std::endl;
    std::cout << "The persona's location is (" << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << ")" << std::endl;
    std::cout << "The persona's Category is " << persona.getCategory() << std::endl;
    std::cout << "Is the snare operative/functional " << (snare.isOperative() ? "yes" : "no") << std::endl;

    persona.shift(1, 1);

    std::cout << "\nThe persona after it has been Changed or shifted: " << std::endl;
    std::cout << "The persona's lcation is: (" << std::get<0>(persona.getLoc()) << "," << std::get<1>(persona.getLoc()) << ")" << std::endl;

    return 0;
}