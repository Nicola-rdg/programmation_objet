#include "Personne.h"
#include "Eleve.h"

int main(){
    Personne personne1=Personne("Rodrigues","Nicola","2 rue du chien");
    personne1.affiche();
    personne1.setTelephone("07 90 12 23 34");
    personne1.affiche();

    Eleve eleve1=Eleve(personne1,"2A","2.3",3.71);
    eleve1.affiche();
}