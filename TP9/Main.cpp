
#include <iostream>
using namespace std;

template<class T, class U> void fct(T a, U b){
    cout<<"Je suis la fonction 1"<<endl;
}

template<class T, class U> void fct(T* a, U b){
    cout<<"Je suis la fonction 2"<<endl;
}

template<class T> void fct(T,T,T){
    cout<<"Je suis la fonction 3"<<endl;
}

void fct(int a, float b){
    cout<<"Je suis la fonction 4"<<endl;
}

//Exercice 2
template<class T> T somme(T* tab,int taille){
    T som=0;
    for(int i=0;i<taille;i++){
        som+=tab[i];
    }
    return som;
}



int main(){
    // int n=0, p=0, q=0;
    // float x=0.0, y=0.0;
    // double z=0.0;

    // cout<<"fct(n,p);";
    // fct(n,p);

    // cout<<"fct(n,x);";
    // fct(n,x);

    // cout<<"fct(n,z);";
    // fct(n,z);

    // cout<<"fct(&n,p);";
    // fct(&n,p);

    // cout<<"fct(&n,x);";
    // fct(&n,x);

    // cout<<"fct(&n,z);";
    // fct(&n,z);

    // cout<<"fct(&n,&p,&q);";
    // fct(&n,&p,&q);


    //Test de l'exercice 2
    int tabn[3];
    tabn[0]=1;
    tabn[1]=2;
    tabn[2]=3;

    float tabf[2];
    tabf[0]=-1.2;
    tabf[1]=2.67;

    double tabd[1];
    tabd[0]=10.10;

    char tabc[3];
    tabc[0]='a';
    tabc[1]=1;
    tabc[2]=0;

    cout<<"Somme d'int : "<<somme(tabn,3)<<"\n";
    cout<<"Somme de float : "<<somme(tabf,2)<<"\n";
    cout<<"Somme de double : "<<somme(tabd,1)<<"\n";
    cout<<"Somme de char : "<<somme(tabc,3)<<"\n";


    return 0;
}