/* ---------------------------------------------------------------------------
 * LexMot : définitions globales pour le codage d'un texte mot par mot.
 * Auteur : Damien Genthial. 
 */

#ifndef LEXMOT_H
#define LEXMOT_H

/* Longueur maximale d'un mot : 25 lettres plus le * caractère de fin de chaîne en C : '\0' */
#define LONGMAX 26

/* Structure mot associant un tableau de lettres et sa longueur */
typedef struct {
  /* En C, on peut déclarer le tableau directement ici : */
  unsigned char tab[LONGMAX];
  /* En C, on ne peut pas définir des types intervalles : */
  int lgm;
} Mot;


/* Écriture d'un mot */
void ecrireMot(Mot m);

#endif	/* LEXMOT_H */
