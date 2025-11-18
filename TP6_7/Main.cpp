#include "Personne.cpp"

int main(){
    Personne personne1=Personne("Rodrigues","Nicola","2 rue du chien");
    personne1.affiche();
    personne1.setTelephone("07 90 12 23 34");
    personne1.affiche();
}