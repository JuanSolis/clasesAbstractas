#include "decagono.h"

decagono::decagono()
{
}

decagono::decagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int decagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int decagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

decagono::~decagono()
{
}
