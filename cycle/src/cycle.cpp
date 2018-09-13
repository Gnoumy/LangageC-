//============================================================================
// Name        : cycle.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int * fonction()
{
	int automatique = 10;
	return &automatique;
}
int fonction2()
{
	int automatique = 10;
	return automatique;
}
int * fonction3() //pointeur
{
	int *pVal = new int(50);
	return pVal;
}
int main() {
	/*int * p = nullptr;
	p = fonction();
	cout << "P: " << *p; */

	int p2 = fonction2();
	cout << "P2: " << p2;

	int *p3 = fonction3();
	cout << "P3: " << *p3;
	delete p3; //tout objet construit doit être détruit
	return 0;
}

