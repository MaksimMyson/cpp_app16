#include "washing_machine.h"

void printWashingMachine(const WashingMachine& machine) {
    std::cout << "Brand: ";
    printBrand(machine.brand);

    std::cout << "\nColor: ";
    printColor(machine.color);

    std::cout << "\nDimensions (W x L x H): " << machine.width << " x " << machine.length << " x " << machine.height << " cm";
    std::cout << "\nPower: " << machine.power << " W";
    std::cout << "\nSpin Speed: " << machine.spinSpeed << " rpm";
    std::cout << "\nHeating Temperature: " << machine.heatingTemperature << " °C\n";
}

WashingMachine inputWashingMachine() {
    WashingMachine machine;
    machine.brand = inputBrand();

    std::cout << "Enter the color of the washing machine:\n";
    std::cout << "1. White\n2. Black\n3. Red\n4. Blue\n5. Green\n";
    std::cout << "Enter the number corresponding to your choice: ";
    int colorChoice;
    std::cin >> colorChoice;
    machine.color = static_cast<Color>(colorChoice - 1);

    std::cout << "Enter the width of the washing machine (in cm): ";
    std::cin >> machine.width;

    std::cout << "Enter the length of the washing machine (in cm): ";
    std::cin >> machine.length;

    std::cout << "Enter the height of the washing machine (in cm): ";
    std::cin >> machine.height;

    std::cout << "Enter the power of the washing machine (in W): ";
    std::cin >> machine.power;

    std::cout << "Enter the spin speed of the washing machine (in rpm): ";
    std::cin >> machine.spinSpeed;

    std::cout << "Enter the heating temperature of the washing machine (in °C): ";
    std::cin >> machine.heatingTemperature;

    return machine;
}