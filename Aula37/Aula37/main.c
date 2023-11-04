#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, hora, min, seg, resto;

    printf("Digite um valor que sera convertido: ");
    scanf("%d", &tempo);

    hora = tempo / 3600;
    resto = tempo % 3600;
    min = resto / 60;
    seg = resto % 60;

    printf("\n\nValor convertido em horas e igual a %d:%d:%d\n\n", hora, min, seg);


    return 0;
}
