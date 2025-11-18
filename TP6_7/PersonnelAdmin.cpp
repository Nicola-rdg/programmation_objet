#include "PersonnelAdmin.h"

PersonnelAdmin::PersonnelAdmin():Personnel(){
    heureSup=0;
    taux=0;
}

PersonnelAdmin::PersonnelAdmin(const Personne&personne,float salaire,int heureSup,float taux):Personnel(personne,salaire){
    this->heureSup=heureSup;
    this->taux=taux;
}

float PersonnelAdmin::calculSalaire(){
    return getSalaire()+(taux*heureSup);
}

void PersonnelAdmin::affiche(){
    Personnel::affiche();
    cout<<", heureSup="<<heureSup<<", taux="<<taux;
}