#include "heptagono.h"



heptagono::heptagono()
{
}

heptagono::heptagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int heptagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int heptagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}


heptagono::~heptagono()
{
}
