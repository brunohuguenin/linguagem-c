#include <stdio.h>
#include <stdlib.h>

/*
    Faça um prgrama que leia as notas referentes às duas avaliações de um
    aluno. Calcule e imprima a média semestral. Faça com que o programa só
    aceite notas válidas (uma nota válida deve pertencer ao intervalo de 0 a 10).
    Cada nota deve ser validada separadamente.
*/

int main()
{
    float nota1, nota2, media;

    printf("Digite suas duas notas para saber a media do semestre: ");
    printf("\nNota da primeira avaliacao: ");
    scanf("%f", &nota1);

    while(nota1 < 0 || 10 < nota1) {
        printf("\nNota invalida!\nSua nota deve estar no intervalo de 0 a 10.");
        printf("\nNota da primeira avaliacao: ");
        scanf("%f", &nota1);
    }

    printf("\nNota da segunda avaliacao: ");
    scanf("%f", &nota2);

    while(nota2 < 0 || 10 < nota2) {
        printf("\nNota invalida!\nSua nota deve estar no intervalo de 0 a 10.");
        printf("\nNota da segunda avaliacao avaliacao: ");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2) / 2;

    printf("\n\nSua media neste semestre foi de %0.2f\n\n", media);

    return 0;
}
