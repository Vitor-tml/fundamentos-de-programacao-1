#include <stdio.h>
#include <time.h>
#define N 10

void preencheVetor(int vetor[], int tamanho, int lim);
void imprimeVetor(int vetor[], int tamanho);

int main()
{
    srand(time(NULL));
    int vetor[N];

    preencheVetor(vetor, N, 100);
    imprimeVetor(vetor, N);
    return 0;
}
void preencheVetor(int vetor[], int tamanho, int lim)
{
    int i;

    for(i = 0; i < tamanho; i++)
        vetor[i] = rand()%(lim+1);

}
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}