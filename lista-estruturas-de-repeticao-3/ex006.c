#include <stdio.h>
 
int main()
{
    int quantidade, i, a, b, ordenada = 1, crescente = 0, decrescente = 0;
    printf("Entre com a quantidade de numeros: ");
    scanf("%d", &quantidade);

    scanf("%d", &a);

    for (i = 1; i < quantidade; i++)
    {
        scanf("%d", &b);
        if(a = b)
        {
            ordenada = 0;
            crescente = 0;
            decrescente = 0;
            break;
        }
        if(a < b)
            if(!decrescente)
                crescente = 1;
            else
                ordenada = 0;
        if(a > b)
            if(!crescente)
                decrescente = 1;
            else
                ordenada = 0;
    }
    if(!ordenada)
        printf("Desordenada\n");
    if(crescente)
        printf("Crescente\n");
    if(decrescente)
        printf("Decrescente\n");
    return 0;
}