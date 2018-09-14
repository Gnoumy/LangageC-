#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Niveau.h"
#include "Personne.h"

class Etudiant:public Personne
{
    private:
        float note[3];
        Niveau niveau;
        static int obtention;
    public:
        Etudiant(string, string, int, float, float, float);
        virtual ~Etudiant();
        string info();
        string resultat(); //admis ou pas avec la moyenne
        float getMoyenne();

    protected:


};

#endif // ETUDIANT_H
