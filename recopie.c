/* ---------------------------------------------------------------------------
 * Programme de test du module MachineCaracteres : recopie simple de l'entrée
 * sur la sortie, caractère par caractère.
 * Auteur     : Damien Genthial
 * Création   : Janvier 2001, Modifié en décembre 2006
 * Entrées    : lecture de l'entrée standard (clavier)
 * Sorties    : écriture sur la sortie standard (écran)
 * Note       : pour le tester, essayez :
 *                  recopie < recopie.c
 * Avancement : terminé et testé.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MachineCaracteres.h"

int main(void)
{
  char c;
  
  printf("Début du programme de recopie...\n");
  demarrerCar();		/* Les () sont obligatoires en C */
  c = carCourant();
  if (c == marque())
    printf("Texte vide\n");
  else
   {
     printf("%d : ", numLigne());
     while (true) /* itérer */
      {
        if (c == '\n')
         {
           printf("\n");
           printf("%d : ", numLigne());
           /* ou encore printf("\n%d : ", numLigne()); */
         }
        else
          putchar(c);
        avancerCar();
        c = carCourant();
        if (c == marque()) break;
      }
     printf("\n");
     printf("Fin du programme.\n");
   }
  
  return EXIT_SUCCESS;
}


