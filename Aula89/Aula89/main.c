#include <stdio.h>
#include <stdlib.h>


/*
    Aula 89
    Escreva um programa para ler as cordenadas (X, Y) de uma quantidade indeterminada
    de pontos no sistema cartesiano. Para cada ponto, escrever os quadrantes a que eles
    pertencem. O algoritmo será encerrado quando pelo menos uma das coordenadas for NULA
    (nesta situação, sem escrever mensagem alguma).
*/

int main()
{
    int coordenadaX, coordenadaY;

    do {
            printf("Digite a coordenada do eixo X: ");
            scanf("%d", &coordenadaX);
            printf("Digite a coordenada do eixo Y: ");
            scanf("%d", &coordenadaY);

            if(0 < coordenadaX && coordenadaY > 0)
                printf("O ponto (%d,%d) pertence ao PRIMEIRO QUADRANTE.", coordenadaX, coordenadaY);
            else if(0 > coordenadaX && coordenadaY > 0)
                printf("O ponto (%d,%d) pertence ao SEGUNDO QUADRANTE.", coordenadaX, coordenadaY);
            else if(0 > coordenadaX && coordenadaY < 0)
                printf("O ponto (%d,%d) pertence ao TERCEIRO QUADRANTE.", coordenadaX, coordenadaY);
            else if(0 < coordenadaX && coordenadaY < 0)
                printf("O ponto (%d,%d) pertence ao QUARTO QUADRANTE.", coordenadaX, coordenadaY);

            printf("\n\n");
    } while(coordenadaX != 0 || coordenadaY != 0);
    printf("\n\n");
    return 0;
}
