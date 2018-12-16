/* ---------------------------------------------------------------------------
 * MachineCaracteres : lecture de caractères sur l'entrée standard (clavier)
 * jusqu'à fin de cette entrée (matérialisée par une marque).
 * Auteur(s)  : Damien Genthial (Alain Lucci pour la version Ada) 
 * Création   : Janvier 2001, modifié en décembre 2006
 */

#ifndef MACHINECARACTERES_H
#define MACHINECARACTERES_H

void demarrerCar(void);
char carCourant(void);
unsigned int numLigne(void);
char marque(void);
void avancerCar(void);

#endif	/* MACHINECARACTERES_H */
