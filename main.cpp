#include "washing_machine.h"

int main() {
    WashingMachine myWashingMachine = inputWashingMachine();

    std::cout << "My Washing Machine:\n";
    printWashingMachine(myWashingMachine);

    return 0;
}