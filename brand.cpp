#include "brand.h"

using namespace std;

void printBrand(Brand brand) {
    switch (brand) {
    case Brand::LG:
        cout << "LG";
        break;
    case Brand::Samsung:
        cout << "Samsung";
        break;
    case Brand::Whirlpool:
        cout << "Whirlpool";
        break;
    case Brand::Bosch:
        cout << "Bosch";
        break;
    case Brand::Electrolux:
        cout << "Electrolux";
        break;
    }
}

Brand inputBrand() {
    int choice;
    cout << "Select a brand:\n";
    cout << "1. LG\n2. Samsung\n3. Whirlpool\n4. Bosch\n5. Electrolux\n";
    cout << "Enter the number corresponding to your choice: ";
    cin >> choice;

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
        cout << "Invalid choice. Defaulting to LG.\n";
        return Brand::LG;
    }
}