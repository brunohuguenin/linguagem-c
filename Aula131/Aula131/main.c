#include <stdio.h>
#include <stdlib.h>

//  Aula 131: Lendo uma string com a função fgets();

int main()
{
    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"}
    ;
    printf("Digite seu nome: ");
    //scanf("%20[^\n]", palavras);
    //gets(palavras);

    fgets(palavras, 50, stdin);

    printf("%s\n", palavras);
    return 0;
}
