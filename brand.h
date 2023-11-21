#ifndef BRAND_H
#define BRAND_H

#include <iostream>

namespace std {

	enum class Brand { PHILIPS, ROWENTA, TEFAL, BOSCH, PANASONIC };

	void printBrand(Brand brand);
	Brand inputBrand();

} // namespace std

#endif 