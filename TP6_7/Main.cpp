#include "Personne.h"
#include "Eleve.h"
#include "Personnel.h"
#include "PersonnelAdmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include "ListePersonnel.h"

int main(){
    // Personne personne1=Personne("Rodrigues","Nicola","2 rue du chien");
    // personne1.affiche();
    // personne1.setTelephone("07 90 12 23 34");
    // personne1.affiche();

    // Eleve eleve1=Eleve(personne1,"2A","2.3",3.71);
    // eleve1.affiche();

    // //Exercice 3
    // Personne personne2=Personne("Delala","Jean");
    // Personnel personnel1=Personnel(personne2,1500);
    // personnel1.affiche();

    // //Exercice 4
    // Personne personne4=Personne("Delala","Michel");
    // PersonnelAdmin admin4=PersonnelAdmin(personne4, 1600.12, 10, 15.41);
    // admin4.affiche();
    // cout<<"\nSon salaire est de "<<admin4.calculSalaire();

    // //Exercice 5
    // Personne personne5=Personne("LaRose","Gustave");
    // EnseignantPermanent enseigant5=EnseignantPermanent(personne5,1500,"La jetee",2,200);
    // enseigant5.affiche();
    // cout<<"\nLe salaire est de "<<enseigant5.calculSalaire();

    // //Exercice 6
    // Personne personne6=Personne("Nom","Prenom");
    // EnseignantVacataire enseignant6=EnseignantVacataire(personne6,1500,"casier2",6,15.32);
    // enseignant6.affiche();
    // cout<<"\nLe salaire est de "<<enseignant6.calculSalaire();

    //Exercice 7
    ListePersonnel liste;

    Personne personne3=Personne("Delala","Jean");
    Personnel* personnel3=new Personnel(personne3,1500);
    liste.ajoutPersonnel(personnel3);

    Personne personne4=Personne("Delala","Michel");
    Personnel* admin4=new PersonnelAdmin(personne4, 1600.12, 10, 15.41);
    liste.ajoutPersonnel(admin4);
    
    Personne personne5=Personne("LaRose","Gustave");
    Personnel* enseigant5=new EnseignantPermanent(personne5,1500,"La jetee",2,200);
    liste.ajoutPersonnel(enseigant5);

    Personne personne6=Personne("Nom","Prenom");
    Personnel* enseignant6=new EnseignantVacataire(personne6,1500,"casier2",6,15.32);
    liste.ajoutPersonnel(enseignant6);

    liste.afficherSalaires();
}