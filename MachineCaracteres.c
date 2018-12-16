/* ---------------------------------------------------------------------------
 * MachineCaracteres : lecture de caractères sur l'entrée standard (clavier)
 * jusqu'à fin de cette entrée (matérialisée par une marque).
 * Auteur(s)  : Damien Genthial (Alain Lucci pour la version Ada) 
 * Création   : Janvier 2001, modifié en décembre 2006
 * Note :
 *  Ce module ne prétend pas être écrit dans un souci d'efficacité mais dans le
 *  souci de coller à la description algorithmique initiale, dont l'objectif
 *  est avant tout pédagogique.
 */

#include <stdio.h>
#include "MachineCaracteres.h"

/* Variables privées du module (déclarée "static") */
static unsigned int numeroLigne;
static char cc;			/* Caractère courant */
static const char MARQUEFIN = EOF;

/* ------- Procédures publiques ------- */
void demarrerCar(void)
{
  numeroLigne = 1;
  avancerCar();
}

char carCourant(void)
{
  return cc;
}

unsigned int numLigne(void)
{
  return numeroLigne;
}

char marque(void)
{
  return MARQUEFIN;
}

void avancerCar(void)
{
  cc = getchar();
  if (cc == EOF)
    cc = MARQUEFIN;
  else if ((cc == '\n') || (cc == '\f'))
   {
     numeroLigne = numeroLigne + 1;
     cc = '\n';
   }
}
