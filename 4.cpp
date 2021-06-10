#include <stdio.h>

 int marcador;
 int numero;
 int numprimo;
 int num;
int main(){
  
    printf( "Ingrese un número para dar sus números primos:\n" );
    scanf("%d", &num);
    for ( numero = 2 ; numero <= num  ; numero++ ){
        numprimo = 1;
        marcador = 2;
    while ( marcador <= numero / 2 && numprimo ){
            if ( numero % marcador == 0 )
                numprimo = 0;
                marcador++; 
          }
            if ( numprimo )
            printf( "%d ", numero );
      }
      return 0;
}