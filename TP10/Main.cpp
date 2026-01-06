#include <iostream>
using namespace std;
#include "B.h"
#include "Erreur2.h"
#include "Vecteur.h"

int main() {
    Vecteur a(4);
    try{
        a[4];
        cout<<"test\n";
    }
    catch(string e){
        cout<<e;
    }
}