#include "color.h"

void printColor(Color color) {
    switch (color) {
    case Color::WHITE:
        std::cout << "White";
        break;
    case Color::BLACK:
        std::cout << "Black";
        break;
    case Color::RED:
        std::cout << "Red";
        break;
    case Color::BLUE:
        std::cout << "Blue";
        break;
    case Color::GREEN:
        std::cout << "Green";
        break;
    }
}

Color inputColor() {
    int choice;
    std::cout << "Select a color:\n";
    std::cout << "1. White\n2. Black\n3. Red\n4. Blue\n5. Green\n";
    std::cout << "Enter the number corresponding to your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        return Color::WHITE;
    case 2:
        return Color::BLACK;
    case 3:
        return Color::RED;
    case 4:
        return Color::BLUE;
    case 5:
        return Color::GREEN;
    default:
        std::cout << "Invalid choice. Defaulting to White.\n";
        return Color::WHITE;
    }
}