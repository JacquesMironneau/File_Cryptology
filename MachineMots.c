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
{  
    int i = 0;
    avancerCar(); // On se rend sur le caractère 
    printf("On est avant le premier while");
    while (carCourant() == ' '){ // On avance tant que l'on parcourt des espaces
        avancerCar();
        printf("Dans le 1er while");
    }
    while ((carCourant()  != '\n') && (i < 26)){
        printf("Dans le second while");
        motUsed.tab[i] = carCourant();
        printf("%c", motUsed.tab[i]);
        motUsed.lgm++;
        i++;


    }

}








     // Ouai
    //Création du mot
    /*

    if( carCourant() != marque()){ // Tant que le caractère courrant n'est pas la marque
    // Pas sur de devoir le traiter si ? si.
    }
    else{ // On est pas sur la maruqe
    
    avancerCar(); // On est forcément sur un caractère ou un \n
        if (carCourant() == " "){ // Si on est sur un espace
            avancerCar();
        }
        else if(carCourant() == "\n"){ // Si on est sur un caractère
        motUsed.tab[0] = 'L';
        motUsed.tab[1] = 'F';
        motUsed.lgm = 1;

        }
        else{
            avancerCar();  
            motUsed.tab[i] = carCourant();
            motUsed.lgm++;
            i++;
        }

    }*/



Mot motCour(void) // Quand on l'appelle on motCour().lgm ou motCour().tab[x]
{
    return motUsed;
}