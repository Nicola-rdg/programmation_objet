#ifndef AGENDA_H
#define AGENDA_H
#include "NoeudRDV.h"

class Agenda
{
private:
    NoeudRDV *premier;
public:
    Agenda();
    Agenda(const Agenda&);

    ~Agenda();

    void ajoute(RDV);
    void enleve();

    void affiche();
};


#endif