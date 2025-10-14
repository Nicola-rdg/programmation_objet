#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(){
    jour=1;
    mois=1;
    annee=2000;
}

bool Date::checkDate(int j,int m,int a){
    if((j>=1 & j<=31)&(m>=1 & m<=12)&(a>=2000 & a<=2050))
        return true;
    else 
        return false;
}

Date::Date(int j,int m,int a){
    if(checkDate(j,m,a)){
        jour=j;
        mois=m;
        annee=a;
    }
    else{
        jour=1;
        mois=1;
        annee=2000;
    }
}

void Date::affiche(){
    cout<<"La date est "<<jour<<"/"<<mois<<"/"<<annee<<"\n";
}

int Date::getJour(){
    return jour;
}

int Date::getMois(){
    return mois;
}

int Date::getAnnee(){
    return annee;
}

void Date::setJour(int j){
    if(j>=1 & j<=31)
        jour=j;
}

void Date::setMois(int m){
    if(m>=0 & m<=12)
        mois=m;
}

void Date::setAnnee(int a){
    if(a>=2000 & a<=2050)
        annee=a;
}