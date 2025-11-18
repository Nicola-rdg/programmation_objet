#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H
#include "Personnel.h"

class PersonnelAdmin:public Personnel
{
private:
    int heureSup;
    float taux;
public:
    PersonnelAdmin();
    PersonnelAdmin(const Personne&personne,float,int,float);
    float calculSalaire();
    void affiche();
};

#endif