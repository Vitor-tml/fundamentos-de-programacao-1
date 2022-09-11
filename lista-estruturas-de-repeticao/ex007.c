#include <stdio.h>
 
int main()
{
    int a = 1, b = 1, c = 1, n, i;
    printf("Enter with number of menbers: ");
    scanf("%d", &n);

    printf("1 ");
    for(i = 1; i < n; i++)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}