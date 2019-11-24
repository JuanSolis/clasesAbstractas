#include "eneagono.h"

eneagono::eneagono()
{
}

eneagono::eneagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int eneagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int eneagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

eneagono::~eneagono()
{
}
