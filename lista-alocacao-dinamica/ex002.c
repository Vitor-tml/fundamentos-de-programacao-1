#include <stdio.h>
#include <stdlib.h>
#include "../funcoes-basicas.c"

int* alocaVetor(int tam);
void multiplicaVetores(int* a, int* b, int* c, int ta, int tb);

int main()
{
    int tamVet1, tamVet2;
    int vet1, vet2, vetTotal;
    printf("Entre com o tamanho do primeiro e do segundo vetor. ");
    scanf("%d %d", &tamVet1, &tamVet2);

    vet1 = alocaVetor(tamVet1);
    vet2 = alocaVetor(tamVet2);
    vetTotal = alocaVetor(tamVet1 * tamVet2);
    imprimeVetor(&vet1, tamVet1);
    imprimeVetor(&vet2, tamVet2);
    multiplicaVetores(vet1, vet2, vetTotal, tamVet1, tamVet2);
    imprimeVetor(&vetTotal, tamVet1 * tamVet2);

    return 0;
}

int* alocaVetor(int tam)
{
    int *vet;
    vet = (int *) malloc(tam * sizeof(int));
    if(vet == NULL)
    {
        printf("Erro na alocacao do vetor.\n");
        exit(1);
    }
    preencheVetor(vet, tam, 0, 10);
    return vet;
}

void multiplicaVetores(int* a, int* b, int* c, int ta, int tb)
{
    int i, j, k = 0;

    for(i = 0; i < ta; i++)
        for(j = 0; j < tb; j++)
            c[k++] = a[i] * b[j];
}