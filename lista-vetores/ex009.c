#include <stdio.h>
#define TAM 5 

void intercalaVetores(int v1[], int v2[], int v3[], int n);
void imprimeVetor(int vetor[], int tamanho);
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh);

int main()
{
    int vetorA[TAM];
    int vetorB[TAM];
    int vetorC[TAM * 2];

    preencheVetor(vetorA, TAM, 0, 10);
    imprimeVetor(vetorA, TAM);
    preencheVetor(vetorB, TAM, 0, 10);
    imprimeVetor(vetorB, TAM);

    intercalaVetores(vetorA, vetorB, vetorC, TAM);
    imprimeVetor(vetorC, TAM*2);

    return 0;
}

void intercalaVetores(int v1[], int v2[], int v3[], int n)
{
    int i, j = 0;

    for(i = 0; i < n; i++)
    {
        v3[j] = v1[i];
        j++;
        v3[j]= v2[i];
        j++;
    }
}

//-------------------------------------------------
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
//-------------------------------------------------
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh)
{
    int i;
    for(i = 0; i < tamanho; i++)
        vetor[i] = limLow + rand()%(limHigh - limLow + 1);

}
//-------------------------------------------------