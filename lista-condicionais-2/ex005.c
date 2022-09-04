#include <stdio.h>

int main()
{
    float A, G, Ra, Rg;

    printf("Entre com o preco do alcool e da gasolina: ");
    scanf("%f %f", &A, &G);
    printf("Entre com o rendimento do carro no alcool e com o rendimento do carro na gasolina: ");
    scanft("%f %f", &Ra, &Rg);

    Ra = Ra / A;
    Rg = Rg / G;

    if(Ra > Rg)
        printf("A");
    else
        printf("G");
    return 0;
}