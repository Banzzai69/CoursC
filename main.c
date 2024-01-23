#include <stdio.h>


//------------------------------------------------------------------ calcul Somme

int calculer_somme(int x, int y)
{
    return x + y;
}

void affichage_resultat(int x)
{
    printf("le résultat est de : %d\n", x);
}

//--------------------------------------------------------------------- calcul majeur

int majeurs(int age)
{
    if(age >= 18){
        return 1;
    } else {
        return 0;
    }
}

void affich_age(int age)
{
    if(majeurs(age) == 1){
        printf("%d : majeur\n", age);
    } else {
        printf("%d : mineur\n", age);
    }
}

//------------------------------------------------- fonction douane

int douane(int pays)
{
    int france = 2;
    int autre = 3;
   if(pays == 2){
    return 1;
   } else {
    return 0;
   }
}

void affich_douane(int pays)
{
    if(douane(pays) == 1){
        printf("passport, carte d'itentité ou permis de conduire svp\n");
    } else {
        printf("passport ou carte d'itentité svp\n");
    }
}

// ----------------------------------------------------- Testes fonctions comparaisons avec directives au processeur

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

int majeur(int age);

int max(int x, int y);

int min(int x, int y);

int equal(int x, int y);

int sup_a(int x, int y);

int inf_a(int x, int y);

int le_plus_grand(int x, int y);

int le_plus_petit(int x, int y);

//------------------------------------------- création des fonctions

// --- Majeur

int majeur(int age)
{
    if(age >= 18 && age <=MAX_AGE)
        return 1;
    else if(age <= MAJOR && age > MIN_AGE)
        return 0;
    else return -1;
}

void afficher_age(int age)
{
    if(majeur(age) == 1)
        printf("%d : majeur\n", age);
    else if(majeur(age) == 0)
        printf("%d : mineur\n", age);
    else
        printf("%d :erreur\n", age);
}

// --- Inférieur

int inf_a(int x, int y)
{
    if(x < y)
        return 1;
    else return 0;
}

void result_inf_a(int x, int y)
{
    if(inf_a(x, y) == 1)
        printf("inferieur\n");
    else
        printf("superieur\n");
}

// --- Impair

int impair(int x)
{
    if( x%2 == 1)
        return 1;
    else 
        return 0;
}

void result_impair(int x)
{
    if(impair(x) == 1)
        printf("%d est impair\n", x);
    else
        printf("%d est pair\n", x);
}
int while_loop(int x)
{
while(x <=10)
{
    printf("%d\n",x);
    x++;    
}
}

void multiple_two(int nbr) {
    int i = 1;
    
    printf("\n Table de multiplication de %d est: \n", nbr);
    while(i <= 10) {
        printf(" %d * %d = %d \n", nbr, i, nbr * i);
        ++i;
    }
}

//------------------------------------------------------ fonction main

int main()
{
    int a = 6;
    int b = 24;

    int total = 0;

    total = calculer_somme(a, b);

    calculer_somme(a, b);

    affichage_resultat(total);

    affich_age(17);

    affich_douane(3);

    afficher_age(22);

    result_inf_a(22, 82);

    result_impair(11);

    while_loop(-10);

    multiple_two(5);
}

