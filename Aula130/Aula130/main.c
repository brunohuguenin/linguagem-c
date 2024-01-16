#include <stdio.h>
#include <stdlib.h>

//  Aula 130: Lendo uma string com a função gets();

int main()
{
    char palavras[20] = {"Oi. Vamos aprender a programar com a linguagem C?"}
    ;
    printf("Digite seu nome: ");
    //scanf("%20[^\n]", palavras);

    gets(palavras);

    printf("%s\n\n", palavras);
    return 0;
}
