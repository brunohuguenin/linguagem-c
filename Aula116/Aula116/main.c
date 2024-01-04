#include <stdio.h>
#include <stdlib.h>

/*
    Aula 116
    Fa�a um programa que leia 10 n�meros reais e os armazene em um vetor.
    Em seguida, leia um c�digo inteiro e fa�a uma das a��es abaixo:
    0- finalizar o programa
    1- imprimir o vetor na ordem do inicio ao fim;
    2- imprimir o vetor na ordem inversa (do fim para o come�o)
    O programa deve funcionar at� que o usu�rio digite 0 para finalizar.
*/

int main()
{
    int i, op;
    char mantem = 'n';
    float vetor[10];

    for(i=0;i<10;i++) {
                printf("Digite um valor na posicao %d: ", i);
                scanf("%f", &vetor[i]);
            }

    do {
            printf("\nEscolha uma das opcoes abaixo:\n0 - Finalizar o programa\n1 - Imprimir o vetor na ordem do inicio ao fim\n2 - Imprimir o vetor na ordem inversa (do fim para o come�o)\nOpcao: ");
            scanf("%d", &op);

            if(op == 1){
                for(i=0;i<10;i++)
                    printf("%.2f ", vetor[i]);
            }
            if(op == 2) {
                for(i=9;i>=0;i--)
                    printf("%.2f ", vetor[i]);
            }

            for(i=0;i<10;i++) {
                printf("\nDigite um valor na posicao %d: ", i);
                scanf("%f", &vetor[i]);
            }



    } while(op != 0 );

    printf("\nPrograma Finalizado.\n\n");
    return 0;
}
