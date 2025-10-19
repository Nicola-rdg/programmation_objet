#include "Heure.h"
#include <iostream>
using namespace std;

Heure::Heure(){
    heure=0;
    minute=0;
}

Heure::Heure(int h,int m){
    if((h>=0 & h<=24)&(m>=0 & m<=60)){
        heure=h;
        minute=m;
    }
    else{
        heure=0;
        minute=0;
    }
}

void Heure::affiche(){
    cout<<"L'heure est "<<heure<<"h"<<minute<<"\n";
}

int Heure::getHeure(){
    return heure;
}

int Heure::getMinute(){
    return minute;
}

void Heure::setHeure(int h){
    if(h>=0 & h<=24)
        heure=h;
}

void Heure::setMinute(int m){
    if(m>=0 & m<=60)
        minute=m;
}

bool Heure::estEgal(const Heure& h){
    return (heure==h.heure && minute==h.minute);
}

bool Heure::estAvant(const Heure& h){
    if(heure<h.heure) return true;
    if(heure==h.heure && minute<h.minute) return true;
    else return false;
}