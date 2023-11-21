#include "brand.h"

namespace std {

    void printBrand(Brand brand) {
        switch (brand) {
        case Brand::PHILIPS:
            cout << "Philips";
            break;
        case Brand::ROWENTA:
            cout << "Rowenta";
            break;
        case Brand::TEFAL:
            cout << "Tefal";
            break;
        case Brand::BOSCH:
            cout << "Bosch";
            break;
        case Brand::PANASONIC:
            cout << "Panasonic";
            break;
        }
    }

    Brand inputBrand() {
        int choice;
        cout << "Select a brand:\n";
        cout << "1. Philips\n2. Rowenta\n3. Tefal\n4. Bosch\n5. Panasonic\n";
        cout << "Enter the number corresponding to your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            return Brand::PHILIPS;
        case 2:
            return Brand::ROWENTA;
        case 3:
            return Brand::TEFAL;
        case 4:
            return Brand::BOSCH;
        case 5:
            return Brand::PANASONIC;
        default:
            cout << "Invalid choice. Defaulting to Philips.\n";
            return Brand::PHILIPS;
        }
    }

}