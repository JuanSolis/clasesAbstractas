#pragma once
#include "poligonos.h"
class heptagono :
	public poligonos
{
	public:
		int lado;
		int apotema;
		int area();
		int perimetro();
	public:
		heptagono();
		heptagono(int lado, int apotema);
		~heptagono();
};

