#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>

using namespace std;
class Personne
{
    private:
        string nom;
        string prenom;

    protected:
        int age;

    public:
        Personne(string pNom, string pPrenom, int pAge);
        virtual ~Personne();

        void setNom(string pNom);
        void setPrenom(string pPrenom);
        void setAge(int pAge);

        string getNom(){return this->nom;};
        string getPrenom(){return this->prenom;};
        int getAge(){return this->age;};

        string info();
        string getInitials();

};

#endif // PERSONNE_H
