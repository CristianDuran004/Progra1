#include <stdio.h>

int numero;
int suma;

int main (){
    printf("ingresa un numero:\n ");
    scanf("%i",&numero);
    while (numero>0)
    {
        suma=suma+numero;
        printf("ingresa un numero:\n ");
        scanf("%i",&numero);
    }
    printf("la suma es %i \n", suma);
    return 0;
}