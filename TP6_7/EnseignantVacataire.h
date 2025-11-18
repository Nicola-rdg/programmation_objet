#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H
#include "Personnel.h"

class EnseignantVacataire:public Personnel
{
private:
    string casier;
    int nbreHeures;
    float taux;
public:
    EnseignantVacataire(const Personne&personne,float,string,int,float);
    float calculSalaire();
    void affiche();
};

#endif