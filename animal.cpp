#include "animal.h"
#include <iostream>

void fillAnimal(Animal& animal) {
    std::cout << "Enter the name of the animal: ";
    std::getline(std::cin, animal.name);

    std::cout << "Enter the classification of the animal: ";
    std::getline(std::cin, animal.classification);

    std::cout << "Enter the nickname of the animal: ";
    std::getline(std::cin, animal.nickname);
}

void printAnimal(const Animal& animal) {
    std::cout << "Animal Information:\n";
    std::cout << "Name: " << animal.name << "\n";
    std::cout << "Classification: " << animal.classification << "\n";
    std::cout << "Nickname: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) {
    std::cout << "The animal named " << animal.name << " is making a sound.\n";
}