#include <stdio.h>
#include <stdlib.h>

// Aula 128: O que � uma STRING?

// O termo "string" serve para utilizar uma sequ�ncia de caracteres
// Uma string em C � um vetor

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    // printf("%c", palavras[0]); -> Usando o %c, estar� imprimindo o caractere do �ndice espec�ficado dentro dos colchetes

    printf("%s\n\n", palavras); // Usando o %s, estar� imprimindo todo o conte�do do vetor

    return 0;
}
