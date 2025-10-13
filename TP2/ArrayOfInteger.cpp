#include "ArrayOfInteger.h"
#include <cmath>
#include <iostream>
using namespace std;

int ArrayOfInteger::compteur=0;

ArrayOfInteger::ArrayOfInteger(){
    taille=10;
    tableau = new int[taille];
    for(int i=0;i<taille;i++){
        tableau[i]=0;
    }
    compteur++;
}

ArrayOfInteger::ArrayOfInteger(const ArrayOfInteger&a){
    taille=a.taille;
    tableau=new int[taille];
    for(int i=0;i<taille;i++){
        tableau[i]=a.tableau[i];
    }
    compteur++;
}

void ArrayOfInteger::affichage(){
    cout<<"Le tableau est [";
    for(int i=0;i<taille-1;i++){
        cout<<tableau[i]<<", ";
    }
    cout<<tableau[taille-1]<<"]\n";
}

int ArrayOfInteger::appartient(int n){
    for(int i=0;i<taille;i++){
        if(n==tableau[i]){
            return 1;
        }
    }
    return 0;
}

void ArrayOfInteger::retirer(int n){
    if(appartient(n)){
        int* newtab = new int[taille-1];
        int a=0;
        for(int i=0;i<taille;i++){
            if(tableau[i]!=n){
                newtab[a]=tableau[i];
                a++;
            }
        }
        delete [] tableau;
        tableau=newtab;
        taille--;
    }
}

void ArrayOfInteger::ajouter(int n){
    if(!appartient(n)){
        if(appartient(0)){
            int i=0;
            while(tableau[i]!=0)
                i++;
            tableau[i]=n;
        }
        else{
            int newtaille=taille+1;
            int* newtab = new int[newtaille];
            for(int i=0;i<taille;i++){
                newtab[i]=tableau[i];
            }
            newtab[newtaille-1]=n;
            delete []tableau;
            tableau=newtab;
            taille=newtaille;
        }
    }
}

int ArrayOfInteger::getCompteur(){
    return compteur;
}

int ArrayOfInteger::identique(ArrayOfInteger array){
    if(taille!=array.taille){
        return 0;
    }
    for(int i=0;i<taille;i++){
        if(!array.appartient(tableau[i])){
            return 0;
        }
    }
    return 1;
}

int ArrayOfInteger::getTaille(){
    return taille;
}