#include <stdio.h>
#include <stdlib.h>

/*
    Aula 07
    Lendo caracteres
    função getchar();
*/
int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Caracter lido: %c\n", letra);

    return 0;
}
