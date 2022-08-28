#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int a, b, c, minAB, minMINC;

    printf("Entre com tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    minAB = (a + b - abs(a - b))/2;
    minMINC = (minAB + c - abs(minAB - c))/2;
    printf("O menor eh: %d\n", minMINC);

    return 0;
}