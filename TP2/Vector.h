#ifndef VECTOR_H
#define VECTOR_H
class Vector

{
private:
    int dimension;
    double vecteur[];
    static int compteur;
public:
     Vector(int);
     Vector(const Vector&v);
     void saisir();
     double getCoordinates(int);
     void setCoordinates(int,double);
     void affichage();
     double norme();
     int egal(Vector);
     double prodScalaire(Vector);
     Vector prodReel(double);
     Vector addition(Vector);
     int getCompteur();
};

#endif