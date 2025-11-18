#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H
#include "Personnel.h"

class ListePersonnel
{
private:
    Personnel** tab;
    int nb;
    int taille;

public:
    ListePersonnel(int taille=3);
    void doubleTableau();
    void ajoutPersonnel(Personnel* ptPersonnel);
    void afficherSalaires();
    Personnel getPersonnel(int);
};

#endif