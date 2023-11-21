#ifndef BOILER_H
#define BOILER_H

#include "brand.h"
#include "color.h"

struct Boiler {
    Brand brand;
    Color color;
    int power;
    double volume;
    int heatingTemperature;
};

void printBoiler(const Boiler& boiler);
Boiler inputBoiler();

#endif 
