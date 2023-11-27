#include <stdio.h>
#include <stdlib.h>

/*
    Aula 73
    Faça um programa que some os números impares entre 1 e 1000 e
    imprima a resposta
    Restrição:
        O bloco de repetição deve executar no máximo 500 vezes
*/

int main()
{
    int impa, resultado = 0;

    for(impa = 1; impa <= 1000; impa+=2) {
        resultado += impa;

        printf("%3d", impa);

    }


    printf("\n\nA soma dos numeros impares entre 1 e 1000 e igual a: %d \n\n", resultado);

    return 0;
}
