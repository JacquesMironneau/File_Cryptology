/* ---------------------------------------------------------------------------
 * MachineMots : module de lecture mot par mot de l'entrée standard.
 * Auteur(s)  : Jacques Mironneau, Thomas Durand
 * Groupe TP  : 1B
 * Avancement : Terminé, Fonctionnel
 */

#include <stdio.h>
#include <stdbool.h>
#include "MachineCaracteres.h"
#include "LexMot.h"
#include "MachineMots.h"

/* Variables globales */
Mot motUsed; // Mot qui sera utilisé dans la machineMot
int i = 0;
/* Fonctions et procédures */


/*
*demarrerMot : on se positionne sur le premier mot.
*/
void demarrerMot(void)
{
    
    demarrerCar();
    avancerMot();
}

void avancerMot(void) // Création d'un mot et enregistrement de sa valeur deans motUsed
{   

    // Tant que le caractère courant est un espace on avance sur le cractère suivant
    while(carCourant() == space ){ 
        avancerCar();
    }

    motUsed.lgm = 0; // Reset de la longueur pour le nouveau mot.
    
    if(carCourant() == LF) { // Traitement des mots 'LF'
    
        motUsed.tab[motUsed.lgm] = '\n'; 
        avancerCar();
        motUsed.lgm =1;
    }
    else{
        // On ne garde que les caractères hors {espace, EOT, \n}, puis on ajoute au mot les caractères et on incrémente sa longueur.

        while(carCourant() != LF && carCourant() != marque() && carCourant() != space){ 
            if(carCourant() > 0x41 && carCourant() < 0x5A){
                motUsed.tab[motUsed.lgm]=carCourant(); // Ajout d'une lettre ou d'un symbole au mot.
                motUsed.lgm++; // Incrémentation de la longueur
        
            
                avancerCar(); // Passage au caractère suivant
            }
        }
    }

 

// Afin que EcrireMot fonctionne, on ajoute un 0 (0x0 défini dans MachineMots.h)
       
        motUsed.tab[motUsed.lgm]=NOVALUE;
}




// Fonction qui renvoie le mot courant.
Mot motCour(void) 
{
  return motUsed;
}
