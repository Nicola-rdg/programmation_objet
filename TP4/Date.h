#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int jour;
    int mois;
    int annee;

    
public:
    Date();
    Date(int,int,int);
    void affiche();
    int getJour();
    int getMois();
    int getAnnee();
    void setJour(int);
    void setMois(int);
    void setAnnee(int);
    bool checkDate(int,int,int);
    bool estEgal(const Date&);
    bool estAvant(const Date&);
    
};







#endif