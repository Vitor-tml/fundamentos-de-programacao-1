#include <stdio.h>
 
int main()
{
    int quantidade, i, a, b, ordenada = 1;
    printf("Entre com a quantidade de numeros: ");
    scanf("%d", &quantidade);

    scanf("%d", &a);

    for (i = 1; i < quantidade; i++)
    {
        scanf("%d", &b);
        if(a >= b)
            ordenada = 0;
    }
    if(ordenada)
        printf("A lista esta' ordenada\n");
    else
        printf("A lista esta' desordenada\n");
    
    return 0;
}