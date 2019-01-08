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
    Mot tab2[50];
    Mot tab3[50]; // AH OUAIS
    int i,d = 0;
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
        tab2[i] = crypted;
        i++;
        
        //  ecrireMot(crypted);
        decrypterMot(crypted, &uncrypted);
        tab3[d] = uncrypted;
        d++;
        //  ecrireMot(crypted);
        
    }

    puts("\n\n");
    puts("Impression du tableau...");
    for(i=0; i <20; i++){
        while(tab2[i-1].lgm == tab2[i].lgm)
            i++;
        for(int o=0; o <tab2[i].lgm; o++){
            putchar(tab2[i].tab[o]);
        }
        puts("");
    }

    
        puts("");

        puts("Impression du second tableau...");
        
    for(i=0; i <20; i++){
        while(tab3[i-1].lgm == tab3[i].lgm)
            i++;
        for(int o=0; o <tab3[i].lgm; o++){
            putchar(tab3[i].tab[o]);
        }
        puts("");

        
    }
    // printf("%c",0x03);
    return EXIT_SUCCESS;
}
