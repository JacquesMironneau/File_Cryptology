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
    // printf("lancement de démarrer mot\n");
    demarrerCar();
    // printf("Lancement avancer mot \n");
    avancerMot();
}

void avancerMot(void) // Création d'un mot et enregistrement de sa valeur deans motUsed
{   

    // printf("@here => before 1st while\n\n"); // Affichage debug


    // Tant que le caractère courant est un espace ou un \n on avance sur le cractère suivant
    while(carCourant() == space ){ 
        // puts("@here space or hard carriage return skipped\n"); // Affichage debug
        avancerCar();
    }

    motUsed.lgm = 0; // Reset de la longueur pour le nouveau mot.
    
    if(carCourant() == LF) {
        motUsed.tab[0] = carCourant();
        // puts("Mot LF");
        avancerCar();
    }
    else{
               // On ne garde que les caractères hors {espace, EOT, \n}, puis on ajoute au mot les caractères et on incrémente sa longueur.
    while(carCourant() != LF && carCourant() != EOT && carCourant() != space){ 
        motUsed.tab[motUsed.lgm]=carCourant(); // Ajout d'une lettre ou d'un symbole au mot.
        motUsed.lgm++; // Incrémentation de la longueur
        // printf("@here carCourant = %c\n", carCourant()); // Affichage debug
        // printf("@here motUsed.lgm = %d\n",motUsed.lgm); // affichage debug
            
        avancerCar(); // Passage au caractère suivant
        }
    }

 

// Afin que EcrireMot fonctionne (à l'air de fonctionner)
        //Potentiellement foireux : {
        //  printf("%d, %d", motUsed.lgm, motUsed.lgm+1);
       
         motUsed.tab[motUsed.lgm]=NOVALUE;
          // Afin que ecrireMot fonctionne on ajoute un \0 en fin de mot (fictif)
        //  }
        

//Affichage debug 
        //  printf("Longueur du mot : %d\n",motUsed.lgm);
        //  ecrireMot(motUsed);
        //  puts(" ");
        
}




// Fonction qui renvoie le mot courant.
Mot motCour(void) 
{
  return motUsed;
}
