#include "Personnel.h"

Personnel::Personnel(const Personne&personne,float salaire):Personne(personne){
    this->salaire=salaire;
}

float Personnel::calculSalaire(){
    return salaire;
}

float Personnel::getSalaire(){
    return salaire;
}

void Personnel::setSalaire(float salaire){
    this->salaire=salaire;
}

void Personnel::affiche(){
    cout<<"[";
    Personne::affiche();
    cout<<", salaire="<<salaire<<"]\n";
}