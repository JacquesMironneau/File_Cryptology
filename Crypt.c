/* ---------------------------------------------------------------------------
 * Crypt : module de cryptage d'un mot à l'aide d'un mot clef
 * Auteur(s)  :
 * Groupe TP  :
 * Avancement :
 */
#include <stdio.h>
#include <stdlib.h>
#include "LexMot.h"
#include "Crypt.h"


Mot Cle;

/* initCrypt : initialise le module de cryptage.
 * Entrées : aucune
 * Sorties : le mot clef est initialisé et ... */
void initCrypt(void)
{
//tout ce qui concerne la clé (tableau de caractere et longueur
  Cle.lgm = 5;
  Cle.tab[0] = 'C';
  Cle.tab[1] = 'I';
  Cle.tab[2] = 'T';
  Cle.tab[3] = 'R';
  Cle.tab[4] = 'O';
  Cle.tab[5] = 'N';
}

/* crypterMot : codage d'un mot en utilisant le mot clef.
 * Entrées : src le mot à coder
 * Sorties : dst le mot codé. */
void crypterMot(Mot src, Mot *dst)
{
  int i;

  /* version de test, simple recopie de src dans dst, donne un exemple de
   * parcours de chaîne */
  i = 0;
  while (i < src.lgm)
  {
    (*dst).tab[i] = src.tab[i];
    i = i + 1;
  }
  /* On copie aussi le '\0' de fin de chaîne */
  (*dst).tab[i] = src.tab[i];
  (*dst).lgm = src.lgm;
}

/* decrypterMot : décodage d'un mot en utilisant le mot clef.
 * Entrées : src le mot à décoder
 * Sorties : dst le mot décodé. */
void decrypterMot(Mot src, Mot *dst)
{
  int i;

  /* version de test, simple recopie de src dans dst, donne un autre exemple de
   * parcours de chaîne */
  i = 0;
  while (src.tab[i] != '\0')
  {
    /* px->champ est équivalent à (*px).champ */
    dst->tab[i] = src.tab[i];
    i = i + 1;
  }
  /* On copie aussi le '\0' de fin de chaîne */
  dst->tab[i] = src.tab[i];
  dst->lgm = src.lgm;
}

