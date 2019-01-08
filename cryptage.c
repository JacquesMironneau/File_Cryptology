/* ---------------------------------------------------------------------------
 * Programme principal de l'application de codage d'une suite de mots
 * Auteur(s)  : Jacques Mironneau, Thomas Durand
 * Groupe TP  : 1B
 * Entr�es    : lecture de l'entrée standard (clavier)
 * Sorties    : Ecriture sur la sortie standard (�cran)
 * Note       : Pour l'utiliser, taper :
 *                  cryptage < montexte.txt > montextecrypte.txt
 * Avancement : Terminé, programme fonctionnel pour cryptage et décryptage.
 */

#include <stdio.h>
#include <stdlib.h>
#include "MachineCaracteres.h"
#include "LexMot.h"
#include "MachineMots.h"
#include "Crypt.h"

/*
* Appel des fonctions sans paramètres afin d'éviter tous bugs.
*/
void initCrypt(void);
void crypterMot(Mot src, Mot *dst);
void decrypterMot(Mot src, Mot *dst);


int main(void)
{
    Mot crypted; // Mot crypté
    Mot uncrypted; // Mot décrypté

    Mot tab2[30]; // Tableau de mot contennant les mots cryptés.
    Mot tab3[30]; // Tableau de mot contennant les mots décryptés.

    int i,d = 0; // variables intémerdiaires
    
    demarrerMot(); // On démarre la machineMot
    initCrypt(); // Initialisation du cryptage

    while(carCourant() != 0x03) // Tant que le texte n'est pas fini.
    {
       
        if(motCour().tab[0] == '\n'){ // Non cryptage des mots 'LF'
            tab2[i] = motCour(); // On ajoute le mot dans les mots cryptés.
            tab3[d] = motCour(); // On ajoute également le mot dans les mots décryptés.
            i++;
            d++;
            avancerMot(); // On passe au mot suivant.
        }
        else{ // Traitement des mots classique
            crypterMot(motCour(), &crypted );  // On crypte le mot courant
        tab2[i] = crypted; // Puis on l'ajoute dans le tableau.
        i++;
     
        decrypterMot(crypted, &uncrypted); // On décrypte le mot précédemment crypté
        tab3[d] = uncrypted; // Puis on l'ajoute dans le tableau des mots décryptés.
        d++;
        avancerMot(); // On passe au mot suivant.
        }
    }

   /*
    *Fonction d'affichage du texte crypté ainsi que du texte décrypté 
    *Etat : Fonctionnel
    */
    puts("Affichage version cryptée...");
    for(i=0; i <20; i++){ // On parcourt le tableau
   
        for(int o=0; o <tab2[i].lgm; o++){ // On parcourt le mot
            putchar(tab2[i].tab[o]); // On affiche chacun de ses caractères.
        }
        printf(" ");
    }

        
        puts("");

        puts("Affichage version décryptée..");
        
    for(i=0; i <20; i++){ // On parcourt le tableau
        
        for(int o=0; o <tab3[i].lgm; o++){ // On parcourt le mot
            putchar(tab3[i].tab[o]); // On affiche chacun de ses caractères.
        }
        printf(" ");

        
    }
    puts("");
   
    return EXIT_SUCCESS;
}
