#include "Personne.h"

#include <iostream>
#include <sstream>

using namespace std;

Personne::Personne( string pNom, string pPrenom, int pAge)
{
    this->setNom(pNom);
    this->setPrenom(pPrenom);
    this->setAge(pAge);
}

Personne::~Personne()
{
    //dtor
}

void Personne::setNom(string pNom)
{
    this->nom = pNom;
}

void Personne::setPrenom(string pPrenom)
{
    this->prenom = pPrenom;
}

void Personne::setAge(int pAge)
{
    if(pAge <16)
        this->age = 16;
    else
        this->age = pAge;
}

string Personne::info()
{
    ostringstream infoPersonne;
    infoPersonne << "Nom: "<<getNom() << endl <<"Prenom: " << getPrenom() << endl << "Age: " << getAge()<<endl;

    return infoPersonne.str();
}

string Personne::getInitials()
{
    ostringstream initials;
    initials << getNom().at(0) << getPrenom().at(0);

    return initials.str();

}
