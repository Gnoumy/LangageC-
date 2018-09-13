/*
 * Point.h
 *
 *  Created on: 12 sept. 2018
 *      Author: formation
 */

#ifndef POINT_H_
#define POINT_H_

class Point
{
	private:
		int x;
		int y;
		char nom;

	public:
		//setters
		void setX(int);
		void setNom(char);
		void setY(int);

		//getters
		int getY();
		int getX();
		char getNom();

		//Méthode d'affichage
		void afficher();
		void raz(int);
		void raz(int, int);


};

#endif /* POINT_H_ */

