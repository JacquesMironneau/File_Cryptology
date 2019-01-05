/* ---------------------------------------------------------------------------
 * MachineMots : module de lecture mot par mot de l'entrée standard.
 * Auteur(s)  : 
 * Groupe TP  : 
 */

#ifndef MACHINEMOTS_H
#define MACHINEMOTS_H

#define LF 0x0D
#define space 0x20
#define EOT 0x2E
#define NOVALUE 0x0

#include "LexMot.h"

void demarrerMot(void);
void avancerMot(void);
Mot motCour(void);

#endif	/* MACHINEMOTS_H */
