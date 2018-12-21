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
    // int inter = 0;
    
    printf("@here => before 1st while\n\n\n\n");

    while(carCourant() == ' '){
        puts("@here space skipped\n");
        avancerCar();
    }
    
    motUsed.lgm = 0;
        
    // while (carCourant() != marque()){
        while(carCourant() != ' ' ){
            motUsed.tab[motUsed.lgm]=carCourant();
            motUsed.lgm++;
            printf("@here carCourant = %c\n", carCourant());
            printf("@here motUsed.lgm = %d\n\n",motUsed.lgm);
            
            avancerCar();
        
        
            
        }
    // }    

        printf("%d, %d", motUsed.lgm, motUsed.lgm+1);
        motUsed.tab[motUsed.lgm+1]='\0';
    
        puts("@here before for loop");
        printf("Longueur du mot : %d\n",motUsed.lgm);
        ecrireMot(motUsed);
        puts(" ");
        
        
        while(carCourant() == ' '){ // On va jusqu'au mot suivant
            puts("@here space skipped\n");
            avancerCar();
        }
        
    

    
}





Mot motCour(void) // Quand on l'appelle on motCour().lgm et motCour().tab[x]
{
  return motUsed;
}