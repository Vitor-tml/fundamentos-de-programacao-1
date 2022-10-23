#include <stdio.h>
#define TAM 5

void imprimeVetor(int vetor[], int tamanho);
void imprimeVetorInvertido(int vetor[], int tamanho);


int main()
{
    int m[TAM] = {2, 4, 7, 1, 3};

    imprimeVetor(m, TAM);
    imprimeVetorInvertido(m, TAM);

    return 0;
}
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
void imprimeVetorInvertido(int vetor[], int tamanho)
{
    int i;

    for(i = (tamanho - 1); i >= 0; i--)
        printf("%d ", vetor[i]);
    printf("\n");
}
