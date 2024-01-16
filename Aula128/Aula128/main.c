#include <stdio.h>
#include <stdlib.h>

// Aula 128: O que é uma STRING?

// O termo "string" serve para utilizar uma sequência de caracteres
// Uma string em C é um vetor

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    // printf("%c", palavras[0]); -> Usando o %c, estará imprimindo o caractere do índice específicado dentro dos colchetes

    printf("%s\n\n", palavras); // Usando o %s, estará imprimindo todo o conteúdo do vetor

    return 0;
}
