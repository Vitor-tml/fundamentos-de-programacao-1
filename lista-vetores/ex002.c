#include <stdio.h>
#include <time.h>
#define N 10

void preencheVetor(int vetor[]);
void removeElemento(int vetor[], int elemento);

int main()
{
    srand(time(NULL));
    int vetor[N];

    preencheVetor(vetor);
    imprimeVetor(vetor, N);
    removeElemento(vetor, 2);
    imprimeVetor(vetor, N - 1);

    return 0;
}

void preencheVetor(int vetor[])
{
    int i;

    for(i = 0; i < N; i++)
        vetor[i] = rand()%101;

}
void removeElemento(int vetor[], int elemento)
{
    int i;

    for(i = elemento; i < (N - 1); i++)
        vetor[i] = vetor[i+1];
}
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}