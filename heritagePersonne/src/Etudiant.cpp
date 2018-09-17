#include "Etudiant.h"
#include "Niveau.h"
#include <sstream>
using namespace std;

int Etudiant::obtention= 10; //variable commune à toutes les instances

Etudiant::Etudiant(string nom, string prenom, int age, float tnotes[], Niveau lvl):Personne(nom, prenom, age)
{
    this->niveau = lvl;
    for(int i=0; i<3; i++)
    {
        this->note[i]= tnotes[i];
    }
}

Etudiant::~Etudiant()
{
    //dtor
}

string Etudiant::info()
{

    ostringstream infoEtudiant;
    infoEtudiant << Personne::info();
    switch (niveau)
    {
        case Niveau::DEUG:
            infoEtudiant << "Deug BAC +2" <<endl;
            break;
        case Niveau::Licence:
            infoEtudiant << "Licence BAC+3" <<endl;
            break;
        case Niveau::Maitrise:
            infoEtudiant << "Maitrise BAC +5" <<endl;
            break;
    }
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
