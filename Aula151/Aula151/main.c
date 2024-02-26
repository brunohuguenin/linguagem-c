#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//  Aula 151: Criar um procedimento para converter string para maiúsculo ou minúsculo.

// procediemnto que converte uma string para MAIÚSCULO
void convertMaiusculo(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0') {
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

// procediemnto que converte uma string para MINÚSCULO
void convertMinusculo(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0') {
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main()
{
    char str1[] = "Ola. Bom dia.";
    char str2[50];

    convertMaiusculo(str1, str2);
    printf("String com o tamanho normal: %s\n\nString em maiusculo: %s\n", str1, str2);

    convertMinusculo(str1, str2);
    printf("String em minusculo: %s\n", str2);

    return 0;
}
