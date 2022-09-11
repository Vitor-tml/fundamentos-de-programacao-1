#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter with two numbers: ");
    scanf("%d %d", &x, &y);

    while( x < y)
    {
        x++;
        if(x % 2 == 0)
            printf("%d\n", x);
    }
    return 0;
}