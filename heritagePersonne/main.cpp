#include <iostream>
#include "Personne.h"
#include "Salarie.h"
using namespace std;

int main()
{
    Personne p("Martin", "Jean", 24);
    Personne p2("Martin", "Steve", 12);


    Salarie s("Martin", "Steve", 12, 20010);
    cout<<"----- Personne -----" <<endl;
    cout<<p.info();
    cout<<p2.info();
    cout<<"----- Salarie -----" <<endl;
    cout<<s.info();
    return 0;
}
