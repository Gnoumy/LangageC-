#include "Materiel.h"
#include <iostream>
#include <string.h>
Materiel::Materiel()
{
    //ctor
}

Materiel::~Materiel()
{
    //dtor
}

using namespace std;

void Materiel::setReference(int num)
{
	numero = num;
}

void Materiel::setPrix(float chiffre)
{
	if (chiffre <= 0)
	{
		prix =0;
	}
	else{
		prix = chiffre;
	}
}

void Materiel::setDesignation(char * chaine)
{
	if(strlen (chaine) < 20)
		strcpy(designation, chaine);
	else
		strcpy(designation, "NC");
}

char * Materiel::getDesignation()
{
	return designation;
}

int Materiel::getReference()
{
	return numero;
}

float Materiel::getTVA(float txtva)
{
	return txtva;
}

float Materiel::getPrix()
{
	return prix;
}

float Materiel::getTTC()
{	float prix = getPrix();
	float tva = getTVA();
	prix = ( tva * prix )/100 + prix;
	return prix;
}

void Materiel::affiche()
{
	cout << "Designation: " << getDesignation() << endl;
	cout << "Reference n°" << getReference() << endl;
	if(prixDefinit() == true)
	{
		cout << "Prix HT: "  << getPrix()<< "€"<<endl;
		cout << "Taux TVA: " << getTVA() << "%"<<endl;
		cout << "Prix TTC: " << getTTC() << "€"<<endl;
		cout << "Marque: " << getMarque()<<endl;
	}
	else{
		cout << "Prix Non communiqué" << endl;
	}

}

bool Materiel::prixDefinit()
{
	return prix > 0;
}

void Materiel::setMarque(std::string vMarque)
{
	if(vMarque.length() <= 20)
		marque = vMarque;
	else
		marque ="NC";

	//if(vMarque.emp)
}

string Materiel::getMarque()
{
	return marque;
}

