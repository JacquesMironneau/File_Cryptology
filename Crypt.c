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
    ecrireMot(cle);
}

/* crypterMot : codage d'un mot en utilisant le mot clef.
 * Entrées : src le mot à coder
 * Sorties : dst le mot crypté. */
void crypterMot(Mot src, Mot *dst)
{
    int i;
    i=0;
    if(src.lgm == 1){
        printf("\n");
    }
    else{
    while(i < src.lgm){
        // puts("We are dans le while");
        (*dst).tab[i]=src.tab[i]+cle.tab[i];

        if (dst->tab[i]>90){
            dst->tab[i]=dst->tab[i]-90;
        }
        
        i++;
    }
    
    (*dst).tab[i] = src.tab[i];
    (*dst).lgm = src.lgm;
    // puts("KO"); 
    ecrireMot(*dst);
    // puts("OK");
    }
}
   // ANCIEN CODE TEST DU SUJET DE BASE  
    /* version de test, simple recopie de src dans dst, donne un exemple de
    * parcours de chaîne 
    i = 0;
    while (i < src.lgm)
    {
        (*dst).tab[i] = src.tab[i];
        i = i + 1;
    }
    On copie aussi le '\0' de fin de chaîne 
        (*dst).tab[i] = src.tab[i];
        (*dst).lgm = src.lgm;*/

        //FIN DE L'ANCIEN CODE


/* decrypterMot : décodage d'un mot en utilisant le mot clef.
 * Entrées : src le mot à décoder
 * Sorties : dst le mot décodé. */
void decrypterMot(Mot src, Mot *dst)
{
  int i;

  /* version de test, simple recopie de src dans dst, donne un autre exemple de
   * parcours de chaîne */
  i = 0;
  while (src.tab[i] != '\0')
  {
    /* px->champ est équivalent à (*px).champ */
    dst->tab[i] = src.tab[i];
    i = i + 1;
  }
  /* On copie aussi le '\0' de fin de chaîne */
  dst->tab[i] = src.tab[i];
  dst->lgm = src.lgm;
}

