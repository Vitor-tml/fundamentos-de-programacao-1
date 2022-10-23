#include <stdio.h>
#include <time.h>
#define N 10

void preencheVetor(int vetor[], int tamanho);
void imprimeVetor(int vetor[], int tamanho);
void somaVetores(int a[], int b[], int soma[]);

int main()
{
    srand(time(NULL));
    int vetorA[N], vetorB[N], soma[N];

    preencheVetor(vetorA, N);
    preencheVetor(vetorB, N);

    imprimeVetor(vetorA, N);
    imprimeVetor(vetorB, N);

    somaVetores(vetorA, vetorA, soma);
    imprimeVetor(soma, N);

    return 0;
}

void preencheVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        vetor[i] = rand()%10;

}

void somaVetores(int a[], int b[], int soma[])
{
    int i, j;

    for (i = 0; i < N; i++)
        for(j = N - 1; j >= 0; j--)
            soma[i] = a[i] + b[j];
}
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%2d ", vetor[i]);
    printf("\n");
}