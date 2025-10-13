#include "point.cpp"
#include "Vector.cpp"
#include "ArrayOfInteger.cpp"
#include <iostream>
using namespace std;


int main(){
    // Point p1=Point(1,2,3);
    // Point p2=Point(p1);
    // Point p3,p4;
    // double a;

    // p1.saisie();
    // a=p1.getx();
    // cout<<a<<"\n";
    // p2.translater(1,1,1);
    // p1.affichage();
    // p2.affichage();
    // a=p1.distance(p2);
    // cout<<"La distance entre p1 et p2 est "<<a<<"\n";
    // a=p2.getCompteur();
    // cout<<"Il y a "<<a<<" instances";

    // Vector v1=Vector(3);
    // Vector v2=Vector(v1);
    // v1.saisir();
    // v2.saisir();
    // cout<<v2.getCoordinates(1)<<"\n";
    // v1.affichage();
    // v2.affichage();
    // cout<<v2.norme()<<"\n";
    // cout<<v1.egal(v2)<<"\n";
    // cout<<v1.prodScalaire(v2)<<"\n";

    // Vector v3=Vector(3);
    // v3=v2.prodReel(3);
    // v3.affichage();
    // v3=v1.addition(v2);
    // v3.affichage();

    // cout<<v3.getCompteur();


    ArrayOfInteger tab,tab2;
    tab.affichage();
    int a;
    for(int i=0;i<12;i++){
        tab.ajouter(i+1);
    }
    tab.ajouter(2);
    tab2=ArrayOfInteger(tab);
    tab.affichage();
    cout<<tab.getCompteur()<<"\n";
    tab.retirer(12);
    tab.affichage();
    tab2.affichage();
    cout<<tab.getTaille()<<"\n";
    cout<<tab.identique(tab2)<<"\n";
    cout<<tab2.identique(tab);

    return 0;
}