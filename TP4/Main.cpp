#include "Date.cpp"
#include <iostream>
using namespace std;

int main(){
    // Test du constructeur de base et test de l'affichage
    Date date1;
    date1.affiche();

    // Test de la non validité d'une date
    date1=Date(2,12,2051);
    date1.affiche();
    
    // Test du constructeur avec une date valide
    date1=Date(20,06,2004);
    date1.affiche();

    // Test des 3 setters
    date1.setJour(25);
    date1.setMois(8);
    date1.setAnnee(2030);
    date1.affiche();

    // Test des getters
    cout<<date1.getJour()<<"\n";
    cout<<date1.getMois()<<"\n";
    cout<<date1.getAnnee()<<"\n";



    return 0;
}