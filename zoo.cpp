#include "zoo.h"
#include <iostream>

void Zoo::addAnimal(const Animal& animal) {
    animals.push_back(animal);
}

void Zoo::printAnimals() {
    std::cout << "Zoo Animals:\n";
    for (const auto& animal : animals) {
        printAnimal(animal);
        std::cout << "-----------------\n";
    }
}

void Zoo::makeSounds() {
    std::cout << "All animals in the zoo are making sounds:\n";
    for (const auto& animal : animals) {
        makeSound(animal);
    }
}