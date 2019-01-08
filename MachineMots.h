/* ---------------------------------------------------------------------------
 * MachineMots : module de lecture mot par mot de l'entrée standard.
 * Auteur(s)  : Jacques Mironneau, Thomas Durand 
 * Groupe TP  : 1B
 */

#ifndef MACHINEMOTS_H
#define MACHINEMOTS_H

#define LF 0x0A
#define space 0x20
#define EOT 0x03
#define NOVALUE 0x0
// #define SOT 0x01

#include "LexMot.h"

void demarrerMot(void);
void avancerMot(void);
Mot motCour(void);

#endif	/* MACHINEMOTS_H */
