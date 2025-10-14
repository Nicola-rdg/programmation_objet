#ifndef HEURE_H
#define HEURE_H

class Heure
{
private:
    int heure;
    int minute;
public:
    Heure();
    Heure(int,int);
    void affiche();
    int getHeure();
    int getMinute();
    void setHeure(int);
    void setMinute(int);
};






#endif