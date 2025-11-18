#include "Eleve.h"

Eleve::Eleve(string nom, string prenom, string adresse, string telephone,string promotion,string groupeDeTD,float GPA):Personne(nom, prenom, adresse, telephone){
    this->promotion=promotion;
    this->groupeDeTD=groupeDeTD;
    this->GPA=GPA;
}

Eleve::Eleve(const Personne&personne,string promotion,string groupeDeTD,float GPA):Personne(personne){
    this->promotion=promotion;
    this->groupeDeTD=groupeDeTD;
    this->GPA=GPA;
}

string Eleve::getPromtion(){
    return promotion;
}

string Eleve::getGroupeDeTD(){
    return groupeDeTD;
}

float Eleve::getGPA(){
    return GPA;
}

void Eleve::setPromotion(string promotion){
    this->promotion=promotion;
}

void Eleve::setGroupeDeTD(string groupeDeTD){
    this->groupeDeTD=groupeDeTD;
}

void Eleve::setGPA(float GPA){
    this->GPA=GPA;
}

void Eleve::affiche(){
    cout<<'[';
    Personne::affiche();
    cout<<"promotion="<<promotion<<", groupe de TD="<<groupeDeTD<<", GPA="<<GPA<<"]\n";
}