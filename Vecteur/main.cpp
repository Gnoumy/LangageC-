#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
    //instanciation de l'objet Vecteur
    Vecteur v;
    //initialisation des attribus avec les setters
    v.setX(4);
    v.setY(5);
    v.setZ(9);
    v.afficher();


    Vecteur v2;
    v2.setX(4);
    v2.setY(5);
    v2.setZ(9);
    v2.afficher();
    v.addition(v2);

    return 0;
}
