#include <stdio.h>
#include <stdlib.h>
#include "../funcoes-basicas.c"

int* criaVetor(int tam);
void multiplicaVetor(int *vetA, int *vetB, int *vetC, int tamA, int tamB);

int main()
{
    int *vet1, *vet2, *vetTotal;
    int m, n;
    
    printf("Entre com m e n: ");
    scanf("%d %d", &m, &n);

    vet1 = criaVetor(m);
    vet2 = criaVetor(n);
    vetTotal = criaVetor(m * n);

    imprimeVetor(vet1, m);
    imprimeVetor(vet2, n);
    multiplicaVetor(vet1, vet2, vetTotal, m, n);
    imprimeVetor(vetTotal, m * n);
}

int* criaVetor(int tam)
{
    int *vet;

    vet = (int*) malloc(tam * sizeof(int));
    if(vet == NULL)
    {
        printf("Erro ao alocar vetor.\n");
        exit(1);
    }
    preencheVetor(vet, tam, 0, 10);
    return vet;
}
void multiplicaVetor(int *vetA, int *vetB, int *vetC, int tamA, int tamB)
{
    int i, j, k = 0;

    for(i = 0; i < tamA; i++)
        for(j = 0; j < tamB; j++)
            vetC[k++] = vetB[i] * vetA[j];
}