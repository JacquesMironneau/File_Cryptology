/* ---------------------------------------------------------------------------
 * LexMot : définitions globales pour le codage d'un texte mot par mot.
 * Auteur : Damien Genthial. 
 */

#include <stdio.h>
#include "LexMot.h"

void ecrireMot(Mot m)
{
   /* Comme on a pris soin de terminer les mots par le caractères nul ('\0'),
    * on peut utiliser un simple printf */
  printf("%s  ", m.tab);
  //  Sinon il faudrait le faire caractère par caractère :
  /* int i = 0;
   while (i < m.lgm) {
     putchar(m.tab[i]);
     i = i + 1;
   }
   */
}

