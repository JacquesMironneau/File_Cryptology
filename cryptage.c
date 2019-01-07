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

int main(void)
{
    Mot source;
    Mot crypted;
    Mot cle;

    
    demarrerMot();
    initCrypt();
    puts("");
  // printf("La marque est : %d \n", marque());
     // Premier mot gérer

    
    // puts("La phrase est source est : "); 
    // while(carCourant() != 0x2E)
    // {
    //     avancerMot();
    //     ecrireMot(motCour());
    // }
 
    puts(" ");
    puts("La phrase cryptée est : "); 

    while(carCourant() != 0x2E)
    {
        // puts("Allo");
        printf("%c", carCourant());

        avancerMot();
        // puts("we did it");
        crypterMot(motCour(), &crypted );
        // ecrireMot(crypted);
    }
 
    
    
    

    return EXIT_SUCCESS;
}
