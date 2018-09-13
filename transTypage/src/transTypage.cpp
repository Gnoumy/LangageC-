//============================================================================
// Name        : transTypage.cpp
// Author      : Julien.G
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class B
{
public:
	virtual void afficher(){cout << "Je suis B" << endl;}
};

class C: public B
{
public:
	virtual void afficher() {cout << "Je suis C" << endl;}
	void aff() {cout << "Je suis C de C" << endl;}
};

class D: public B
{
public:
	virtual void afficher(){cout << "Je suis D" << endl;}
};

int main() {

/*
	struct point
	{
		int x, y;

	}p1, p2;

	point &ref_sur_p1 =  static_cast<point&>(p2);

	cout << ref_sur_p1.x;

	int i = 3;
	const int &rci = i;
	cout <<"rci: "<< rci;
	const_cast<int &>(rci) = 20;
	cout <<"rci: "<< rci << " i: " <<i;
*/

	B * tobjB[3];

	C *objC = new C();
	D *objD = new D();
	B *objB = new B();

	tobjB[0] = objC;
	tobjB[1] = objB;
	tobjB[2] = objD;

	C * objTemp = NULL;
	for(int i=0; i<3; i++)
	{
		tobjB[i]->afficher();
		objTemp = dynamic_cast<C*>(tobjB[i]);
		if(objTemp != NULL)
		{
			objTemp->aff();
		}

	}

	return 0;
}
