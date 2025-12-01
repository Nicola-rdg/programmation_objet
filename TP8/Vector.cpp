#include "Vector.h"

int Vector::compteur=0;

Vector::Vector(){
    taille=0;
    tab=new double[taille];
    compteur++;
}

Vector::Vector(int taille){
    this->taille=taille;
    tab=new double[taille];
    compteur++;
}

Vector::Vector(const Vector&v){
    taille=v.taille;
    tab=new double[taille];
    for(int i = 0; i < taille; i++){
        tab[i] = v.tab[i];
    }
    compteur++;
}

Vector::Vector(double x){
    taille=1;
    tab=new double[taille];
    tab[0]=x;
    compteur++;
}

Vector::Vector(double x,double y){
    taille=2;
    tab=new double[taille];
    tab[0]=x;
    tab[1]=y;
    compteur++;
}

Vector::Vector(double x,double y,double z){
    taille=3;
    tab=new double[taille];
    tab[0]=x;
    tab[1]=y;
    tab[2]=z;
    compteur++;
}

Vector::Vector(double a1,double a2,double a3,double a4){
    taille=4;
    tab=new double[taille];
    tab[0]=a1;
    tab[1]=a2;
    tab[2]=a3;
    tab[3]=a4;
    compteur++;
}

Vector::~Vector(){
    delete []tab;
    compteur--;
}

int Vector::getCompteur(){
    return compteur;
}

ostream& operator<<(ostream&out, Vector&v){
    cout<<"[";
    for(int i=0;i<v.taille-1;i++){
        out<<v.tab[i]<<", ";
    }
    if(v.taille!=0){
        out<<v.tab[v.taille-1];
    }
    out<<"]";
    return out;
}

Vector Vector::operator+(const Vector&v){
    if(taille==v.taille){
        Vector somme=Vector(taille);
        for(int i=0;i<v.taille;i++){
            somme.tab[i]=tab[i]+v.tab[i];
        }
        return somme;
    }
    else {
        cout<<"Les deux vecteurs ne font pas la meme taille";
        return Vector();
    }
}

void Vector::operator=(const Vector&v){
    if(this==&v) return;
    delete[] tab;
    taille=v.taille;
    tab=new double[taille];
    for(int i = 0; i < taille; i++) {
        tab[i] = v.tab[i];
    }
}

double Vector::operator*(const Vector&v){
   if(taille==v.taille){
        double prodScalaire=0;
        for(int i=0;i<taille;i++){
            prodScalaire+=tab[i]*v.tab[i];
        }
        return prodScalaire;
    }
    else {
        cout<<"Les deux vecteurs ne font pas la meme taille";
        return 0;
    }
}

Vector Vector::operator*(const double&a){
    Vector prodDroite=Vector(taille);
    for(int i=0;i<taille;i++){
        prodDroite.tab[i]=tab[i]*a;
    }
    return prodDroite;
}

Vector operator*(const double&a,const Vector&v){
    Vector prodGauche=Vector(v.taille);
    for(int i=0;i<v.taille;i++){
        prodGauche.tab[i]=a*v.tab[i];
    }
    return prodGauche;
}

void Vector::operator+=(const Vector&v){
    if(taille=v.taille){
        for(int i=0;i<v.taille;i++){
            tab[i]+=v.tab[i];
        }
    }
    else {
        cout<<"Les deux vecteurs ne font pas la meme taille";
        return;
    }
}

bool Vector::operator==(const Vector&v){
    if(taille!=v.taille) return false;
    for(int i=0;i<taille;i++){
        if(tab[i]!=v.tab[i]) return false;
    }
    return true;
}

bool Vector::operator!=(const Vector&v){
    if(taille!=v.taille) return true;
    for(int i=0;i<taille;i++){
        if(tab[i]!=v.tab[i]) return true;
    }
    return false;
}