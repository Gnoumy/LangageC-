//importation de la classe Point
#include "Point.h"

// utilisation du namespace std
using namespace std;

int main()
{
	Point p;
	p.setX(10);
	p.setY(45);
	p.setNom('s');

	p.afficher(); // affichera x: 10 et y: 45

	p.raz(0); //on affecte la valeur 0
	p.afficher(); //affichera x:0 et y:0
	p.raz(1,2); //on affecte la valeur 1 et 2
	p.afficher(); //affichera x:1 et y:2

}


