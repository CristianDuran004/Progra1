#include <stdio.h>


int edad;
int destino;

int main(){

printf("ingrese su edad\n");
scanf("%i", &edad);
printf("ingrese destino\n");
scanf("%i", &destino);


if(edad < 15){
    if (destino ==1){
         printf("el valor a pagar es :\n $2500\n");
  } else if (destino ==2){
        printf("el valor a pagar es : \n $1200\n");
   } else {
        printf("el valor a pagar es : \n $2000\n");
   }
}   else if (edad < 65){
    if (destino ==4){
         printf("el valor a pagar es :\n $4200\n");
}   else if (destino ==5){
        printf("el valor a pagar es : \n $3000\n");
   } else {}
        printf("el valor a pagar es : \n $3800\n");
} else {
    if (destino ==7){
         printf("el valor a pagar es :\n $3000\n");
}   else if (destino ==8){
        printf("el valor a pagar es : \n $2000\n");
   } else {
        printf("el valor a pagar es : \n $2500\n");
   }
}
    return 0;
}