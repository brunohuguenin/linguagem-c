#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  Aula 134: Como descobrir o tamanho de uma string com a função strlen()

int main()
{
    int tam;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"}
    ;
    printf("Digite seu nome: ");
    //scanf("%20[^\n]", palavras);
    //gets(palavras);
    fgets(palavras, 50, stdin);


    int i = 0;
    while (palavras[i] != '\0') {
        //printf("%d = %c\n", i, palavras[i]);
        i++;
    }


    printf("Tamanho: %d\n", strlen(palavras) - 1);

    return 0;
}
