/*#include <stdio.h>
#include <stdlib.h>

void LeVetor()
{
    int vetor[3],i;
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Elemento %d:\n",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("Vetor:\n[ ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("]\n");
}
int main(){
    LeVetor();
    return 0;
}
*/
/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.*/

#include <stdio.h>
#include <stdlib.h>

typedef  struct
{
  int dia, mes, ano, horario;
}DiaNasc;

typedef struct
{
  DiaNasc inicioVida;
}

void imprimirData (Dia d)
{
  printf("\tSeu ciclo de vida começou em: %d/%d/%d\t Às %d:%d.", d.inicioVida.dia, d.inicioVida.mes, d.inicioVida.ano, d.inicioVida.horario);
}

int main()
{
  Dia dia;
  printf("Digite seu dia de nascimento: ");
  scanf("%d", &dia.dia);
  
  printf("Digite o mes do seu nascimento: ");
  scanf("%d", &dia.mes);
  
  printf("Digite o ano do seu nascimento: ");
  scanf("%d", &dia.ano);
  
  printf("Digite o horario do seu nascimento: ");
  scanf("%d", &dia.horario);

  imprimirData
}