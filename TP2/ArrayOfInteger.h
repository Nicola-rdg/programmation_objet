#ifndef ARRAYOFINTEGER_H
#define ARRAYOFINTEGER_H

class ArrayOfInteger
{
private:
    int* tableau;
    int taille;
    static int compteur;
public:
    ArrayOfInteger();
    ArrayOfInteger(const ArrayOfInteger&a);
    void affichage();
    int appartient(int);
    void retirer(int);
    void ajouter(int);
    int getCompteur();
    int identique(ArrayOfInteger);
    int getTaille();
};



#endif