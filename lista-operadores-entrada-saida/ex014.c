#include <stdio.h>

int main()
{
    int valor, onca, garca, beija_fro, resto;

    printf("Entre com a bufunfa: ");
    scanf("%d", &valor);

    onca = valor / 50;
    resto = valor % 50;
    garca = resto / 5;
    resto = resto % 5;
    beija_fro = resto;

    printf("R$%d = %d cedulas de 50, %d cedulas de 5 e %d cedulas de 1.", valor, onca, garca, beija_fro);
    return 0;
}