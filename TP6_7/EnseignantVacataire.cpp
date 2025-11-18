#include "EnseignantVacataire.h"

EnseignantVacataire::EnseignantVacataire(const Personne&personne,float salaire,string casier,int nbreHeures,float taux):Personnel(personne,salaire){
    this->casier=casier;
    this->nbreHeures=nbreHeures;
    this->taux=taux;
}

float EnseignantVacataire::calculSalaire(){
    return getSalaire()+taux*nbreHeures;
}

void EnseignantVacataire::affiche(){
    Personnel::affiche();
    cout<<", casier="<<casier<<", nbreHeures="<<nbreHeures<<", taux="<<taux;
}