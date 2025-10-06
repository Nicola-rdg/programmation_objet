#include <stdio.h>

void exchange(int *a, int *b);
void saisir(float mat[100][100], int n);
void afficher(float mat[100][100], int n);
void additionner(float m1[100][100],float m2[100][100],float m3[100][100],int n);
void multiplier(float m1[100][100],float m2[100][100],float m3[100][100],int n);
char menu();

main(void){

    // int x,y;
    // printf("Saisir deux valeurs à échanger\n");
    // printf("x=");
    // scanf("%d",&x);
    // printf("y=");
    // scanf("%d",&y);
    // exchange(&x,&y);
    // printf("x = %d et y = %d",x,y);

    // int n=3;
    // float mat[n][n];
    // float somme[n][n];
    // float multi[n][n];
    // saisir(mat,n);
    // afficher(mat,n);
    // additionner(mat,mat,somme,n);
    // afficher(somme,n);
    // multiplier(mat,mat,multi,n);
    // afficher(multi,n);

    int n=3;
    char reponse;
    float mat1[n][n],mat2[n][n],mat3[n][n];

    reponse=menu();
    switch (reponse)
    {
    case 'a':
        printf("Premiere matrice a additionner\n");
        saisir(mat1,n);
        printf("Seconde matrice a additionner\n");
        saisir(mat2,n);
        additionner(mat1,mat2,mat3,n);
        afficher(mat3,n);
        break;
    case 'm':
        printf("Premiere matrice a multiplier\n");
        saisir(mat1,n);
        printf("Seconde matrice a multiplier\n");
        saisir(mat2,n);
        multiplier(mat1,mat2,mat3,n);
        afficher(mat3,n);
        break;
    }
}

void exchange(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void saisir(float mat[100][100], int n){
    int i,j;
    printf("Saisissez les valeurs de la matrice\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Mat[%d][%d]=",i+1,j+1);
            scanf("%f",&mat[i][j]);
        }
    }
}

void afficher(float mat[100][100], int n){
    int i,j;
    printf("La matrice vaut\n");
    for(i=0;i<n;i++){
        printf("| ");
        for(j=0;j<n;j++){
            printf("%f ",mat[i][j]);
        }
        printf("|\n");
    }
}

void additionner(float m1[100][100],float m2[100][100],float m3[100][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m3[i][j]=m2[i][j]+m1[i][j];
        }
    }
}


void multiplier(float m1[100][100],float m2[100][100],float m3[100][100],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m3[i][j]=0;
            for(k=0;k<n;k++){
            m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}

char menu(){
    char demande;
    printf("Choisissez une opération : multiplier m ou additionner a\n");
    printf("Votre choix = ");
    scanf("%c",&demande);
    return demande;
}