#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin); // na fun��o getc(), � preciso dizer de onde sera feito
                         // a leitura
                         // neste caso, o "stadin" significa a entrada padr�o
                         // do computador que � o TECLADO

    printf("Caracter lido: %c\n", letra);
    return 0;

}
