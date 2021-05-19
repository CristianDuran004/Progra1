#include <stdio.h>
int num;

int main(){
    printf("ingrese un numero\n");
    scanf("%i", &num);
    if(num %2 == 0){
        printf("el numero es par");
    }
    else {
        printf("el numero es impar");
    }
    return 0;
}