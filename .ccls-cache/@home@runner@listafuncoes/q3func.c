#include <stdio.h>
#include <stdlib.h>

int fatorial (int n)
{
  int resultado;
    
  if(n == 0){
    resultado = 1;
  }else{
    resultado = n * fatorial(n - 1);
  }
  return resultado;
}

int main (){

  // int fatorial(int n);
  int numero, resultado;
  
  printf("Digite um numero inteiro:\n");
  scanf("%d", &numero);

  resultado = fatorial(numero);
  
  printf("O fatorial eh %d", resultado);

  system("pause");
  return 0;
}