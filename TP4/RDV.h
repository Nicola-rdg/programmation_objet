#ifndef RDV_H
#define RDV_H
#include "Date.h"
#include "Heure.h"
#include <iostream>
using namespace std;

class RDV
{
private:
    Date date;
    Heure heure;
    string lieu;
    int nb_participants;
    string* list_participants;
public:
    RDV();
    void affiche();
    void saisieParticipants();
    void saisieLieu();
    void saisie();
    void setDate(const Date& dateRdv);
    void setHeure(const Heure& heureRdv);
    void setLieu(const std::string& lieuRdv);
    void setNombreDeParticipants(int);
    void setParticipants(std::string*);
    void setParticipants(int,std::string);
    bool estCompatibleAvec(RDV);
};



#endif