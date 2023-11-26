#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "animal.h"

class Zoo {
public:
    void addAnimal(const Animal& animal);
    void printAnimals();
    void makeSounds();

private:
    std::vector<Animal> animals;
};

#endif