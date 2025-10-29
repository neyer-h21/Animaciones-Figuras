#include "Rectangulo.h"
Rectangulo::Rectangulo(int x, int y, double ancho, double alto): Figura(x, y, "Rectangulo"), ancho(ancho), alto(alto) {}
double Rectangulo::getAncho() { return this->ancho; }
double Rectangulo::getAlto() { return this->alto; }

double Rectangulo::area() {
	return ancho * alto;
}
void Rectangulo::mover() {
	y += dy; 
	int h = (int)(alto);
	if (y<0)
	{
		y = 0;
		dy = -dy;
	}
	else if (y + h > limiteAlto)
	{
		y = limiteAlto - h;
		dy = -dy;
	}
}