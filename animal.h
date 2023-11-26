#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

struct Animal {
    std::string name;
    std::string classification;
    std::string nickname;
};

void fillAnimal(Animal& animal);
void printAnimal(const Animal& animal);
void makeSound(const Animal& animal);

#endif