#include "cuadrilatero.h"

cuadrilatero::cuadrilatero()
{
}

cuadrilatero::cuadrilatero(int lad)
{
	lado = lad;
}

int cuadrilatero::area() {
	int area = lado * lado;
	return area;
}

int cuadrilatero::perimetro() {
	int perimetro = 4 * lado;
	return perimetro;
}

cuadrilatero::~cuadrilatero()
{
}
