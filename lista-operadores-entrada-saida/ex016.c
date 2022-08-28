#include <stdio.h>

int main()
{
    int numero, unidade;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    unidade = numero % (numero/10 * 10);

    printf("A unidade e`: %d", unidade);
    return 0;
}