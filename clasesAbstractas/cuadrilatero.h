#pragma once
#include "poligonos.h"
class cuadrilatero :
	public poligonos
{
	public:
		int lado;
		int area();
		int perimetro();
	public:
		cuadrilatero();
		cuadrilatero(int lado);
		~cuadrilatero();
};

