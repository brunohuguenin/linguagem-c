#include <stdio.h>
#include <stdlib.h>

// Aula 153: Fun��es e procedimentos recursivos
// Ex.:  imprimir todos os n�meros de n at� 0

void imprimir(int x) {
    if (x == 0) {
        printf("%d ", x);
    } else {
        //printf("%d ", x);
        imprimir(x - 1);
        printf("%d ", x);
    }
}

int main()
{
    int n;

    printf("Digite um valormaior que zero: ");
    scanf("%d", &n);

    imprimir(n);
    return 0;
}
