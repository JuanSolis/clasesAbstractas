#pragma once
#include "poligonos.h"
class hexagono :
	public poligonos
{
	public:
		int lado;
		int apotema;
		int area();
		int perimetro();
	public:
		hexagono();
		hexagono(int lado, int apotema);
		~hexagono();
};

