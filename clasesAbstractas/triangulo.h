#pragma once
#include "poligonos.h"
class triangulo :
	public poligonos
{
	public:
		int lado1;
		int lado2;
		int lado3;
		int base;
		int altura;
	public:
		int area();
		int perimetro();
	public:
		triangulo();
		triangulo(int l1, int l2, int l3, int base, int altura);
		~triangulo();
};

