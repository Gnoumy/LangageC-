#include <iostream>
#include "Personne.h"
#include "Salarie.h"

using namespace std;

int main()
{
    /****** Instanciation des objets *****/
    Personne p("Martin", "Jean", 24);
    Personne p2("Martin", "Steve", 12);
    Salarie  s("Martin", "Steve", 44, 20010);
    /********* FIN Instanciation *********/
    cout<<"----- Personne -----" <<endl;
    cout<<p.info() << p.getInitials() <<endl;

    Personne::ChangeMajorite(45); //appel de la fonction static ChangeMajorite

    cout<<p2.info();
    cout<< endl << "----- Salarie -----" <<endl;
    cout<<s.info();

    return 0;
}
