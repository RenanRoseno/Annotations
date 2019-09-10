#include <stdio.h>

/* QUESTÃO 1 
* 1. Fim da repetição será quando o usuário digitar um número inválido;
*
*
*/

int main(void) {
  
  char d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;

  int i, control = 1;

  while(control == 1)
  {
    printf("\nDigite a quantidade de digitos: ");
    scanf("%d", &i);

    switch (i)
    {
      case 1:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c", &d1);
        printf("\tNumero inverso : %c\n", d1);
        break;

      case 2:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c", &d1,&d2);
        printf("\tO numero inverso e: %c%c\n", d2,d1);
        break;

      case 3:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c", &d1,&d2,&d3);
        printf("\tO numero inverso e: %c%c%c\n", d3,d2,d1);
        break;

      case 4:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c%c", &d1,&d2,&d3,&d4);
        printf("\tO numero inverso e: %c%c%c%c\n", d4,d3,d2,d1);
        break;

      case 5:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5);
        printf("\tO numero inverso e: %c%c%c%c%c\n",d5,d4,d3,d2,d1);
        break;

      case 6:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6);
        printf("\tO numero inverso e: %c%c%c%c%c%c\n", d6,d5,d4,d3,d2,d1);
        break;

      case 7:
        printf("Digite o numero para ser convertido: ");  
        scanf("\n%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6, &d7);
        printf("\tO numero inverso e: %c%c%c%c%c%c%c\n", d7, d6,d5,d4,d3,d2,d1);
        break;

      case 8:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6, &d7, &d8);
        printf("\tO numero inverso e: %c%c%c%c%c%c%c%c\n", d8, d7, d6,d5,d4,d3,d2,d1);
        break;

      case 9:
        printf("Digite o numero para ser convertido: ");  
        scanf("\n%c%c%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6, &d7, &d8, &d9);
        printf("\tO numero inverso e: %c%c%c%c%c%c%c%c%c\n", d9, d8, d7, d6,d5,d4,d3,d2,d1);
        break;

      case 10:
        printf("Digite o numero para ser convertido: "); 
        scanf("\n%c%c%c%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6, &d7, &d8, &d9, &d10);
        printf("\tO numero inverso e: %c%c%c%c%c%c%c%c%c%c\n", d10, d9, d8, d7, d6,d5,d4,d3,d2,d1);
        break;

      default :
        return 1;
        control = 0;
        break;
      }
    }
  return 0;
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

/*----------------------------------------------------------------*/

#include <stdio.h>

/*----------------QUESTÃO 6 -----------------*/

int main(void)
{
	int n, n1;

	printf("Digite dois valores (SEPARADOS POR ESPACO): ");
	scanf("%d %d", &n, &n1);

	if(n < n1)
	{	

		do{
			printf(" %d |", n);
			n++;
		} while(n <= n1);	

	} 
	else if (n > n1)
	{

		do{
			printf(" %d |", n);
			n--;	
		} while(n >= n1);	

	} 
	else
		printf ("Os numeros sao iguais");

}
