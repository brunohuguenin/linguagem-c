#include <stdio.h>
#include <stdlib.h>


/*
    Aula 91
    Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer
    pre�o. O monge, necessitando de alimentos, indagou a rainha sobre o pagamento, se
    poderia ser feito com gr�os de trigo dispostos em um tabuleiro de xadrez
    (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas
    um gr�o e os quadros subsequentes, o dobro do quadro anterior. Crie um programa
    para calcular o total de gr�os de trigo que o monge recebeu.

    64 vezes -> 1 2 4 8 16 32 64 128...

    long long int trocar o %d para %lld ou %lli

    tipo double exige apenas um long -> long double troca o %d para Lf -> o windows nao suporta
    a impressao de um valor long double e por isso, deve se utilizar a fun��o abaixo:

    __mingw_printf();
*/

int main()
{

    int i;
    long double grao = 1;

    for(i = 0; i <= 63; i++) {
        grao = grao * 2;
    }

    __mingw_printf("Valor total de gr�os : %Lf", grao);

    return 0;
}
