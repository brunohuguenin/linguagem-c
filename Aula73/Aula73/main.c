#include <stdio.h>
#include <stdlib.h>

/*
    Aula 73
    Fa�a um programa que some os n�meros impares entre 1 e 1000 e
    imprima a resposta
    Restri��o:
        O bloco de repeti��o deve executar no m�ximo 500 vezes
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
