//============================================================================
// Name        : surchage.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//la SURCHAGE est possible en C++ mais pas en C,
// les arguements retournés doivent etre différents ( int != double )
int carre(int);
double carre(double);

int main() {
	int val = 2;
	double val2 = 4.0;
	carre(val); //affichera " Int: 2"
	carre(val2); //affichera " Double: 4.0"
	return 0;
}

//il faut préciser le type de fonction ainsi que le type de variable
int carre (int val)
{
	cout<< "Int: " <<val<<endl;
	return val;
}

double carre (double val)
{
	cout<< "Double:" <<val <<endl;
	return val;
}




