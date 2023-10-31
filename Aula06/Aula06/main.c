#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo = 'k';
    printf("Valor da variavel sexo: %c", sexo);

    printf("Digite seu sexo: (M,m /F/f)");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);
    return 0;
}
