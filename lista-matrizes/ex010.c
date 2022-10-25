#include <stdio.h>
#include <time.h>
#define NL 4
#define NC 3

void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
void imprimeMatriz(int matriz[][NC], int nl, int nc);
void imprimeMatrizTransposta(int matriz[][NC], int nl, int nc);

int main()
{
    srand(time(NULL));
    int matrix[NL][NC];

    preencheMatriz(matrix, NL, NC, 0, 10);

    imprimeMatriz(matrix, NL, NC);
    imprimeMatrizTransposta(matrix, NL, NC);

    return 0;
}

void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
}

void imprimeMatriz(int matriz[][NC], int nl, int nc)
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

void imprimeMatrizTransposta(int matriz[][NC], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nc; i++)
    {
        for(j = 0; j < nl; j++)
            printf("%2d ", matriz[j][i]);
        printf("\n");
    }
    printf("\n");
}