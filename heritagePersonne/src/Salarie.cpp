#include "Salarie.h"
#include "Personne.h"
#include <sstream>
using namespace std;

Salarie::Salarie(string sNom, string sPrenom, int sAge, float sSalaire):Personne(sNom, sPrenom, sAge)
{
    setSalaire(sSalaire);
}

Salarie::~Salarie()
{
    //dtor
}

void Salarie::setSalaire(float s)
{
    this->salaire = s;
}

float Salarie::getSalaire()
{
    return this->salaire;
}

double Salarie::getSalaireAnnuel()
{
    return this->salaire*12;
}

string Salarie::info()
{
    ostringstream infoPersonne;
    infoPersonne << Personne::info()<< "Salaire: " << Salarie::getSalaire() <<endl;

    return infoPersonne.str();
}
