#include <stdio.h>

int main()
{
    float distancia, gasto;
    int pedagios;

    printf("Entre com a distancia e a quantidae de pedagios: ");
    scanf("%f %d", &distancia, &pedagios);

    gasto = (distancia/15) * 5.6 + pedagios * 8;

    printf("O valor gasto foi R$%.2f", gasto);
    return 0;
}