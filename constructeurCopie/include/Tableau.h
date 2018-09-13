#ifndef TABLEAU_H
#define TABLEAU_H

using namespace std;

class Tableau
{
    private:
        int dim;
        int *adr; //pointeur sur le premier élément du tableau

    public:
        Tableau(int nb); //constructeur
        Tableau(Tableau &tBase); //constructeur par RECOPIE
        virtual ~Tableau(); //destructeur

        void affiche();
        void changeVal(int index, int val);

    protected:


};

#endif // TABLEAU_H
