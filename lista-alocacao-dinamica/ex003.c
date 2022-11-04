#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../funcoes-basicas.c"
#define TAM 20

int semRepeticao(int *origem, int **destino, int tam);

int main()
{
    srand(time(NULL));
    int vetorOrigem[TAM], *vetorDestino, tamDestino;
    printf("Vetor original: ");
    preencheVetor(vetorOrigem, TAM, 0, 10);
    imprimeVetor(vetorOrigem, TAM);
    tamDestino = semRepeticao(vetorOrigem, &vetorDestino, TAM);
    printf("Vetor final: ");
    imprimeVetor(&vetorDestino, tamDestino);
    free(vetorDestino);
    return 0;
}

int semRepeticao(int *origem, int **destino, int tam)
{   
    int i, j, k = 0, tamDestino = 0, repetido;

    *destino = (int *) malloc(tam * sizeof(int));

    for(i = 0; i < tam; i++)
    {
        repetido = 0;
        for(j = 0; j < i; j++)
            if(origem[i] == origem[j])
                repetido = 1;

        if(!repetido)
            destino[k++] = origem[i];
    }
    return k;
}