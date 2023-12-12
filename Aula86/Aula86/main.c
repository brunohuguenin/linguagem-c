#include <stdio.h>
#include <stdlib.h>

/*
    Aula 86
    Fa�a um programa para encontrar o menor n�mero inteiro que
    seja divis�vel por todos os n�meros inteiros entre
    1 e 10.
*/

int main()
{
    int i, divisores, valor = 9;

    do{
        divisores = 0;
        valor++;
        for(i = 1; i <= 10; i++){
            if(valor % i ==- 0)
                divisores++;
        }
    } while(divisores !=10);

    printf("Valor: %d\n\n", valor);


    return 0;
}
