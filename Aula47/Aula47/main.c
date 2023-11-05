#include <stdio.h>
#include <stdlib.h>

/*
    Aula 47
    Operador Lógico && - conjunção
*/

int main()
{
    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo, &idade);

    if (sexo == 'm') {
        if (idade == 18) {
            printf("Alistamento obrigatorio!\n");
        }
        else {
            if(idade > 18) {
                printf("Seu periodo para se alistar já passou.");
            }
            else {
                printf("Dispensado!");
            }
        }
    }

    if (sexo == 'f') {
        printf("Mulheres não são obrigadas a servir.");
    }

    return 0;
}
