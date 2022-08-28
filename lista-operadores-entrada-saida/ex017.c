#include <stdio.h>

int main()
{
    float C, F;

    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &C);
    F = (C * 9)/5 + 32;
    printf("A temperatura em Farenheit e': %.2f", F);
    return 0;
}