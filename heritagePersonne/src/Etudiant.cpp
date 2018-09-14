#include "Etudiant.h"
#include "Niveau.h"
#include <sstream>
using namespace std;

int Etudiant::obtention= 10; //variable commune à toutes les instances

Etudiant::Etudiant(string nom, string prenom, int age, float n, float n2, float n3):Personne(nom, prenom, age)
{
    note[0] = n;
    note[1] = n2;
    note[2] = n3;
}

Etudiant::~Etudiant()
{
    //dtor
}

string Etudiant::info()
{
    ostringstream infoEtudiant;
    infoEtudiant << Personne::info();
    infoEtudiant << "Note 1: " <<this->note[0] << " - Note 2: " << this->note[1] << " - Note 3: " << this->note[2]<<endl;
    infoEtudiant << Etudiant::resultat() <<endl;

    return infoEtudiant.str();
}

float Etudiant::getMoyenne()
{
    float resultat;

    resultat = (this->note[0]+this->note[1]+this->note[2])/3;

    return resultat;
}

string Etudiant::resultat()
{
    ostringstream infoEtudiant;
    if(getMoyenne()<Etudiant::obtention)
        infoEtudiant <<"Refuse avec une moyenne de: " << Etudiant::getMoyenne() <<endl;
    else
        infoEtudiant <<"Accepte avec une moyenne de: " << Etudiant::getMoyenne() <<endl;
    return infoEtudiant.str();
}
