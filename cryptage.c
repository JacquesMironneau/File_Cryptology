/* ---------------------------------------------------------------------------
 * Programme principal de l'application de codage d'une suite de mots
 * Auteur(s)  :
 * Groupe TP  :
 * Entr�es    : lecture de l'entr�e standard (clavier)
 * Sorties    : �criture sur la sortie standard (�cran)
 * Note       : Pour l'utiliser, taper :
 *                  cryptage < montexte.txt > montextecrypte.txt
 * Avancement :
 */

#include <stdio.h>
#include <stdlib.h>
#include "MachineCaracteres.h"
#include "LexMot.h"
#include "MachineMots.h"
#include "Crypt.h"

int main(void)
{
  printf("La marque est : %d \n", marque());
  demarrerMot(); // Premier mot gérer


 puts("@here start main first call of AvancerMot()"); // Prise en compte du second mot ^^.

 while(carCourant() != 0x2E){
   
   avancerMot();
   
 
 }
      
/*
  printf("c le début");
    demarrerMot();
    
    printf("le mot est démarré\n");
    while (carCourant() != marque()){
      printf("While de l'écriture \n"); 
      avancerMot();
    }*/



  return EXIT_SUCCESS;
}
