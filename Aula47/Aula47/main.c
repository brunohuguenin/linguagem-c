#include <stdio.h>
#include <stdlib.h>

/*
    Aula 47
    Operador L�gico && - conjun��o
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
                printf("Seu periodo para se alistar j� passou.");
            }
            else {
                printf("Dispensado!");
            }
        }
    }

    if (sexo == 'f') {
        printf("Mulheres n�o s�o obrigadas a servir.");
    }

    return 0;
}
