#include "Figura.h"
Figura::Figura(int x, int y, string nombre) {
	this->x = x;
	this->y = y;
	this->dx = 5;
	this->dy = 5;
	this->nombre = nombre;
	srand(time(0));
	this->r = rand() % 256; 
	this->g = rand() % 256; 
	this->b = rand() % 256;
}
Figura::~Figura() {}
int Figura::getX() { return this->x; }
int Figura::getY() { return this->y; }
int Figura::getDx() { return this->dx; }
int Figura::getDy() { return this->dy; }
string Figura::getNombre() { return this->nombre; }
int Figura::getR() { return this->r; }
int Figura::getG() { return this->g; }
int Figura::getB() { return this->b; }
void Figura::setX(int nuevoX) { this->x = nuevoX; }
void Figura::setY(int nuevoY) { this->y = nuevoY; }
void Figura::setDx(int nuevoDx) { this->dx = nuevoDx; }
void Figura::setDy(int nuevoDy) { this->dy = nuevoDy; }
void Figura::setLimites(int ancho, int alto) { this->limiteAncho = ancho; this->limiteAlto = alto; }
