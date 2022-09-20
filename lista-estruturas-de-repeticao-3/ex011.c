#include <stdio.h>
 
int main()
{
    int k, n, i, j, primo, number = 0;

    printf("Entre com k e n: \n");
    scanf("%d %d", &k, &n);
    
    if(k < 0 || n < 0)
    {
        printf("Valores invalidos.\n");
        return 0;
    }

    j = k + 1;
    while (number < n)
    {
        primo = 1;
        for(i = 2; i < j; i++)
        {
            if(!(j%i))
            {
                primo = 0;
                break;
            }
        }
        if(primo)
        {
            number++;
            printf("%d ", j);
        }
        j++;
    }
    
    return 0;
}