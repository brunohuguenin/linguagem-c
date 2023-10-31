#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin); // na função getc(), é preciso dizer de onde sera feito
                         // a leitura
                         // neste caso, o "stadin" significa a entrada padrão
                         // do computador que é o TECLADO

    printf("Caracter lido: %c\n", letra);
    return 0;

}
