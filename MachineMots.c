/* ---------------------------------------------------------------------------
 * MachineMots : module de lecture mot par mot de l'entrée standard.
 * Auteur(s)  :
 * Groupe TP  :
 * Avancement : à compléter
 */

#include <stdbool.h>
#include "MachineCaracteres.h"
#include "LexMot.h"
#include "MachineMots.h"

/* Mettre ici les variables globales */
Mot motUsed;
/* Fonctions et procédures */

void demarrerMot(void)
{
   demarrerCar();
   avancerMot();
}

void avancerMot(void) // Création d'un mot et enregistrement de sa valeur deans motUsed
{  
    int i = 0;
    avancerCar(); // On se rend sur le caractère 

    while (carCourant() == ""){ // On avance tant que l'on parcourt des espaces
        avancerCar();

    }
    while (carCourant() != ""){
        motUsed.tab[i] = carCourant();
        motUsed.lgm++;


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