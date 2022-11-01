#include <stdio.h>
#include <stdlib.h>
#include "../funcoes-basicas.c"

void criaVetor(int **vet, int tam, int lim);
int* expandeVetor(int *v, int tam, int n, int lim);
int main()
{
    int *vetor;

    criaVetor(&vetor, 10, 10);
    imprimeVetor(vetor, 10);

    vetor = expandeVetor(vetor, 10, 5, 10);
    imprimeVetor(vetor, 15);

    free(vetor);
    return 0;
}
void criaVetor(int **vet, int tam, int lim)
{
    *vet = (int *) malloc(tam * sizeof(int));
    preencheVetor(vet, tam, 0, lim);
}

int* expandeVetor(int *v, int tam, int n, int lim)
{
    int i;
    int *vet;

    criaVetor(&vet, n, lim);

    v = (int *) realloc(v, sizeof(int) * (tam + n));
    for(i = 0; i < n; i ++)
        v[tam + i] = vet[i];
    free(vet);
    return v;
}

