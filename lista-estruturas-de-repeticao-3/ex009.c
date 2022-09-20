#include <stdio.h>

int main()
{
    int t, i, j, numero, primo, soma = 0;

    printf("Entre com t: ");
    scanf("%d", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%d", &numero);

        primo = 1;
        for(j = 2; j < numero; j++)
        {
            if(!(numero%j))
            {   
                primo = 0;
                break;
            }
        }
        if(primo)
        {
            soma += numero;
        }
    }
    printf("= %d\n", --soma);
}