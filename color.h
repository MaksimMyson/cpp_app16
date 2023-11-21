#ifndef COLOR_H
#define COLOR_H

#include <iostream>

namespace std {

	enum class Color { WHITE, BLACK, RED, BLUE, GREEN };

	void printColor(Color color);
	Color inputColor();

} 

#endif