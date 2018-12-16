/* ---------------------------------------------------------------------------
 * Programme de test du module MachineCaracteres : recopie simple de l'entr�e
 * sur la sortie, caract�re par caract�re.
 * Auteur     : Damien Genthial
 * Cr�ation   : Janvier 2001, Modifi� en d�cembre 2006
 * Entr�es    : lecture de l'entr�e standard (clavier)
 * Sorties    : �criture sur la sortie standard (�cran)
 * Note       : pour le tester, essayez :
 *                  recopie < recopie.c
 * Avancement : termin� et test�.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MachineCaracteres.h"

int main(void)
{
  char c;
  
  printf("D�but du programme de recopie...\n");
  demarrerCar();		/* Les () sont obligatoires en C */
  c = carCourant();
  if (c == marque())
    printf("Texte vide\n");
  else
   {
     printf("%d : ", numLigne());
     while (true) /* it�rer */
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


