
#include <stdio.h>
#include<ctype.h>

int main()
{
    float nombreSaisir, tab[4]= {32.0,1.0,4.0,56.25};
   char c;
   int i,position, trouver=0;
    printf("Veuillez saisir la valeur a chercher:\n ");
do
{
    //verification de la saisie : si le nombre saisie
    if (scanf("%f",&nombreSaisir) == 1)
    {
        for (i = 0; i < 4; i++)//boucle pour parcourir le tableau
        {
            if (tab [i] == nombreSaisir)//verification de l existance du nombre a chercher dans le tableau
            {
                position = i;//si on trouve on recupere sa position
                trouver = 1;//et on dit que trouver est vrai donc il recoit 1
                break;//on sort de la condition
            }
        }
        if (trouver == 1)//si trouver est egale a 1 cela veut dire qu on a trouver l element et on l affiche
        {
            printf("L'element %.1f se trouve a la position %d du tableau\n",nombreSaisir,position);
        }else //sinon on dit que l element n existe pas
        {
            printf("L'element %.1f n'existe pas dans le tableau\n",nombreSaisir);
        }
    }else // si la saisie s est mal passee on demande a l utilisateur de ressaisir
    printf("La valeur que vous avez saisis n'est pas un entier\n\tSaisissez un entier\n");

} while ((c=getchar()) != '\n' && c != EOF);// on vide la memoire
    return 0;
}
