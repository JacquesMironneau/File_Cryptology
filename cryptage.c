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

void initCrypt(void);
void crypterMot(Mot src, Mot *dst);
void decrypterMot(Mot src, Mot *dst);

int main(void)
{
    Mot crypted;
    // Mot cle;
    Mot uncrypted;
    // puts("#######Cryptage#######\n1)Cryptage\n2)Decryptage\n0)Sortie");
    demarrerMot();
    initCrypt();
    // ecrireMot(crypted);
    while(carCourant() != 0x03)
    {
        // puts("Allo");
        // printf("%c", carCourant());

        avancerMot();
        // puts("we did it");
        crypterMot(motCour(), &crypted );
        decrypterMot(motCour(), &crypted);
        // ecrireMot(crypted);

        
    }

    // printf("%c",0x03);
    return EXIT_SUCCESS;
}
