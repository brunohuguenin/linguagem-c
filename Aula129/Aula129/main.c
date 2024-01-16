#include <stdio.h>
#include <stdlib.h>

/*
            Aula 129: O que é uma STRING?
    Lendo uma string com a função scanf()
    scanf("%80[^\n]", str);

*/

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    scanf("%50[^\n]", palavras);

    printf("%s\n\n", palavras);

    return 0;
}
