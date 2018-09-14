#include <iostream>
#include <typeinfo> // permet de connaitre les informations des classes
#include "Personne.h"
#include "Salarie.h"
#include "Etudiant.h"

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
    cout<< endl << "----- Tableau de Personnes -----" <<endl;
    Personne mesPers[3];

    mesPers[0] = p;
    mesPers[1] = p2;
    mesPers[2] = s;

    for(int i=0; i<3; i++)
    {
        cout << mesPers[i].info();
        // appellera la méthode infos de Personne et n'affichera pas le salaire
        // car la méthode info() n'est pas déclarée en tant que VIRTUAL
    }
    /************************************************************/

    /************************************************************/
    cout<< endl << "----- Tableau de new Personnes et salariés -----" <<endl;
    Personne * personnel[3];
    personnel[0] = new Personne("Delouvrier", "Romain", 26);
    personnel[1] = new Salarie("Delouvrier", "Romain", 26, 23000);
    personnel[2] = new Personne("Delouvrier", "Romain", 26);
    for(int i=0; i<3; i++)
    {
        cout << personnel[i]->info();
        //personnel est un pointeur, donc on utilise la flèche ->
    }
    /************************************************************/

    /************************************************************/
    cout<< endl << "----- Tableau de Personnes avec affichage du salaire -----" <<endl;
    Personne * tableau[3];
    tableau[0] = new Personne("Delouvrier", "Romain", 26);
    tableau[1] = new Salarie("Delouvrier", "Romain", 26, 23000);
    tableau[2] = new Personne("Delouvrier", "Romain", 26);

    for(int i=0; i<3; i++)
    {
        cout << tableau[i]->info();
        Salarie * objSal = dynamic_cast<Salarie*>(tableau[i]);
        cout << typeid(*tableau[i]).name() << endl; //affichera le nom de la classe en cours
        if(objSal != nullptr) // si objSal a une adresse mémoire, alors on rentre dans la condition
        {
            cout << endl << "Salaire Annuel: " << objSal->getSalaireAnnuel();
        }
    }
    /************************************************************/

    /************************************************************/
    cout<< endl << "----- Tableau d'Etudiants avec affichage du resultat -----" <<endl;
    Etudiant * tabEtud[3];
    tabEtud[0] = new Etudiant("Bond", "James", 26, 5,4,3);
    tabEtud[1] = new Etudiant("Kiki", "Romain", 26, 5,8,3);
    tabEtud[2] = new Etudiant("Hannibal", "Lecter", 26, 20,20,3);

    for(int i=0; i<3; i++)
    {

        Etudiant * objEtudiant = dynamic_cast<Etudiant*>(tabEtud[i]);
        //cout << typeid(*tabEtud[i]).name() << endl; //affichera le nom de la classe en cours
        if(objEtudiant != nullptr) // si objSal a une adresse mémoire, alors on rentre dans la condition
        {
             cout << tabEtud[i]->info();
            //cout << endl << "Etudiant: " << objEtudiant->resultat();
        }
    }
    /************************************************************/

    return 0;
}
