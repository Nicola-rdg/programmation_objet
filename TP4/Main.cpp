#include "Date.cpp"
#include "Heure.cpp"
#include "RDV.cpp"
#include "NoeudRDV.cpp"
#include "Agenda.cpp"
#include <iostream>
using namespace std;

int main(){
    // // Test du constructeur de base et test de l'affichage
    // Date date1;
    // date1.affiche();

    // // Test de la non validité d'une date
    // date1=Date(2,12,2051);
    // date1.affiche();
    
    // // Test du constructeur avec une date valide
    // date1=Date(20,06,2004);
    // date1.affiche();

    // // Test des 3 setters
    // date1.setJour(25);
    // date1.setMois(8);
    // date1.setAnnee(2030);
    // date1.affiche();

    // // Test des getters
    // cout<<date1.getJour()<<"\n";
    // cout<<date1.getMois()<<"\n";
    // cout<<date1.getAnnee()<<"\n";



    // // Test du constructeur par défaut et test de l'affichage
    // Heure heure1;
    // heure1.affiche();

    // // Test de la non validité d'une date
    // heure1=Heure(25,45);
    // heure1.affiche();
    
    // // Test du constructeur avec une heure valide
    // heure1=Heure(9,35);
    // heure1.affiche();

    // // Test des 2 setters pour une heure et des minutes valides
    // heure1.setHeure(12);
    // heure1.setMinute(20);
    // heure1.affiche();

    // // Test des 2 setters pour une heure et des minutes valides
    // heure1.setHeure(30);
    // heure1.setMinute(70);
    // heure1.affiche();

    // // Test des getters
    // cout<<heure1.getHeure()<<"\n";
    // cout<<heure1.getMinute()<<"\n";
    



    // RDV rdv,rdv2;
    // rdv.saisie();
    // rdv.affiche();
    // cout<<rdv.estCompatibleAvec(rdv2);
    // rdv2.saisie();
    // cout<<rdv2.estCompatibleAvec(rdv);



    // Création d'un agenda
    Agenda a;

    // Ajouts de plusieurs RDV
    RDV rdv1,rdv2;
    rdv1.setNombreDeParticipants(2);
    string *ps=new string[2];
    ps[0]="Michel";
    ps[1]="Albert";
    rdv1.setDate(Date(24,10,2025));
    rdv1.setHeure(Heure(13,55));
    rdv1.setLieu("La_rose");
    rdv1.setParticipants(ps);
    a.ajoute(rdv1);
    a.ajoute(rdv2);

    // Affichage de l'agenda
    a.affiche();

    // Enlevage d'un rdv
    a.enleve();

    // Affichage de l'agenda
    a.affiche();

    // Enlevage du dernier rdv
    a.enleve();

    //Affichage de l'agenda
    a.affiche();

    return 0;
}