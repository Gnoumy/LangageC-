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


    /************************************************************/
    Personne mesPers[3];

    mesPers[0] = p;
    mesPers[1] = p2;
    mesPers[2] = s;

    for(int i=0; i<3; i++)
    {
        cout << mesPers[i].info() << endl;
        // appellera la méthode infos de Personne et n'affichera pas le salaire
        // car la méthode info() n'est pas déclarée en tant que VIRTUAL
    }
    /************************************************************/

    /************************************************************/
    Personne * personnel[3];
    personnel[0] = new Personne("Delouvrier", "Romain", 26);
    personnel[1] = new Salarie("Delouvrier", "Romain", 26, 23000);
    personnel[2] = new Personne("Delouvrier", "Romain", 26);
    for(int i=0; i<3; i++)
    {
        cout << personnel[i]->info() << endl;
        //personnel est un pointeur, donc on utilise la flèche ->
    }
    /************************************************************/
    return 0;
}
