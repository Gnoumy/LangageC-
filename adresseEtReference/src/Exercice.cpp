//============================================================================
// Name        : Exercice.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef struct essai
{
	int n;
	float x;
}S_ESSAI;

//transmission par Adresse
void razAdresse(S_ESSAI *test)
{
	test->n = 0;
	test->x = 0;
}
//transmission par Référence
void razReference(S_ESSAI &test)
{
	test.n = 0;
	test.x = 0;
}

int main() {

	struct essai test;
	test.n = 4;
	test.x = 4.0;

	razAdresse(&test); //transmission par Adresse
	razReference(test);//transmission par Référence

	return 0;
}


