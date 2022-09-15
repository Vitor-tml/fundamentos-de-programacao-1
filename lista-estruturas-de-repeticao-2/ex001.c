#include <stdio.h>
 
int main()
{
    int number, higher;

    printf("Entre com um numero: ");
    scanf("%d", &number);

    higher = number;
    while (number >= 0)
    {
        if(higher < number)
            higher = number;
        printf("Entre com um numero: ");
        scanf("%d", &number);
    }
    printf("O maior numero e': %d\n", higher);
    return 0;
}