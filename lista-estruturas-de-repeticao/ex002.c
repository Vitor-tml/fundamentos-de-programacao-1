#include <stdio.h>

int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= 100; i++)
    {
        if(i % number == 2)
            printf("%d\n", i);
    }
    return 0;
}