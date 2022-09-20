#include <stdio.h>
#define LOWLIMITE 1
#define HIGHLIMITE 20

int mmc(int n1, int n2);

int main()
{
    int i, aux;


    aux = mmc(LOWLIMITE, LOWLIMITE+1);

    for(i = LOWLIMITE + 2; i < HIGHLIMITE; i++)
    {
        aux = mmc(aux, i);
    }
    printf("%d", aux);
        
    
}

int mmc(int n1, int n2)
{
    int mdc, a, b;
    a = n1;
    b = n2;
    do{
        mdc = a % b;

        a = b;
        b = mdc;
    }while (mdc != 0);

    return ((n1*n2)/a);
}