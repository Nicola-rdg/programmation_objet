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
    NoeudRDV*nouveau=new NoeudRDV(r);
    nouveau->setSuivant(premier);
    premier=nouveau;
}

void Agenda::enleve(){
    if(premier!=NULL){
        premier=premier->getSuivant();
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