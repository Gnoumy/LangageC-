#include <iostream>
#include "Materiel.h"
using namespace std;

int main()
{
    //déclaration de l'objet de class Materiel
	Materiel mat;

	//initialisation des setters
	mat.setPrix(10);
	mat.setReference(124);
	mat.setDesignation("Souris");
	mat.setMarque("Test");

	mat.affiche();
    return 0;
}
