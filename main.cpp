#include "zoo.h"

int main() {
    Zoo myZoo;

    Animal animal1;
    fillAnimal(animal1);
    myZoo.addAnimal(animal1);

    Animal animal2;
    fillAnimal(animal2);
    myZoo.addAnimal(animal2);

    myZoo.printAnimals();
    myZoo.makeSounds();

    return 0;
}