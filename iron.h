#ifndef IRON_H
#define IRON_H

#include "brand.h"
#include "color.h"

namespace std {

    struct Iron {
        Brand brand;
        std::string model;
        Color color;
        int minTemperature;
        int maxTemperature;
        bool steamFunction;
        int power;
    };

    void printIron(const Iron& iron);
    Iron inputIron();

} 

#endif