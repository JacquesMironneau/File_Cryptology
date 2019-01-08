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
 
void ecrireMot(Mot m);

//variables globales
int l = 0;
int k = 0;
int z = 0;

/* initCrypt : initialise le module de cryptage.
 * Entrées : aucune
 * Sorties : le mot clef est initialisé et ... */
void initCrypt(void)
{
    //Roll de Clé


//tout ce qui concerne la clé et sa création (tableau de caractere et longueur)
    cle.lgm = 5;
    cle.tab[0] = 'C';
    cle.tab[1] = 'I';
    cle.tab[2] = 'T';
    cle.tab[3] = 'R';
    cle.tab[4] = 'O';
    cle.tab[5] = 'N';
    
    /*puts("La clé est :");
    for (int f; f < 6; f++){
        printf("%c",cle.tab[f]);
    }
    puts("\n");*/
}

/* crypterMot : codage d'un mot en utilisant le mot clef.
 * Entrées : src le mot à coder
 * Sorties : dst le mot crypté. */
void crypterMot(Mot src, Mot *dst){   
    k = 0;

    if(src.lgm == 1){ // OK
        puts("");
    }

    else{
        while(k < src.lgm){
        // printf("%d", l);
        // puts("We are dans le while");
            unsigned char srcI=src.tab[k]-64;
            unsigned char cleI=cle.tab[l]-64;
        
            (*dst).tab[k]=(srcI + cleI) + 64;//On ajoute 64 pour retourner sur l'échelle ASCII
            if(dst->tab[k] > 90){
                dst->tab[k]=(dst->tab[k]-90)+64;//On ajoute 64 pour retourner sur l'échelle ASCII
            }
            // dst->tab[k]= cle.tab[l]; //<- PERMET DE VOIR LA CLE SUR LE CODE
        
            l++;
            k++;

            if( l > cle.lgm) // Boucle infinie de la clé
            { 
                l = 0;
            }

        }
    
        (*dst).tab[k] = src.tab[k]; // Ajout \0
        (*dst).lgm = src.lgm;
    // puts("KO"); 
        // ecrireMot(*dst);
    // puts("OK");
    }
}

void decrypterMot(Mot src, Mot *dst){
    k = 0;
    // puts("Le mot est :");
    // ecrireMot(src);
    // printf("Etat de z :%d\n", z);
    if(src.lgm == 1){
        puts("");
    }

    else{
        while(k < src.lgm){
            // printf("(%c, %d)", src.tab[k], src.tab[k]);
            unsigned char srcI=src.tab[k]-64;
            unsigned char cleI=cle.tab[z]-64;
            // printf("(%d, %d)", srcI, cleI);

            dst->tab[k]=(srcI-cleI)+64;
            //  printf("Le caractère décrypter est %c  \n son srcl est %d, son clel est %c", dst->tab[k], srcI, cleI);
            
            if(dst->tab[k] < 65){
                dst->tab[k]=(dst->tab[k]+90)-64;
            }
            else if (dst->tab[k]>90)
                dst->tab[k]=dst->tab[k]-27;
            z++;
            k++;

            if(z>cle.lgm){
                z=0;
            }
        }
        dst->tab[k]=src.tab[k];
        dst->lgm=src.lgm;

        // ecrireMot(*dst);
    }
}

