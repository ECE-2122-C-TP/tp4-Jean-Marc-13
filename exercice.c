//
// Created by User on 29-09-21.
//
#include <stdio.h>
#include "fonction.h"
#include "exercice.h"

void exo1() {
    int ent1 = 0, ent2 = 0;
    printf("l'entier 1 vaut : ");
    scanf("%d",&ent1);
    printf("l'entier 2 vaut : ");
    scanf("%d",&ent2);
    printf("LE plus grand est :\n> %d" , getMax(ent1,ent2));
}

void exo3() {
    int largeur = saisirEntier(), longueur = saisirEntier();
    printf("le périmètre vaut %d et l'aire vaut %d", calculPerimetre(longueur, largeur) calcuclAire(longueur, largeur));
}

void exo4() {
    int entier = saisirEntier();
    if (testMultiple(entier, 3) && entier>=10) {
        printf("l'entier %d est un multiple de 3 et est superieur à 10", entier)
        else {printf("l'entier %d est soit inferieur a 10 soit il n'est pas multiple de 3")}
    }
}


