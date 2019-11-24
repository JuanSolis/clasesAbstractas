#include "hexagono.h"

hexagono::hexagono()
{
}

hexagono::hexagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int hexagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int hexagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

hexagono::~hexagono()
{
}
