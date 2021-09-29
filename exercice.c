//
// Created by xioma on 29/09/2021.
//
#include <stdio.h>

//exercice1

__attribute__((unused)) int exercice1() {
    __attribute__((unused)) void getMax(int saisirEntier);
    int entier1 = 0;
    int entier2 = 0;
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