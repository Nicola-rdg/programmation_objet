#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
using namespace std;

class Personne
{
private:
    string nom, prenom, adresse, telephone;
public:
    Personne(string, string,string="",string="");
    void affiche();
    string getNom();
    string getPrenom();
    string getAdresse();
    string getTelephone();
    void setNom(string);
    void setPrenom(string);
    void setAdresse(string);
    void setTelephone(string);
};


#endif