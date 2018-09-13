#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
/*****  Création des Objets  *****/
    Vecteur v;
    Vecteur v2;

/****Initialisation des attribus  ***/
    v.setX(4);
    v.setY(1);
    v.setZ(3);

    v2.setX(4);
    v2.setY(5);
    v2.setZ(8);

/*****  Affichage des résultats  *****/
    v.afficher();
    v2.afficher();

/*****  Addition et produit scalaire  *****/
    v.addition(v2);
    float res;
    res = v.scalaire(v2);
    cout << "Produit scalaire = " << res;


    return 0;
}
