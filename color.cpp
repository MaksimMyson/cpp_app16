#include "color.h"

namespace std {

    void printColor(Color color) {
        switch (color) {
        case Color::WHITE:
            cout << "White";
            break;
        case Color::BLACK:
            cout << "Black";
            break;
        case Color::RED:
            cout << "Red";
            break;
        case Color::BLUE:
            cout << "Blue";
            break;
        case Color::GREEN:
            cout << "Green";
            break;
        }
    }

    Color inputColor() {
        int choice;
        cout << "Select a color:\n";
        cout << "1. White\n2. Black\n3. Red\n4. Blue\n5. Green\n";
        cout << "Enter the number corresponding to your choice: ";
        cin >> choice;

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
            cout << "Invalid choice. Defaulting to White.\n";
            return Color::WHITE;
        }
    }

}