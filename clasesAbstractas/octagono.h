#pragma once
#include "poligonos.h"
class octagono :
	public poligonos
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	octagono();
	octagono(int lado, int apotema);
	~octagono();
};

