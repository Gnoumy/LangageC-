#include <iostream>
#include "Tableau.h"
using namespace std;

int main()
{
    Tableau t(5);
    t.affiche();

    Tableau t2=t; //Constructeur par recopie
    t2.affiche();

    t2.changeVal(3, 500); //on change la valeur de l'index 3 par 500
    t2.affiche();
    t.affiche();

    return 0;
}
