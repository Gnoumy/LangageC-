#include "Point.h"
#include <iostream>
/**************  Getters  **********/
int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

/**************  Setters  **********/
void Point::setX(int vx)
{
	if(vx <0)
		x = 0;
	else
		x = vx;


}
void Point::setY(int vy)
{
	y = vy;
}

void Point::afficher()
{
	std::cout << "Nom: "<< getNom() << std::endl;
	std::cout << "x: " << getX() 	<< std::endl;
	std::cout << "y: " << getY() 	<< std::endl;
}

void Point::raz(int nb)
{
	setX(nb);
	setY(nb);
}

void Point::raz(int nb1, int nb2)
{
	setX(nb1);
	setY(nb2);
}

char Point::getNom()
{
	return nom;
}
void Point::setNom(char x)
{
	nom = toupper(x);
}

