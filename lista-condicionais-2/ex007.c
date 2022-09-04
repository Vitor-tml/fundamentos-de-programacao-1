#include <stdio.h>
#define FRANQUIA 7
#define FAIXAA 1
#define FAIXAB 2
#define FAIXAC 5

int main ()
{
    int consumo, preco1 = 0, preco2 = 0, preco5 = 0, total;

    printf("Entre com o consumo: ");
    scanf("%d", &consumo);

    if(consumo > 100)
    {
        preco5 = (consumo - 100) * FAIXAC;
        consumo = consumo - (consumo - 100);
    }
    if(consumo > 30)
    {
        preco2 = (consumo - 30) * FAIXAB;
        consumo =  consumo - (consumo - 30);
    }
    if(consumo > 10)
    {
        preco1 = (consumo - 10) * FAIXAA;
    }

    total = preco1 + preco2 + preco5 + FRANQUIA;

    printf("R$%d\n", total);

    return 0;
}