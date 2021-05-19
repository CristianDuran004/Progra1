#include <stdio.h>

int numero1;
int numero2;
int numero3;

int main(){

    printf("ingrese el primer numero\n");
    scanf("%i", &numero1);
    printf("ingrese el segundo numero\n");
    scanf("%i", &numero2);
    printf("ingrese el tercer numero\n");
    scanf("%i", &numero3);
    if ((numero1 == numero2) && (numero2 == numero3)){
        printf("los 3 numeros ingresados son iguales");
    } else if(numero1 > numero2 && numero1 > numero3){
        printf("el numero mayor es: %i", numero1);
    } else if(numero2 > numero1 && numero2 > numero3){
        printf("el numero mayor es: %i", numero2);
    } else {(numero3 > numero1 && numero3 > numero2);
        printf("el numero mayor es: %i", numero3);
    }

return 0;
}