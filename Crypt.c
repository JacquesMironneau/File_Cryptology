/* ---------------------------------------------------------------------------
 * Crypt : module de cryptage d'un mot à l'aide d'un mot clef
 * Auteur(s)  : Jacques Mironneau, Thomas Durand
 * Groupe TP  : 1B
 * Avancement : Terminé, Fonctionnel
 */
#include <stdio.h>
#include <stdlib.h>
#include "LexMot.h"
#include "Crypt.h"
 
void ecrireMot(Mot m);

// Variables globales
int l = 0;
int k = 0;
int z = 0;

/* initCrypt : initialise le module de cryptage.
 * Entrées : aucune
 * Sorties : le mot clé est initialisé à CITRON
 * Etat: fonctionnel
 * */
void initCrypt(void)
{
    cle.lgm = 5;
    cle.tab[0] = 'C';
    cle.tab[1] = 'I';
    cle.tab[2] = 'T';
    cle.tab[3] = 'R';
    cle.tab[4] = 'O';
    cle.tab[5] = 'N';
}

/* crypterMot : codage d'un mot en utilisant le mot clé.
 * Entrées : src le mot à coder
 * Sorties : dst le mot crypté. 
 * Etat : fonctionnel
 * */

void crypterMot(Mot src, Mot *dst){   
    k = 0;
    if(src.lgm == 1){ 
        puts("");
    }
    else{
        while(k < src.lgm){

            unsigned char srcI=src.tab[k]-64;
            unsigned char cleI=cle.tab[l]-64;
        
            (*dst).tab[k]=(srcI + cleI) + 64; // On ajoute 64 pour retourner sur l'échelle ASCII

            if(dst->tab[k] > 90){
                dst->tab[k]=(dst->tab[k]-90)+64; // On ajoute 64 pour retourner sur l'échelle ASCII
            }
            
            l++;
            k++;

            if( l > cle.lgm) // On boucle la clé afin qu'elle ne recommence pas à chaque nouveau mot courant.
            { 
                l = 0;
            }

        }
    
        (*dst).tab[k] = src.tab[k]; // Ajout \0 dans le mot crypté.
        (*dst).lgm = src.lgm;

    }
}
/*
*Fonction decrypterMot : Décrypte le mot src en renvoyant le mot dst décrypté.
Etat: fonctionnel
*/
void decrypterMot(Mot src, Mot *dst){
    k = 0;

    if(src.lgm == 1){ // Si le mot contient un LF, on ne le crypte pas.
        puts("");
    }

    else{ // Si le mot est un mot classique.
        while(k < src.lgm){ // Tant que le mot n'est pas fini d'être crypté.
            
            unsigned char srcI=src.tab[k]-64; // On retrouve une valeur alphabétique classique de la lettre du mot cryptée
            unsigned char cleI=cle.tab[z]-64;  // On retrouve une valeur alphabétique classique de la lettre du mot clé

        

            dst->tab[k]=(srcI-cleI)+64; // On met dans le mot décrypté la valeur en ASCII de la lettre décryptée.
            
            
            if(dst->tab[k] < 65){ // Si le résultat est inférieur à 'A' on l'ajuste afin qu'il ait la bonne valeur
                dst->tab[k]=(dst->tab[k]+90)-64;
            }
            else if (dst->tab[k]>90) // Si le résultat est supérieur à 'Z' on l'ajuste afin qu'il ait la bonne valeur
                dst->tab[k]=dst->tab[k]-27;

            z++; // On avance sur la clé
            k++; // On avance sur le mot crypté

            if(z>cle.lgm){ // Dans le cas où un mot est supérieur à la taille de la clé, on boucle celle-ci.
                z=0;
            }
        }
        dst->tab[k]=src.tab[k]; // Ajout du \0 pour permettre l'utilisation de ecrireMot()
        dst->lgm=src.lgm;

  
    }
}

