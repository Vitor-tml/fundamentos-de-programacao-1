#include <time.h>
void imprimeVetor(int *vetor, int tamanho);
void preencheVetor(int *vetor, int tamanho, int limLow, int limHigh);
void leVetor(int *vetor, int tamanho);

void imprimeMatriz(int **matriz, int nl, int nc);
void preencheMatriz(int **matriz, int nl, int nc, int limLow, int limHigh);
void leMatriz(int **matriz, int nl, int nc);

//-------------------------------------------------
void imprimeVetor(int *vetor, int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
//-------------------------------------------------
void preencheVetor(int *vetor, int tamanho, int limLow, int limHigh)
{
    int i;
    srand(time(NULL));
    for(i = 0; i < tamanho; i++)
        vetor[i] = limLow + rand()%(limHigh - limLow + 1);

}
//-------------------------------------------------
void leVetor(int *vetor, int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        {
            printf("(%d)= ", i);
            scanf("%d", &vetor[i]);
        }
}
//-------------------------------------------------
void preencheMatriz(int **matriz, int nl, int nc, int limLow, int limHigh)
{
    int i, j;
    srand(time(NULL));
    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
}
//-------------------------------------------------
void imprimeMatriz(int **matriz, int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}
//-------------------------------------------------
void leMatriz(int **matriz, int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {
            printf("(%d,%d) = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

}
//-------------------------------------------------