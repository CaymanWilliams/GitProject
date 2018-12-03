#include "pch.h"
#include "Refrigerator.h"

Refrigerator::Refrigerator()
{
	Refrigerator::numBananas = 0;
}

Refrigerator::Refrigerator(int numBananas) {
	Refrigerator::numBananas = numBananas;
}

int Refrigerator::getBananas() {
	return Refrigerator::numBananas;
}

void Refrigerator::setBananas(int numBananas) {
	Refrigerator::numBananas = Refrigerator::numBananas + numBananas;
}

Refrigerator::~Refrigerator()
{
}
