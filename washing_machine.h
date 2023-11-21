#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H

#include "brand.h"
#include "color.h"

struct WashingMachine {
    Brand brand;
    Color color;
    int width;
    int length;
    int height;
    int power;
    int spinSpeed;
    int heatingTemperature;
};

void printWashingMachine(const WashingMachine& machine);
WashingMachine inputWashingMachine();

#endif
