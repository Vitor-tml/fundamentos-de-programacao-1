#include <stdio.h>

int main()
{
    int i1, i2, divis, rest;

    printf("Entre com dois numeros: ");
    scanf("%d %d", &i1, &i2);

    divis = i1/i2;
    rest = i1%i2;

    printf("A divisao e': %d\nO resto e': %d.", divis, rest);
    return 0;
}