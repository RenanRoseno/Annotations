#include <stdio.h>

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
/*----------------QUESTÃO 2 -----------------*/
#include <stdio.h>

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
/*----------------QUESTÃO 3 -----------------*/
#include <stdio.h>

int main(void)
{
  int n, verdadeiro;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
  	if( n == i * (i + 1) * (i + 2))
		{
			printf("O numero %d é triangular sendo os fatores: %d, %d, %d", n, i, i + 1, i + 2);
			verdadeiro = 1;
			break;
		}else
			verdadeiro = 0;
	}

	if(verdadeiro == 0)
		printf("O numero %d NÃO é triangular", n);

}
 
/*-------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

/*----------------QUESTÃO 4 -----------------*/

int main(void)
{
  int n, divisores = 2;


	printf("Digite um numero: ");
	scanf("%d", &n);

	for(int i = 2; i < n; i++){
		if (n % i == 0 ){
			divisores += 1;
		}
	}

printf (divisores == 2 ? "O numero %d eh primo" : "O numero %d NAO eh primo", n);

}

/*--------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

/*----------------QUESTÃO 5 -----------------*/

int main(void)
{

	for(int i = 1; i < 10; i++)
	{		
		for(int j = 1; j <= 10; j++)
		{
			printf("\t%d X %d = %d\n", i, j, i * j);	
		}
		printf("|--------------------|\n");
	}

}
