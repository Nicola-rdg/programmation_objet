#include "ListePersonnel.h"

ListePersonnel::ListePersonnel(){
    nb=0;
}

void ListePersonnel::ajoutPersonnel(Personnel* ptPersonnel){
    if(nb<100){
        tab[nb]=ptPersonnel;
        nb++;
    }
    else cout<<"La liste est deja pleinne";
}

void ListePersonnel::afficherSalaires(){
    cout<<"[";
    for(int i=0;i<nb-1;i++){
        cout<<"{nom : "<<tab[i]->getNom()<<", salaire :"<<tab[i]->getSalaire()<<"}, ";//nb-1 car sinon a la fin on aurait }, ]
    }
    cout<<"{nom : "<<tab[nb-1]->getNom()<<", salaire :"<<tab[nb-1]->getSalaire()<<"}]\n";//ajout de l'element manquant
}