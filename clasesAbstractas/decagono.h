#pragma once
#include "poligonos.h"
class decagono :
	public poligonos
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	decagono();
	decagono(int lado, int apotema);
	~decagono();
};

