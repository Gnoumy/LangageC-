//============================================================================
// Name        : poo.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int *pt = NULL;
	int var= 10;

	pt = &var;
	cout << *pt;


	int &ref_var=var;

	//ref_var = var;

	cout << ref_var;

	//POINTEUR CONSTANT
	int *const pointeur = &var;
	//int val2 = 100;

	cout << *pointeur;

	//POINTEUR sur info constante
	int val = 100;
	const int *pointeur2 = &var;
	cout << pointeur2 <<endl;
	pointeur2 = &val;
	cout << pointeur2;
	//(*pointeur2)++; //INTERDIT car c'est uns constante

	int ageUtilisateur = 16;




	return 0;
}
