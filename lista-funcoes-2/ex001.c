/*
Implemente uma função em C que receba dois números inteiros a e b, em seguida, decremente o primeiro e incremente
o segundo. No exercício, a e b devem ser passados por referência. Depois teste, invocando a função criada.
Protótipo:
void questao01(int *a, int *b);
*/
#include <stdio.h>

void questao01(int *a, int *b);
int main()
{
    int a, b;

    printf("Entre com a e b: ");
    scanf("%d %d", &a, &b);

    questao01(&a, &b);

    printf(" a = %d b = %d\n", a, b);
    return 0;
}
void questao01(int *a, int *b)
{
    ++*a;
    --*b;
    return;
}