#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../funcoes-basicas.c"

int** alocaMatriz(int nl, int nc);
int* alocaVetor(int tam);
int custo_cidades(int *cidades, int n_cidades, int **m);

int main()
{
    int **m, *vet;
    int dimensao, tam, i, custo;
    srand(time(NULL));
    // Declaraçao, e manipulaçáo da matriz
    printf("Entre com a dimesao da matriz de custos: ");
    scanf("%d", &dimensao);
    m = alocaMatriz(dimensao, dimensao);
    leMatriz(m, dimensao, dimensao);
    //preencheMatriz(m, dimensao, dimensao, 0, 30);
    printf("Matriz de precos:\n");
    imprimeMatriz(m, dimensao, dimensao);

    // Declaração e manipulação do vetor.
    printf("Entre com o tamanho do itinerario: ");
    scanf("%d", &tam);
    vet = alocaVetor(tam);
    leVetor(vet, tam);
    //preencheVetor(vet, tam, 0, dimensao - 1);
    printf("Itinerario:\n");
    imprimeVetor(vet, tam);

    // Execução do programa em sí.
    custo = custo_cidades(vet, tam, m);
    printf("O custo total da viagem e': R$%d\n", custo);    

    // Desalocação de memória.
    for(i = 0; i < tam; i++)
        free(m[i]);
    free(m);
    free(vet);
    return 0;    
}
int custo_cidades(int *cidades, int n_cidades, int **m)
{
    int i, custo = 0;

    for(i = 0; i < n_cidades - 1; i++)
    {
        custo += m[cidades[i]][cidades[i+1]];
        //printf("Custo= %d Ate agora %d de %d a %d\n", m[cidades[i]][cidades[i+1]], custo, cidades[i], cidades[i+1]);
    }
    return custo;
}
int* alocaVetor(int tam)
{
    int *v;
    v = (int *) malloc(tam * sizeof(int));
    if(v == NULL)
    {
        printf("Erro na alocacao do vetor.\n");
        exit(1);
    }
    return v;
}
int** alocaMatriz(int nl, int nc)
{
    int i, **m;
    m = (int **) malloc(nl * sizeof(int *));
    if(m == NULL)
    {
        printf("Erro na alocacao da matriz,\n");
        exit(1);
    }
    for(i = 0; i < nl; i++)
    {
        m[i] = (int *) malloc(nc * sizeof(int *));
        if(m[i] == NULL)
        {
            printf("Erro na alocacao da linha %d.", i);
            exit(1);
        }
    }
    return m;
}