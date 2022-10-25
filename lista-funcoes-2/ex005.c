/**
Implemente um programa em C que utilize esta função (void removeExtremos(int *n, int *pri, int *ult)) para determinar se um determinado inteiro positivo n é
palíndromo. Suponha que n não contém o dígito 0. Atenção: você não deve modificar a função dada no enunciado!
Apenas invocá-la de forma adequada.
**/
#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult);
int palindromo(int n);

int main()
{
    int n;
    printf("Entre com n: ");
    scanf("%d", &n);

    if(palindromo(n))
        printf("Eh palindromo.");
    else
        printf("Nao eh palindromo.");

    return 0;
}
int palindromo(int n)
{
    int primeiro, ultimo;

    while(n > 10)
    {
        removeExtremos(&n, &primeiro, &ultimo);
        if(primeiro != ultimo)
            return 0;
    }
    return 1;
}
void removeExtremos(int *n, int *pri, int *ult)
{
    int tn, pot;
    *ult = *n % 10;
    pot = 1;
    tn = *n;
    while (tn >= 10)
    {
        tn = tn / 10;
        pot *= 10;
    }
    *pri = *n / pot;
    *n = *n % pot;
    *n = *n / 10;
}
