#include "Vecteur.h"
#include <iostream>
using namespace std;

Vecteur::Vecteur(int n){
    nombreElements=n;
    elements=new int[n];
}

Vecteur::~Vecteur(){
    delete[]elements;
}

int& Vecteur::operator[](int n){
    string e="Indice hors intervalle";
    if(n<0 || n>=nombreElements) throw e;
    return elements[n];
}