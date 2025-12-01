#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
private:
    int taille;
    double* tab;
    static int compteur;
public:
    Vector();
    Vector(const Vector&);
    Vector(int);
    Vector(double);
    Vector(double,double);
    Vector(double,double,double);
    Vector(double,double,double,double);
    ~Vector();
    static int getCompteur();
    friend ostream& operator<<(ostream&, Vector&);
    Vector operator+(const Vector&);
    void operator=(const Vector&);
    double operator*(const Vector&);
    Vector operator*(const double&);
    friend Vector operator*(const double&,const Vector&);
    void operator+=(const Vector&);
    bool operator==(const Vector&);
    bool operator!=(const Vector&);
};

#endif