#include<stdio.h>

int num_pares = 0;
int main(void)
{
   int ni, nf, contador;
    printf("\nInforme um numero incial\n");
      scanf("%d", &ni);

    printf("\nInforme um numero final\n");
      scanf("%d", &nf);
  for (contador = ni; contador <= nf; contador++) {
    if(contador%2 == 0)  {
       printf("esse numero %d e par\n", contador);

num_pares++;

    } else {
      printf("esse numero %d e impar\n", contador);
    }
  }
	printf("A quantidade numeros pares e %d\n", num_pares);
    return(0);
}
