#include <stdio.h>
#include <stdlib.h>

/*
    Aula 81
    Para uma turma de 45 alunos, construa um algoritmo que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média ddos alunos com mais de 20 anos;
*/

int main()
{
   int i, idade, idadeMenos170 = 0, quantidadeMenos170 = 0, quantidadeAlturaMais20 = 0;
   float idadeMedia, alturaMedia, altura, alturaMais20 = 0;

    for(i = 1; i <= 4; i++){
        printf("Digite sua idade e sua altura em metros: ");
        scanf("%d%f", &idade, &altura);


        // letra a
        if(altura < 1.7) {
            idadeMenos170 += idade;
            quantidadeMenos170++;
        }

        // letra b
        if(idade > 20) {
            alturaMais20 += altura;
            quantidadeAlturaMais20++;
        }
    }

    idadeMedia = (float)idadeMenos170 / quantidadeMenos170;
    alturaMedia = alturaMais20 / quantidadeAlturaMais20;

    printf("\nA idade media dos alunos com menos de 1,70m de altura e igual a : %0.2f", idadeMedia);
    printf("\nA altura media ddos alunos com mais de 20 anos e igual a: %0.2f\n\n", alturaMedia);

    return 0;
}
