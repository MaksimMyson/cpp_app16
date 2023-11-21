#include "boiler.h"

using namespace std;

void printBoiler(const Boiler& boiler) {
    cout << "Brand: ";
    printBrand(boiler.brand);

    cout << "\nColor: ";
    printColor(boiler.color);

    cout << "\nPower: " << boiler.power << " W\n";
    cout << "Volume: " << boiler.volume << " liters\n";
    cout << "Heating Temperature: " << boiler.heatingTemperature << " °C\n";
}

Boiler inputBoiler() {
    Boiler boiler;

    cout << "Enter the brand of the boiler:\n";
    boiler.brand = inputBrand();

    cout << "Enter the color of the boiler:\n";
    boiler.color = inputColor();

    cout << "Enter the power of the boiler (in W): ";
    cin >> boiler.power;

    cout << "Enter the volume of the boiler (in liters): ";
    cin >> boiler.volume;

    cout << "Enter the heating temperature of the boiler (in °C): ";
    cin >> boiler.heatingTemperature;

    return boiler;
}

