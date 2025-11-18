#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Personne.h"

class Personnel:public Personne
{
private:
    float salaire;
public:
    Personnel();
    Personnel(const Personne&personne,float);
    virtual float calculSalaire();
    float getSalaire();
    void setSalaire(float);
    void affiche();
};

#endif