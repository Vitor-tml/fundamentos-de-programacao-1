#include <stdio.h>
 
int main()
{
    int i, j, m, n;

    printf("Enter of two numbers: ");
    scanf("%d %d", &m, &n);

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%2d ", i*j);
        }
        printf("\n");
    } 
    return 0;
}