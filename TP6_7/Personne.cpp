#include "Personne.h"

Personne::Personne(string nom, string prenom, string adresse, string telephone){
    this->nom=nom;
    this->prenom=prenom;
    this->adresse=adresse;
    this->telephone=telephone;
}

void Personne::affiche(){
    cout<<"{nom="<<nom<<", prenom="<<prenom<<", adresse="<<adresse<<", telephone="<<telephone<<"}\n";
}

string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}

string Personne::getAdresse(){
    return adresse;
}

string Personne::getTelephone(){
    return telephone;
}

void Personne::setNom(string nom){
    this->nom=nom;
}

void Personne::setPrenom(string prenom){
    this->prenom=prenom;
}

void Personne::setAdresse(string adresse){
    this->adresse=adresse;
}

void Personne::setTelephone(string telephone){
    this->telephone=telephone;
}