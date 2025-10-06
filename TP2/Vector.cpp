#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;

int Vector::compteur=0;

Vector :: Vector(int n){
    dimension=n;
    vecteur=new double[dimension];
    compteur++;
}

Vector :: Vector(const Vector&v){
    dimension=v.dimension;
    vecteur=new double[dimension];
    for(int i=0;i<dimension;i++){
        vecteur[i]=v.vecteur[i];
    }
    compteur++;
}

void Vector :: saisir(){
    cout<<"Veuillez saisir les "<<dimension<<" composantes du vecteur\n";
    for(int i=0;i<dimension;i++){
        cout<<"composante "<<i<<" = ";
        cin>>vecteur[i];
    }
}

double Vector :: getCoordinates(int n){
    return vecteur[n];
}

void Vector::setCoordinates(int n,double a){
    vecteur[n]=a;
}

void Vector::affichage(){
    cout<<"Le vecteur a pour coordonnees [";
    for(int i=0;i<dimension-1;i++){
        cout<<vecteur[i]<<", ";
    }
    cout<<vecteur[dimension-1]<<"]\n";
}

double Vector::norme(){
    double norme2=0;
    for(int i=0;i<dimension;i++){
        norme2+=pow(vecteur[i],2);
    }
    return pow(norme2,0.5);
}

int Vector::egal(Vector v){
    int egal=1;
    for(int i=0;i<dimension;i++){
        if(vecteur[i]!=v.vecteur[i]){
            egal=0;
        }
    }
    return egal;
}

double Vector::prodScalaire(Vector v){
    double resultat=0;
    for(int i=0;i<dimension;i++){
        resultat+=vecteur[i] * v.vecteur[i];
    }
    return resultat;
}

Vector Vector::prodReel(double a){
    Vector multi = Vector(dimension);
    for(int i=0;i<dimension;i++){
        multi.vecteur[i]=vecteur[i] * a;
    }
    return multi;
}

Vector Vector::addition(Vector v){
    Vector somme = Vector(dimension);
    for(int i=0;i<dimension;i++){
        somme.vecteur[i]=vecteur[i]+v.vecteur[i];
    }
    return somme;
}

int Vector::getCompteur(){
    return compteur;
}