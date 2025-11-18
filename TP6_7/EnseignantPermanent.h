#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H
#include "Personnel.h"

class EnseignantPermanent:public Personnel
{
private:
    string bureau;
    int grade;
    float primeMensuelle;
public:
    EnseignantPermanent(const Personne&personne,float,string,int,float);
    float calculSalaire();
    void affiche();
};

#endif