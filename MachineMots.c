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

    printf("@here => before 1st while\n\n");

    while(carCourant() == 10 || carCourant() == 32 ){
        puts("@here space skipped\n");
        avancerCar();
    }
    motUsed.lgm = 0;
        
    while(carCourant() != 10 && carCourant() != 46 && carCourant() != 32){
        motUsed.tab[motUsed.lgm]=carCourant();
        motUsed.lgm++;
        printf("@here carCourant = %c\n", carCourant());
        printf("@here motUsed.lgm = %d\n",motUsed.lgm);
            
        avancerCar();
        }

         printf("%d, %d", motUsed.lgm, motUsed.lgm+1);
       
         motUsed.tab[motUsed.lgm]='\0';
          // Afin que ecrireMot fonctionne on ajoute un \0 en fin de mot (fictif)
    
        
//Affichage debug 
         printf("Longueur du mot : %d\n",motUsed.lgm);
         ecrireMot(motUsed);
         puts(" ");
        
        while(carCourant() == 32  || carCourant() == 10){ // On ignore espaces et retour à la ligne
            puts("@here space or hard carriage return skipped\n");

            avancerCar(); // On passe au caractère suivant
          
            puts("@here new car \n");
        }
}





Mot motCour(void) // Quand on l'appelle on motCour().lgm et motCour().tab[x]
{
  return motUsed;
}