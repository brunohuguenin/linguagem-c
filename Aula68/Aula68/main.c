#include <stdio.h>
#include <stdlib.h>

/*
    Aula 67
    Estrutura de repeti��o -> do{} while() = enquanto
*/


int main()
{
   int valor;
   do {
        printf("Digite um valor entre 10 e 40: ");
        scanf("%d", &valor);
   } while(valor <= 0);



    return 0;
}
