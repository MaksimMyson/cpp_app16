#include "iron.h"
#include <iostream>
#include <string>

namespace std {

    void printIron(const Iron& iron) {
        cout << "Brand: ";
        printBrand(iron.brand);

        cout << "\nModel: " << iron.model << "\n";

        cout << "Color: ";
        printColor(iron.color);

        cout << "\nMin Temperature: " << iron.minTemperature << " °C\n";
        cout << "Max Temperature: " << iron.maxTemperature << " °C\n";
        cout << "Steam Function: " << (iron.steamFunction ? "Yes" : "No") << "\n";
        cout << "Power: " << iron.power << " W\n";
    }

    Iron inputIron() {
        Iron iron;

        cout << "Enter the brand of the iron:\n";
        iron.brand = inputBrand();

        cout << "Enter the model of the iron: ";
        cin.ignore();  // Ignore newline character left in the buffer
        getline(cin, iron.model);

        cout << "Enter the color of the iron:\n";
        iron.color = inputColor();

        cout << "Enter the minimum temperature of the iron (in °C): ";
        cin >> iron.minTemperature;

        cout << "Enter the maximum temperature of the iron (in °C): ";
        cin >> iron.maxTemperature;

        cout << "Does the iron have a steam function? (1 for Yes, 0 for No): ";
        cin >> iron.steamFunction;

        cout << "Enter the power of the iron (in W): ";
        cin >> iron.power;

        return iron;
    }

}