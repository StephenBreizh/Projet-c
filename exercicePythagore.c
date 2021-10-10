#include <stdio.h>
#include <math.h>

int main(void)
{
    float ab;//je déclare le float ab
    float bc;//je déclare le float bc

    printf("rentrer la valeur de AB(entrer une valeur flottante): \n");//première question pour connaitre la valeur de AB
    scanf("%f", &ab);//on demande la valeur et on l'inscrit dans la variable ab


    printf("rentrer la valeur de BC(entrer une valeur flottante): \n");//deuxième question pour connaitre la valeur de bc
    scanf("%f", &bc);//on demande la valeur et on l'inscrit dans la variable bc

    printf("La longueur de l'hypoténuse est de %fcm\n", sqrt(ab * ab + bc * bc));//on utilise le théorème de pythagore pour afficher la valeur de l'hypothénuse
}