#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um rpograma que repita a leitura de uma senha at� que ela seja v�lidada.
    Para cada leitura de senha incorreta, escrever a mensagem "Senha Inv�lida".
    Quando a senha for informada corretamente, deve ser impressa a mensagem
    "Acesso Permitido" e o programa deve ser encerrado.
    Considere que a senha correta � o valor 123456.
*/

int main()
{
    int senha;

    printf("Digite a senha de acesso: ");
    scanf("%d", &senha);

    while(senha != 123456) {
        printf("Senha Invalida!");
        printf("\nDigite a senha de acesso novamente: ");
        scanf("%d", &senha);
    }

    printf("\nAcesso Permitido\n\n");

    return 0;
}
