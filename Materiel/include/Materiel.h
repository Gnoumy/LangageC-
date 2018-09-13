#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>

#define lgTab 30

using namespace std;
class Materiel
{
    public:
        Materiel();
        virtual ~Materiel();
        //setters
        void setReference(int);
        void setPrix(float);
        void setDesignation(char *);
        void setMarque(string);

        //getters
        int getReference();
        float getPrix();
        char * getDesignation();
        string getMarque();

        float getTVA(float txtva=20);
        float getTTC();

        void affiche();

    protected:

    private:
        int numero;
        char designation[lgTab+1];
        float prix;
        bool prixDefinit();
        string marque;
};

#endif // MATERIEL_H
