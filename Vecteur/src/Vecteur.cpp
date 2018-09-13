#include "Vecteur.h"
#include <iostream>
using namespace std;
Vecteur::Vecteur()
{
    x = y = z = 0;
}

Vecteur::~Vecteur()
{
    //dtor
}

void Vecteur::setX(float nombre)
{
    x = nombre;
}

void Vecteur::setY(float nombre)
{
    y = nombre;
}

void Vecteur::setZ(float nombre)
{
    z = nombre;
}

float Vecteur::getX()
{
    return x;
}
float Vecteur::getY()
{
    return y;
}
float Vecteur::getZ()
{
    return z;
}
void Vecteur::afficher()
{
    cout << "<"<<getX() <<","<< getY() <<","<< getZ()<<">"<<endl;
}

void Vecteur::addition(Vecteur v2)
{
    setX( getX() + v2.getX());
    setY( getY() + v2.getY());
    setZ( getZ() + v2.getZ());

    cout << "<"<< this->x <<","<< this->y <<","<< this->z <<">"<<endl;
}

float Vecteur::scalaire(Vecteur & v)
{
    float resultat;
    resultat = x*v.x + y*v.y + z*v.z;
    return resultat;
}

