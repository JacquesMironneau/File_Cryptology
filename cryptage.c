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
    Mot tab2[30];
    Mot tab3[30]; // AH OUAIS
    int i,d = 0;
    // puts("#######Cryptage#######\n1)Cryptage\n2)Decryptage\n0)Sortie");
    demarrerMot();
    initCrypt();
    // ecrireMot(crypted);
    while(carCourant() != 0x03)
    {
        // puts("Allo");
        // printf("%c", carCourant());

        
        if(motCour().tab[0] == '\n'){
            tab2[i] = motCour();
            tab3[d] = motCour();
            i++;
            d++;
            avancerMot();
        }
        else{
            crypterMot(motCour(), &crypted );
        tab2[i] = crypted;
        i++;
        // puts(" \nCrypted est :");
        // ecrireMot(crypted);
        
        //  ecrireMot(crypted);
        decrypterMot(crypted, &uncrypted);
        tab3[d] = uncrypted;
        d++;
        // puts("\nUncrypted est :");
        // ecrireMot(uncrypted);
        // puts("");

        avancerMot();
        }
        // puts("we did it");
        // printf("aled");
        
        
    }

   
    puts("Affichage version cryptée...");
    for(i=0; i <20; i++){
   
        for(int o=0; o <tab2[i].lgm; o++){
            putchar(tab2[i].tab[o]);
        }
        printf(" ");
    }

        
        puts("");

        puts("Affichage version décryptée..");
        
    for(i=0; i <20; i++){
        
        for(int o=0; o <tab3[i].lgm; o++){
            putchar(tab3[i].tab[o]);
        }
        printf(" ");

        
    }
    puts("");
    // printf("%c",0x03);
    return EXIT_SUCCESS;
}
