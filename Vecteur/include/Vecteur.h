#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
    private:
        float x, y, z;
    protected:

    public:
        Vecteur();
        virtual ~Vecteur();

        void setX(float);
        void setY(float);
        void setZ(float);

        float getX();
        float getY();
        float getZ();

        void addition(Vecteur);
        float scalaire(Vecteur &);
        void afficher();



};

#endif // VECTEUR_H
