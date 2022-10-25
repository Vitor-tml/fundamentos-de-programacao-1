#include <stdio.h>
#define TAM 10
int main()
{
    int elementos[TAM];
    int i = 0, j;
    printf("Entre com %d numeros:\n", TAM);
    while(i < TAM)
    {
        scanf("%d", &elementos[i]);
        for(j = 0; j < i; j++)
        {
            if(elementos[j] == elementos[i])
            {
                printf("O elemnento %d ja existe no vetor, entre com outro.\n", elementos[i]);
                break;
            }
        }
        if(i == j) i++;
    }
    return 0;
}