#include <stdio.h>
#include <stdlib.h>
#include "../funcoes-basicas.c"

void criaVetorPorReferencia(int **vet, int tam, int lim);
int* criaVetor(int tam, int lim);
int* expandeVetor(int *v, int tam, int n, int lim);
int main()
{
    int *vetor;
    int tamanho = 10;
    int limite = 10;
    
    criaVetorPorReferencia(&vetor, tamanho, limite);
    imprimeVetor(vetor, tamanho);
    expandeVetor(vetor, TAM, n, limite);
    free(vetor);
    return 0;
}

int* criaVetor(int tam, int lim)
{
    int *vet;
    vet = (int*) malloc(tam * sizeof(int));
    if(vet == NULL)
    {
        printf("Erro na alocacao,\n");
        exit(1);
    }
    preencheVetor(vet, tam, -lim, lim);
    return vet;
}

void  criaVetorPorReferencia(int **vet, int tam, int lim)
{
    *vet = (int*) malloc(tam * sizeof(int));
    if(*vet == NULL)
    {
        printf("Erro na alocacao,\n");
        exit(1);
    }
    preencheVetor(*vet, tam, -lim, lim);
}

int* expandeVetor(int *v, int tam, int n, int lim)
{
    int i;
    int *vet;

    criaVetorPorReferencia(&vet, n, lim);

    v = (int *) realloc(v, sizeof(int) * (tam + n));
    for(i = 0; i < n; i ++)
        v[tam + i] = vet[i];
    free(vet);
    return v;
}

