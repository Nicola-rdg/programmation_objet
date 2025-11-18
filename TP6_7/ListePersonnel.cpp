#include "ListePersonnel.h"

ListePersonnel::ListePersonnel(int taille){
    nb=0;
    this->taille=taille;
    tab=new Personnel*[taille];
}

void ListePersonnel::doubleTableau(){
    taille=2*taille;
    Personnel**nvTableau=new Personnel*[taille];
    for(int i=0;i<nb;i++){
        nvTableau[i]=tab[i];
    }
    tab=nvTableau;
}

void ListePersonnel::ajoutPersonnel(Personnel* ptPersonnel){
    if(nb<100){
        tab[nb]=ptPersonnel;
        nb++;
    }
    else{
        doubleTableau();
        tab[nb]=ptPersonnel;
        nb++;
    }
}

void ListePersonnel::afficherSalaires(){
    cout<<"[";
    for(int i=0;i<nb-1;i++){
        cout<<"{nom : "<<tab[i]->getNom()<<", salaire :"<<tab[i]->calculSalaire()<<"}, ";//nb-1 car sinon a la fin on aurait }, ]
    }
    cout<<"{nom : "<<tab[nb-1]->getNom()<<", salaire :"<<tab[nb-1]->calculSalaire()<<"}]\n";//ajout de l'element manquant
}

Personnel ListePersonnel::getPersonnel(int i){
    return *tab[i];
}