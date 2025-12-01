#include "Vector.h"

int main(){
    Vector a;
    Vector b=Vector(1,2);
    cout<<a<<"\n";
    cout<<b<<"\n";
    a=(b+b);
    cout<<a<<"\n";
    a=a;
    cout<<a<<"\n";

    double prodScalaire=a*b;
    cout<<prodScalaire<<"\n";

    Vector prodDroite,prodGauche;
    prodDroite=a*5;
    cout<<prodDroite<<"\n";

    prodGauche=5*a;
    cout<<prodGauche<<"\n";

    Vector plusEgale=Vector(1,1);
    plusEgale+=Vector();
    cout<<plusEgale<<"\n";

    cout<<(plusEgale==a)<<(plusEgale!=a)<<"\n";
    cout<<(a==a)<<(a!=a)<<"\n";
}