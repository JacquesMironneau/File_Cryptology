/* ---------------------------------------------------------------------------
 * MachineMots : module de lecture mot par mot de l'entrée standard.
 * Auteur(s)  :
 * Groupe TP  :
 * Avancement : à compléter
 */

#include <stdio.h>
#include <stdbool.h>
#include "MachineCaracteres.h"
#include "LexMot.h"
#include "MachineMots.h"

/* Mettre ici les variables globales */
Mot motUsed;
/* Fonctions et procédures */

void demarrerMot(void)
{
    printf("lancement de démarrer mot\n");
    demarrerCar();
    printf("Lancement avancer mot \n");
    avancerMot();
}

void avancerMot(void) // Création d'un mot et enregistrement de sa valeur deans motUsed
{  /*
    int i = 0;
    //avancerCar(); // On se rend sur le caractère 
    printf("On est avant le premier while\n");
    while (carCourant() == ' '){ // On avance tant que l'on parcourt des espaces
        avancerCar();
        printf("%c",carCourant());
        printf("Dans le 1er while\n");
    }
    while ((carCourant()  != '\n') && (i < 26)){
        printf("Dans le second while\n");
        avancerCar();
        motUsed.tab[i] = carCourant();
        printf("%c\n", motUsed.tab[i]);
        motUsed.lgm++;
        printf("%c\n",motUsed.lgm);
        i++;


    }
    */
    int inter = 0;/*
    printf("@here inter = %d\n",inter);
    printf("@here => before 1st while\n");
    while (carCourant()==' '){
        avancerCar();
        printf("@here carCourant() = %c\n", carCourant());
    }*/
    printf("\n\n\n@here => after 1st while and before 2nd while\n\n\n\n");

    while(carCourant() != '\0'){
        motUsed.tab[inter]=carCourant();
        motUsed.lgm++;
        printf("@here motUSed.tab[i] = %c\n",motUsed.tab[inter]);
        printf("@here carCourant = %c\n", carCourant());
        printf("@here motUsed.lgm = %c\n",motUsed.lgm);
        avancerCar();
    }

}





Mot motCour(void) // Quand on l'appelle on motCour().lgm et motCour().tab[x]
{
    return motUsed;
}