/*
Um número é dito regular se sua decomposição em fatores primos apresenta apenas potências de 2, 3 e 5. Faça uma
função que retorne 1 se um número é regular ou 0, caso contrário.
*/
#include <stdio.h>
 
int regular(int numero);
int main()
{
    int n = 13;

    printf("%d\n", regular(n));

    return 0;
}

int regular(int numero)
{
    int i = 2, j;
    int primo;

    while(numero != 1)
    {
        
        for(i = 2; i < numero; i++)
        {
            primo = 1;
            for(j = 2; j < i; j++)
                if(i%j)
                    primo = 0;
            
            if(primo && !(numero % i))
                break;
        }
        if(!(numero % i) && i != 2 && i != 3 && i != 5)
        {
            printf("%d %% %d\n", numero, i);
            return 0;
        }
        else
            numero /= i;
    }
    return 1;
}