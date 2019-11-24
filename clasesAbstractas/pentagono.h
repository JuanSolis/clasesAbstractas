#pragma once
#include "poligonos.h"
class pentagono :
	public poligonos
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	pentagono();
	pentagono(int lado, int apotema);
	~pentagono();
};

