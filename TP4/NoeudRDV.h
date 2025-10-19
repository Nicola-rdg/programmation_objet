#ifndef NOEUDRDV_H
#define NOEUDRDV_H
#include "RDV.h"

class NoeudRDV
{
private:
    RDV rdv;
    NoeudRDV*suivant;
public:
    NoeudRDV(const RDV& rdv);
    NoeudRDV(const RDV& rdv,NoeudRDV*);
    ~NoeudRDV();
    RDV getRDV();
    NoeudRDV* getSuivant();
    void setRDV(RDV);
    void setSuivant(NoeudRDV*);
};



#endif