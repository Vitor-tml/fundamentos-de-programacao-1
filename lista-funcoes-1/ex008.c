/*
Faça uma função tipo void que, dado um inteiro positivo n como entrada, mostra todos os valores a, b e c tal que
a+b+c = n
*/
#include <stdio.h>

void determinaValores(int n);
int main()
{
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    determinaValores(numero);
    return 0;
}

void determinaValores(int n)
{
    int i, j, k;

    for(i = 0; i <= n; i++)
        for(j = 0; j <= n; j++)
            for(k = 0; k <= n; k++)
            {
                if((i + j + k) == n && i && j && k)
                    printf("%d + %d + %d = %d\n", i, j, k, n);
            }
    return;
}