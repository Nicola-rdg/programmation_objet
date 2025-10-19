#include "RDV.h"
#include <iostream>
using namespace std;

RDV::RDV(){
    nb_participants=0;
    list_participants=new string[10];
}

void RDV::affiche(){
    cout<<"Le RDV a pour information : \n";
    cout<<"     ";
    date.affiche();
    cout<<"     ";
    heure.affiche();
    cout<<"     Le lieu est "<<lieu<<"\n";
    cout<<"     Il y a "<<nb_participants<<" participants\n";
    if(nb_participants!=0){
        cout<<"     Les participants sont ";
        for(int i=0;i<nb_participants-1;i++){
            cout<<list_participants[i]<<", ";
        }
        cout<<list_participants[nb_participants-1]<<"\n";
    }
}

void RDV::saisieParticipants(){
    cout<<"Veuillez saisir les "<<nb_participants<<" participants un par un : \n";
    for(int i=0;i<nb_participants;i++){
        cout<<"participants "<<i<<" : ";
        cin>>list_participants[i];
        cout<<"\n";
    }
}

void RDV::saisieLieu(){
    cout<<"Veuillez saisir le lieu du RDV : ";
    cin>>lieu;
    cout<<"\n";
}

void RDV::saisie(){
    saisieLieu();
    cout<<"Veuillez saisir le nombre de participants : ";
    cin>>nb_participants;
    saisieParticipants();
    int j,m,a;
    cout<<"Veuillez maintenant saisir la date du RDV : \n";
    cout<<"jour = ";
    cin>>j;
    cout<<"mois = ";
    cin>>m;
    cout<<"annee = ";
    cin>>a;
    date=Date(j,m,a);
    if(!date.checkDate(j,m,a))
        cout<<"Date invalide, donc la date a ete fixee au 1/1/2020\n";

    int h,min;
    cout<<"Veuillez saisir l'heure du RDV : \n";
    cout<<"heure = ";
    cin>>h;
    cout<<"minute = ";
    cin>>min;
    heure=Heure(h,min);
    if(!((h>=0 & h<=24)&(m>=0 & m<=60)))
        cout<<"Heure invalide, donc l'heure a ete fixee a 0h00\n";
}

void RDV::setDate(const Date& dateRdv){
    date=dateRdv;
}

void RDV::setHeure(const Heure& heureRdv){
    heure=heureRdv;
}

void RDV::setLieu(const std::string& lieuRdv){
    lieu=lieuRdv;
}

void RDV::setNombreDeParticipants(int nombreDeParticipants){
    nb_participants=nombreDeParticipants;
}

void RDV::setParticipants(std::string* ps){
    list_participants=ps;
}

void RDV::setParticipants(int i, std::string s){
    list_participants[i]=s;
}

bool RDV::estCompatibleAvec(RDV r){
    if((date.getAnnee()==r.date.getAnnee())&(date.getMois()==r.date.getMois())&((date.getJour()==r.date.getJour()))&(heure.getHeure()==r.heure.getHeure())&(heure.getMinute()==r.heure.getMinute()))
        return false;
    return true;
}

bool RDV::estEgal(const RDV& r){
    return (date.estEgal(r.date) && heure.estEgal(r.heure));
}

bool RDV::estAvant(const RDV& r){
    if(date.estAvant(r.date)) return true;
    if(date.estEgal(r.date) && heure.estAvant(r.heure)) return true;
    else return false;
}