#include "EnseignantPermanent.h"

EnseignantPermanent::EnseignantPermanent(const Personne&personne,float salaire,string bureau,int grade,float primeMensuelle):Personnel(personne,salaire){
    this->bureau=bureau;
    this->grade=grade;
    this->primeMensuelle=primeMensuelle;
}

float EnseignantPermanent::calculSalaire(){
    return getSalaire()+(grade*primeMensuelle)/100;
}

void EnseignantPermanent::affiche(){
    Personnel::affiche();
    cout<<", bureau="<<bureau<<", grade="<<grade<<", primeMensuelle="<<primeMensuelle;
}