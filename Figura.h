#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace System::Drawing;

class Figura
{
protected:
	int x, y;
	int dx, dy; 
	string nombre; 
	int r, g, b; 
	int limiteAncho, limiteAlto;
public:
	Figura(int x, int y, string nombre);
	~Figura();
	int getX();
	int getY();
	int getDx();
	int getDy();
	string getNombre();
	int getR();
	int getG();
	int getB();
	void setX(int nuevoX);
	void setY(int nuevoY);
	void setDx(int nuevoDx);
	void setDy(int nuevoDy);
	void setLimites(int ancho, int alto);
	virtual void mover()=0;
	virtual double area() = 0;
};

