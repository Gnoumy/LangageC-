#ifndef SALARIE_H
#define SALARIE_H
#include "Personne.h"

class Salarie:public Personne
{
    private:
        float salaire;

    public:
        Salarie(string, string, int, float);
        virtual ~Salarie();

        void setSalaire(float);
        float getSalaire();
        double getSalaireAnnuel();
        string info();

    protected:


};

#endif // SALARIE_H
