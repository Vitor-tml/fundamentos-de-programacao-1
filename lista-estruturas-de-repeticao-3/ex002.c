#include <stdio.h>
 
int main()
{
    int m, i, j, impar = 1;
    printf("Entre com um numero: ");
    scanf("%d", &m);

    for(i = 1; i <= m; i++)
    {
        printf("%d%c = ", i, 252);
        j = 1;
        while(j <= i)
        {
            if(!(impar%2))
            {
                impar++;
                continue;    
            }
            printf("%d", impar++);
            if(j != i)
                printf(" + ");
            j++;
        }
        printf("\n");
    }
    return 0;
}

// 253