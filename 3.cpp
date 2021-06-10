#include <stdio.h>

int num;
int z;
int queda;
int main(){


  printf("Ingrese un número:");
  scanf("%d", &num);
  printf("Los divisores son\n");
  for(z=1; z<=num; z++){
  queda=num%z;
  if(queda==0){
    printf("%d, ",z);

  }  
  }
  return 0;
}