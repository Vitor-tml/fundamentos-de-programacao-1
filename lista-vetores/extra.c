#include <stdio.h>
#define TAM 10

void leElementosUnicos(int vetor[], int tamanho);

int main()
{
    int elementos[TAM];
    int i = 0, j;
    printf("Entre com %d numeros:\n", TAM);
    leElementosUnicos(elementos, TAM);
    return 0;
}
void leElementosUnicos(int vetor[], int tamanho)
{
    int i = 0, j;
    while(i < tamanho)
    {
        scanf("%d", &vetor[i]);
        for(j = 0; j < i; j++)
        {
            if(vetor[j] == vetor[i])
            {
                printf("O elemnento %d ja existe no vetor, entre com outro.\n", vetor[i]);
                break;
            }
        }
        if(i == j) i++;
    }
}