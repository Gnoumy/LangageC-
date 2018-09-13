//============================================================================
// Name        : namespace.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//création de notre namespace personnalisé
namespace monNamespace
{
	void maFonction()
	{
		cout << "Je suis la fonction de monNamespace" << endl;
	}
}

void maFonction()
{
	cout << "Je suis ma fonction" << endl;
}
int main() {
	//appel de la fonction maFonction() dans le namespace standard
	maFonction(); //affichera "Je suis ma fonction"

	// appel de la fonction maFonction() du namespace monNamespace
	monNamespace::maFonction(); //affichera "Je suis la fonction de monNamespace"
	enum class SEX{Masculin='M', Feminin='F'};
	char Masculin = 'O';
	auto var = (char)SEX::Masculin;
	cout << "Var: " << var;

	return 0;
}

