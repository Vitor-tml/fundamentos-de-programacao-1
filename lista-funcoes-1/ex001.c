/*
Escreva uma função que recebe como parâmetro um inteiro positivo e retorna 1 se ele representar um ano bissexto ou
0 caso contrário. Um ano é bissexto se ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0). Protótipo:
int ehBissexto(int ano);
*/
#include <stdio.h>
 
int ehBissexto(int ano);

int main()
{
    int ano;
    printf("Entre com um ano: ");
    scanf("%d", & ano);
    
    if(ehBissexto(ano))
        printf("E' bissexto\n");
    else
        printf("Nao e' bissexto");
    return 0;
}
int ehBissexto(int ano)
{
    return (!(ano % 4) && (ano % 100 || !(ano % 100)));
}