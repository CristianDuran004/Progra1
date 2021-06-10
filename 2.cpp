#include <stdio.h>

int num1;
int num2;
int resu;

int main(){
  printf("Ingrese los numeros en forma X, Y:\n");
  scanf("%d, %d", &num1, &num2);
  for(int i = 0; i < num1; i++ ){
    resu += num2;
  }
  printf("%d * %d = %d\n",num1, num2, resu);

  return 0;
}