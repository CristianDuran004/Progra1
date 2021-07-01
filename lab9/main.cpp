#include <stdio.h>

// Prototipos
int ejemplo(int a, int b);
void imprimirMenu();
void imprimirOperaciones();
int suma(int numero1, int numero2);
int resta(int numero1, int numero2);
int multiplicacion(int numero1, int numero2);

int division(int numero1, int numero2);
float division(float numero1, float numero2);
int calculadora(int operacion, int numero1, int numero2);

// Variables Globales
int opcion;
int numero1;
int numero2;
int resultado;

int main(){
    int ejemplo = 4; // Variable local de la función main
    // Calculadora

    // Menú
    imprimirMenu();

    // Opciones
    imprimirOperaciones();
    printf("Seleccione la operación que desea realizar:\n");
    scanf("%d", &opcion);
    // Pedir números
    if (opcion==4){
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1); 
   do{
    printf("Ingrese el segundo número:\n"); 
    scanf("%d", &numero2); 
   }while(numero2==0);
   }else{
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1); 
    printf("Ingrese el segundo número:\n"); 
    scanf("%d", &numero2); 
   }


    // Selección de operación
    printf("El resultado es: %d\n", calculadora(opcion, numero1, numero2));
    return 0;
}

// Implementaciones

int suma(int numero1, int numero2){
    int resultado = numero1 + numero2;
    return resultado;
}

int resta(int numero1, int numero2){
    int resultado = numero1 - numero2;
    return resultado;
}

int multiplicacion(int numero1, int numero2){
    int resultado = numero1 * numero2;
    return resultado;
}

int division(int numero1, int numero2){
    int resultado = numero1 / numero2;
    return resultado;
}

float division(float numero1, float numero2){
    float resultado = numero1 / numero2;
    return resultado;
}

void imprimirMenu(){
    printf("-------------------\n");
    printf("-------------------\n");
    printf("-----CALCULADORA----\n");
    printf("-------------------\n");
    printf("-------------------\n");
}

void imprimirOperaciones(){
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicación\n");
    printf("4.- División\n");
}

int calculadora(int operacion, int numero1, int numero2){
    switch(operacion){
        case 1: return suma(numero1, numero2);

        case 2: return resta(numero1, numero2);

        case 3: return multiplicacion(numero1, numero2);

        case 4: return division(numero1, numero2);

        default: return -1;
    }
}