#include <stdio.h>

int main()
{
    int ano;
    printf("Entre com o ano: ");
    scanf("%d", &ano);
    
    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        printf("O ano e' bissexto.\n");
    else
        printf("O ano nao e' bissexto.\n");
    return 0;
}