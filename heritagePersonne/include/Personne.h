#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>

using namespace std;

class Personne
{
    private:
        string nom;
        string prenom;
        static int majorite;
        bool estMajeur();

    protected:
        int age;

    public:
        Personne(string pNom, string pPrenom, int pAge);
        Personne() = default; //autorise la création d'un objet avec un constructeur par défaut
        virtual ~Personne();
        virtual string info(); // Polymorphisme de la fonction info

        void setNom(string pNom);
        void setPrenom(string pPrenom);
        void setAge(int pAge);

        string getNom(){return this->nom;};
        string getPrenom(){return this->prenom;};
        int getAge(){return this->age;};

        //string info();
        string getInitials();

        static void ChangeMajorite(int);
};

#endif // PERSONNE_H
