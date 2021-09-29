//
// Created by xioma on 29/09/2021.
//

#include <stdio.h>
#include "mesFonctions.h"

    int calculAir(int longeur, int largeur) {
    return longeur*largeur;
}

    int calculPerimetre(int longueur, int largeur);
    return (longueur+largeur) * 2;

    int saisirEntier() {
    int entier = 0;
    printf("saisir un entier au clavier.: \n");
    scanf("%d", &entier);
    return entier;
    }


    void getMax() {
    int entier1;
    int entier2;
    printf("saisir deux entier au clavier.: \n");
    scanf("%d", "%d", &entier1, &entier2);
    if (entier1<entier2) {
        printf("le plus grand des deux entier vaut %d\n", entier2);
    }
    else if (entier1>entier2) {
        printf("le plus grand des deux entier vaut %d\n", entier1);
    }
    else {
        printf("vous avez saisie le meme entier.:\n");
    }
}