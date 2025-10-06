#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

int Point :: compteur=0;

Point :: Point(){
    x=y=z=0;
    compteur+=1;
}

Point :: Point(int a,int b,int c){
    x=a;
    y=b;
    z=c;
    compteur+=1;
}

Point :: Point(const Point&p){
    x=p.x;
    y=p.y;
    z=p.z;
    compteur+=1;
}

int Point :: getx(){
    return x;
}

int Point :: gety(){
    return y;
}

int Point :: getz(){
    return z;
}

void Point :: setx(int a){
    x=a;
}

void Point :: sety(int a){
    y=a;
}

void Point :: setz(int a){
    z=a;
}

void Point :: saisie(){
    cout<<"saisisez la valeur x du point\n"<<"x=";
    cin>>x;
    cout<<"saisissez la valeur y du point\n"<<"y=";
    cin>>y;
    cout<<"saisissez la valeur z du point\n"<<"z=";
    cin>>z;
}

void Point :: affichage(){
    cout<<"Le point a pour coordonnees ("<<x<<", "<<y<<", "<<z<<")\n";
}

void Point :: translater(int a,int b,int c){
    x+=a;
    y+=b;
    z+=c;
}

double Point :: distance(Point p){
    return pow((pow(x-p.x,2)+pow(y-p.y,2)+pow(z-p.z,2)),0.5);
}

int Point :: getCompteur(){
    return compteur;
}