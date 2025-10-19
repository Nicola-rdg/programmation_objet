#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda(){
    premier=NULL;
}

Agenda::Agenda(const Agenda&a){
    premier=a.premier;
}

Agenda::~Agenda(){
    delete premier;
}

void Agenda::ajoute(RDV r){
    NoeudRDV*nouveau,*courant,*precedent;
    nouveau=new NoeudRDV(r);
    precedent=NULL;
    courant=premier;
    
    //Exception : agenda vide ou RDV en premiere position
    if(premier==NULL || r.estAvant(premier->getRDV())){
        if(premier!=NULL && r.estEgal(premier->getRDV())){
            cout<<"Le RDV :\n";
            premier->getRDV().affiche();
            cout<<" est deja programme a cette date et heure\n";
            delete nouveau;
        }
        else{
            nouveau->setSuivant(premier);
            premier=nouveau;
            cout<<"Le RDV a bien ete ajoute\n";
        }
    }

    // Insertion du RDV au milieu de l'agenda
    else{
        while(courant!=NULL && courant->getRDV().estAvant(r)){
            precedent=courant;
            courant=courant->getSuivant();
        }
        if(courant!=NULL && courant->getRDV().estEgal(r)){
            cout<<"Un RDV :\n";
            courant->getRDV().affiche();
            cout<<"est deja programme a cette date et heure\n\n";
            delete nouveau;
        }
        else{
            nouveau->setSuivant(courant);
            precedent->setSuivant(nouveau);
            cout<<"Le RDV a bien ete ajoute\n";
        }
    }
}

void Agenda::enleve(const Date& d,const Heure& h){
    RDV r;
    r.setDate(d);
    r.setHeure(h);
    NoeudRDV *courant,*precedent;
    precedent=NULL;
    courant=premier;

    // Agenda vide
    if(premier==NULL){
        cout<<"L'agenda est vide, aucun RDV ne peut donc etre supprime\n";
    }

    // Suppression RDV en premiere place
    if (courant->getRDV().estEgal(r)){
        premier = courant->getSuivant();
        delete courant;
        cout << "Le RDV a bien ete supprime\n";
    }
    
    // Cas general
    else{
        while(courant!=NULL && courant->getRDV().estAvant(r)){
            precedent=courant;
            courant=courant->getSuivant();
        }
        if(courant!=NULL && courant->getRDV().estEgal(r)){
            precedent->setSuivant(courant->getSuivant());
            delete courant;
            cout<<"Le RDV a bien ete supprime\n";
        }
        else{
            cout<<"Aucun RDV correspondant a cette date et heure, donc aucun RDV supprime\n";
        }
    }
}

void Agenda::affiche(){
    RDV rdv;
    NoeudRDV *noeud=new NoeudRDV(rdv);
    noeud=premier;
    
    int i=1;
    cout<<"L'agenda est compose des RDV suivants : {\n";
    while(noeud!=NULL){
        cout<<"RDV"<<i<<" : \n";
        i++;

        rdv=noeud->getRDV();
        rdv.affiche();

        noeud=noeud->getSuivant();
    }
    cout<<"}\n";

    delete noeud;
}