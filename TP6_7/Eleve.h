#ifndef ELEVE_H
#define ELEVE_H
#include "Personne.h"

class Eleve:public Personne
{
private:
    string promotion, groupeDeTD;
    float GPA;
public:
    Eleve(string,string,string,string,string="",string="",float=0);
    Eleve(const Personne&personne,string="",string="",float=0);
    string getPromtion();
    string getGroupeDeTD();
    float getGPA();
    void setPromotion(string);
    void setGroupeDeTD(string);
    void setGPA(float);
    void affiche();
};

#endif