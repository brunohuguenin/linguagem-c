#include <stdio.h>
#include <stdlib.h>

/*
    Aula 72
    Fa�a um programa que some os n�meros impares entre 1 e 1000 e
    imprima a resposta
*/

int main()
{
    int impa, resultado = 0;

    for(impa = 1; impa <= 1000; impa++) {
        if(impa % 2 == 1) {
            resultado += impa;
        }

    }


    printf("A soma dos numeros impares entre 1 e 1000 e igual a: %d", resultado);

    return 0;
}
