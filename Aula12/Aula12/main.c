#include <stdio.h>
#include <stdlib.h>

/*
    Aula 12
    Ler dois caracteres
*/

int main()
{
    char a, b;
    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    // espaço entre os %c => comando para o computador desconsiderar
    // o ENTER, TAB e o ESPAÇO

    // não é recomendado utilizar a função 'fflush()' pois ela só funciona
    // no sistema operacional windows. Caso precise compilar o programa
    // no IOS ou LINUX, irá quebrar o programa
    printf("Primeira letra: %c\nSegunda letra: %c\n",a, b);

    return 0;

}
