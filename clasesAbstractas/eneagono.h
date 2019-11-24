#pragma once
#include "poligonos.h"
class eneagono :
	public poligonos
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	eneagono();
	eneagono(int lado, int apotema);
	~eneagono();
};

