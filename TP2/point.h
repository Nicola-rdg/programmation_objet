#ifndef POINT_H
#define POINT_H
class Point
{
private:
    int x;
    int y;
    int z;
    static int compteur;

public:
    Point();
    Point(int,int,int);
    Point(const Point&p);
    int getx();
    int gety();
    int getz();
    void setx(int);
    void sety(int);
    void setz(int);
    void saisie();
    void affichage();
    void translater(int,int,int);
    double distance(Point);
    int getCompteur();


};

#endif