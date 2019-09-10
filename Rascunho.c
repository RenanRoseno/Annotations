#include <stdio.h>
#include <math.h>

int main(void)
{
int i;
int numero, numeroV[5];

printf("Digite um numero: ");
scanf("%d", &numero);

for(i=0; numero; i++)
 {  
  numeroV[i] = numero % 10;
  numero /= 10;

  printf("Vetor: %d e numero: %d\n ", numeroV[i], numero);
 }

 printf("Numero: %d\n", numero);

for(int j=0; j<i; j++)
  { 
  numero += numeroV[j] * pow(10, (i-j-1)); 
  printf("Numero: %d \n", numero);
  }

printf("Numero invertido eh: %d", numero);

}

/*----------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------QUESTÃO 2 -----------------*/

int main(void)
{
  int n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
  	printf(" %d |", i);
	}
}

/*---------------------------------------------------------------------------------------------------------------*/
