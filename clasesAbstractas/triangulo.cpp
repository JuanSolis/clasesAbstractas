#include "triangulo.h"

triangulo::triangulo()
{
}
triangulo::triangulo(int l1, int l2, int l3, int bas, int alt) {
	lado1 = l1;
	lado2 = l2;
	lado3 = l3;
	base = bas;
	altura = alt;
}

int triangulo::area() {
	int area = (base * altura) / 2;
	return area;
}

int triangulo::perimetro() {
	int perimetro = lado1 + lado2 + lado3;
	return perimetro;
}

triangulo::~triangulo()
{
}
