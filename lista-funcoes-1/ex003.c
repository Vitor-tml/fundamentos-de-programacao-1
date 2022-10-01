/*
Escreva uma função que recebe um caractere e retorna 1 se o caractere for uma letra maiúscula, 2 se for uma letra
minúscula, 3 se for um dígito e 0 do contrário. Protótipo: int testaTipoChar (char c)
*/
#include <stdio.h>

int testaTipoChar(char c) ;
int main()
{
    char ctr;
    printf("Entre com o caractere: ");
    scanf("%c", &ctr);

    printf("%d\n", testaTipoChar(ctr));

    return 0;
}

int testaTipoChar(char c)
{
    if(c >= 65 && c <= 90)
        return 1;
    if(c >= 97 && c <= 122)
        return 2;
    if(c >= 48 && c <= 57)
        return 3;
    return 0;
}