#include "Circulo.h"
Circulo::Circulo(int x, int y, int radio):Figura(x, y, "Circulo"), radio(radio) {
}
double Circulo::getRadio() { return this->radio; }
double Circulo::area() {
	return 3.1416 * radio * radio;
}
void Circulo::mover() {
	x += dx;
	int diam = (int)(radio * 2);
	if (x<0)
	{
		x = 0;
		dx = -dx;
	}
	else if (x + diam > limiteAncho)
	{
		x = limiteAncho - diam;
		dx = -dx;
	}
}
