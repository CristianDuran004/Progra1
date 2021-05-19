#include <stdio.h>

int clave = 123456789;

int main (){
printf("ingrese su clave(sin codigo verificador)\n");
scanf("%d", &clave);
if (clave==123456789){
    printf("Bienvenido");
    }else {
    printf("clave incorrecta, quedan 2 intentos\n");
    printf("Reingrese su clave\n");
    scanf("%d", &clave);
    if (clave==123456789){
        printf("Bienvenido");
          
    }else {
    printf("clave incorrecta, quedan 1 intento\n");
    printf("Reingrese su clave\n");
    scanf("%d", &clave);
     if (clave==123456789){
    printf("Bienvenido");
     }else {
    printf("No tiene más intentos, intentelo más tarde");
     }
}
}

}