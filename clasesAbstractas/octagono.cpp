#include "octagono.h"

octagono::octagono()
{
}

octagono::octagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int octagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int octagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

octagono::~octagono()
{
}
