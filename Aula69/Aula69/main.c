#include <stdio.h>
#include <stdlib.h>

/*
    Aula 69
    Diferença entre for(), while() e do{}while()
*/

int main()
{
  /*
  int valor = 0;

  printf("Gerado com for()\n");
  for(valor = 0; valor <=15; valor++)
    printf("%d ", valor);


    valor = 0;
    printf("\n\nGerado com while()\n");
    while(valor <= 15) {
        printf("%d ", valor);
        valor++;
    }
    */

    int valor = 0;
    printf("Gerado com do{}while()\n");

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }while(valor <= 0);
    // FAÇA ENQUANTO


    printf("\n\nValor lido: %d\n\n", valor);
    return 0;
}
