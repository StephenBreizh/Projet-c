#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string filmCategorieEnfant[3] = {"film1", "film2", "film3"};
    string filmCategorieAdos[3] = {"film4", "film5", "film6"};
    string filmCategorieAdulte[3] = {"film7", "film8", "film9"};
    //déclaration des 3 variables pour stocker les 9 films (3 par catégorie)

    int age = get_int("quel age a tu ?\n");
    //première question demander pour lancer le questionnaire

    if (age < 11)
        //si l'age est inferieur à 11
    {

        for (int f = 0; f < 3; f++)
            //alors la boucle se lance
        {
            printf("liste film enfant: %s\n", filmCategorieEnfant[f]);//afficher une première proposition de film
            string reponse = get_string("veux tu voir ce film ?\n");//deuxième question pour la sélection su film
            if (strcmp(reponse, "yes") == 0)//si la reponse est égale à "yes"
            {
                printf("bon film\n");//afficher "bon film"
                return 0;
            }
        }
    }

    if (age >= 11 && age <= 17)
        //si l'age est supérieur/égale à 11 et inferieur/égale à 17
    {
        for (int j = 0; j < 3; j++)
            //alors la boucle se lance
        {
            printf("liste film ados: %s\n", filmCategorieAdos[j]);//afficher une première proposition de film
            string reponse = get_string("veux tu voir ce film ?\n");//deuxième question pour la sélection su film
            if (strcmp(reponse, "yes") == 0)//si la reponse est égale à "yes"
            {
                printf("bon film\n");//afficher "bon film"
                return 0;
            }
        }
    }

    if (age > 18)
        //si l'age est supérieur à 18
    {
        for (int h = 0; h < 3; h++)
            //alors la boucle se lance
        {
            printf("liste film adulte: %s\n", filmCategorieAdulte[h]);//afficher une première proposition de film
            string reponse = get_string("veux tu voir ce film ?\n");//deuxième question pour la sélection su film
            if (strcmp(reponse, "yes") == 0)//si la reponse est égale à "yes"
            {
                printf("bon film\n");//afficher "bon film"
                return 0;
            }
        }
    }
}