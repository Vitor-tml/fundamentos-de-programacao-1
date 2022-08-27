#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int a, b, c, maxAB, maxMAXC, minAB, minMINC;

    printf("Entre com tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maxAB = (a + b + abs(a - b))/2;
    minAB = (a + b) - minAB;
    maxMAXC = (maxAB + c + abs(maxAB - c))/2;
    minMINC = (maxAB + c);
    printf("O maior eh: %d\n", maxMAXC);

    return 0;
}