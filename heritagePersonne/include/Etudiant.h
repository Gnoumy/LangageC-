#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"

enum class Niveau {DEUG, Licence, Maitrise};
class Etudiant:public Personne
{
    private:
        float note[3];
        Niveau niveau;
        static int obtention;
    public:
        Etudiant(string, string, int, float[], Niveau);
        virtual ~Etudiant();
        string info();
        string resultat(); //admis ou pas avec la moyenne
        float getMoyenne();

    protected:


};

#endif // ETUDIANT_H
