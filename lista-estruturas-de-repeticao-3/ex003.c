#include <stdio.h>
 
int main()
{
    int x, y, i, j;
    printf("Entre com um numero: ");
    scanf("%d", &x);

    for(i = -x; i <= x; i++)
    {
        y = i * i + i + 1;
        printf("%2d |", i);
        for(j = 0; j < y; j++)
        {
            printf(" ");
        }
        printf("x\n");
    }
    return 0;
}