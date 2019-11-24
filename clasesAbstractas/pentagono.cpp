#include "pentagono.h"



pentagono::pentagono()
{
}

pentagono::pentagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int pentagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int pentagono::perimetro() {
	int perimetro = 5 * lado;
	return perimetro;
}

pentagono::~pentagono()
{
}
