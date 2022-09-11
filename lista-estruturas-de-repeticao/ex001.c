#include <stdio.h>

int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 0; i <= 10; i++)
        printf("%2d x %2d = %3d\n", number, i, number * i);
    return 0;
}