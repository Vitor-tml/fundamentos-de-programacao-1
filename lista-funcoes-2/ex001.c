#include <stdio.h>

void questao01(int *a, int *b);
int main()
{
    int a, b;
    printf("%s", teste);
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
