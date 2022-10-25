#include <stdio.h>
#define NL 5
#define NC 5

void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
void imprimeMatriz(int matriz[][NC], int nl, int nc);

int main()
{
    int matriz[NL][NC];

    preencheMatriz(matriz, NL, NC, 0, 99);
    imprimeMatriz(matriz, NL, NC);
    return 0;
}

void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {
            matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
            while (repetido(matriz, NL, NC, i, j))
            {   
                matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
            }
            
        }
}

int repetido(int matriz[][NC], int nl, int nc, int linha, int coluna)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {
            if(i == linha && j == coluna)
                return 0;
            if(matriz[i][j] ==  matriz[linha][coluna])
                return 1;
        }
    return 0;
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