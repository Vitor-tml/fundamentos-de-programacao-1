#include <stdio.h>
 
int main()
{
    int number, i, j;
    printf("Entre com um numero: ");
    scanf("%d", &number);
    
    printf("x  ");
    for(i = 1; i <= number; i++)
        printf("%d ", i);
    printf("\n");

    printf("   ");
    for(i = 1; i <= number; i++)
        printf("__", i);
    printf("\n");

    for(i = 1; i <= number; i++)
    {   
        printf("%d |", i);
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}