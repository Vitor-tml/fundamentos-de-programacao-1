#include <stdio.h>
 
int main()
{
    int n1, n2, i, j, mmc = 1, primo;
    //int mdc = 1;
    
    printf("Entre com dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 < n2)
    {
        primo = n1;
        n1 = n2;
        n2 = primo;
    }

    while(n1 != 1 || n2 != 1)
    {
        for(i = 2; i <= n1; i++)
        {
            primo = 1;
            for(j = 2; j < i; j++)
            {
                if(!(i%j))
                {
                    primo = 0;
                    break;
                }
            }

            if(primo && !((n1%i) && (n2%i)))
            {
                mmc *= i;
                break;
            }
        }

        if(!(n1%i) && !(n2%i))
        {
            printf("%2d %2d | %d\n", n1, n2, i);

            //mmc *= i; // para transformar em mdc descomentar essa linha
            n1 /= i;
            n2 /= i;
        }
        else
            if (!(n1%j))
            {
                printf("%2d %2d | %d\n", n1, n2, i);
                n1 /= i;
            }
            else
            {
                printf("%2d %2d | %d\n", n1, n2, i);
                n2 /= i;
            }     
    }
    printf("%2d %2d |   => %d \n", n1, n2, mmc);
}