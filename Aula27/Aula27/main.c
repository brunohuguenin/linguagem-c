#include <stdio.h>
#include <stdlib.h>
/*
    Aula 27
    Operador de incremento ++
*/

int main(){

    int contador = 10;

    // Outras formas de incremento
    //contador++;
    //contador +=;
    //contador = contador + 1/

    printf("Valor: %d\n", contador++);

    printf("Valor apos o incrento: %d\n", contador);

    return 0;
}
