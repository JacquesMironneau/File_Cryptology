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
  // printf("La marque est : %d \n", marque());
  demarrerMot(); // Premier mot gérer


 puts("La phrase est : "); 

 while(carCourant() != 0x2E)
 {
   avancerMot();
   ecrireMot(motCour());
 }
 
 puts(" ");

  return EXIT_SUCCESS;
}
