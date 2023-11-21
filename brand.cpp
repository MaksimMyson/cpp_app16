#include "brand.h"

void printBrand(Brand brand) {
    switch (brand) {
    case Brand::LG:
        std::cout << "LG";
        break;
    case Brand::Samsung:
        std::cout << "Samsung";
        break;
    case Brand::Whirlpool:
        std::cout << "Whirlpool";
        break;
    case Brand::Bosch:
        std::cout << "Bosch";
        break;
    case Brand::Electrolux:
        std::cout << "Electrolux";
        break;
    }
}

Brand inputBrand() {
    int choice;
    std::cout << "Select a brand:\n";
    std::cout << "1. LG\n2. Samsung\n3. Whirlpool\n4. Bosch\n5. Electrolux\n";
    std::cout << "Enter the number corresponding to your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        return Brand::LG;
    case 2:
        return Brand::Samsung;
    case 3:
        return Brand::Whirlpool;
    case 4:
        return Brand::Bosch;
    case 5:
        return Brand::Electrolux;
    default:
        std::cout << "Invalid choice. Defaulting to LG.\n";
        return Brand::LG;
    }
}