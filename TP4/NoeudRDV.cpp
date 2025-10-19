#include "NoeudRDV.h"

NoeudRDV::NoeudRDV(const RDV& rdv){
    this->rdv=rdv;
    suivant=NULL;
}

NoeudRDV::NoeudRDV(const RDV& rdv,NoeudRDV*suiv){
    this->rdv=rdv;
    suivant=suiv;
}

NoeudRDV::~NoeudRDV(){
    delete suivant;
}

RDV NoeudRDV::getRDV(){
    return rdv;
}

NoeudRDV* NoeudRDV::getSuivant(){
    return suivant;
}

void NoeudRDV::setRDV(RDV rdv){
    this->rdv=rdv;
}

void NoeudRDV::setSuivant(NoeudRDV*suiv){
    suivant=suiv;
}