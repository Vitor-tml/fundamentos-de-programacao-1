#include <stdio.h>
#include <time.h>
#define N 10

void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh);
void imprimeVetor(int vetor[], int tamanho);

int main()
{
    srand(time(NULL));
    int vetor[N];

    preencheVetor(vetor, N, 30, 100);
    imprimeVetor(vetor, N);
    return 0;
}
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh)
{
    int i;

    for(i = 0; i < tamanho; i++)
        vetor[i] = limLow + rand()%(limHigh - limLow + 1);

}
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}