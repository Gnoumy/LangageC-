#include "Personne.h"

#include <iostream>
#include <sstream>

using namespace std;

int Personne::majorite = 18; //variable commune à toutes les instances

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
    infoPersonne << endl << "Nom: "<<getNom() << endl <<"Prenom: " << getPrenom() << endl << "Age: " << getAge();
    infoPersonne << endl << ((estMajeur()==true)? "Majeur(e)" : "Mineur(e)") << endl;

    return infoPersonne.str();
}

string Personne::getInitials()
{
    ostringstream initials;
    initials << getNom().at(0) << getPrenom().at(0);

    return initials.str();
}

bool Personne::estMajeur()
{
    return age >= Personne::majorite;
}

void Personne::ChangeMajorite(int newMajorite)
{
    Personne::majorite = newMajorite;
}




