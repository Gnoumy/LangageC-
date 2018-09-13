#include "Tableau.h"
#include <iostream>
using namespace std;
Tableau::Tableau(int nb) //constructeur
{
    dim = nb;
    adr = new int[dim];
    for(int i=0; i<dim; i++)
    {
        adr[i]=10+i;
    }
}

Tableau::~Tableau()
{
    delete adr;
}

Tableau::Tableau(Tableau &tBase) //constructeur par RECOPIE
{
    dim = tBase.dim;
    adr = new int[dim];
    for(int i=0; i<dim;i++)
    {
        adr[i]=tBase.adr[i];
    }
}

void Tableau::affiche()
{
    for(int i=0; i<dim;i++)
    {
        cout << "i: " << i << " = " << adr[i] << endl;
    }
}

void Tableau::changeVal(int index, int val)
{
    if(index < dim)
    {
        adr[index] = val;
    }

}
