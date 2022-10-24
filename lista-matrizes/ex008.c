#include <stdio.h>
#define M 3
#define NL M
#define NC  M

void multiplicaMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc);
void imprimeMatriz(int matriz[][NC], int nl, int nc);
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);

int main()
{   
    int a[NL][NC];
    int b[NL][NC];
    int c[NL][NC];
    int n;
    int i;

    printf("Entre com n: ");
    scanf("%d", &n);

    preencheMatriz(a, NL, NC, 0, 10);
    preencheMatriz(b, NL, NC, 0, 10);

    printf("C = A * B:\n");
    multiplicaMatrizes(a, b, c, NL, NC);
    imprimeMatriz(c, NL, NC);

    printf("C = A^2:\n");
    multiplicaMatrizes(a, a, c, NL, NC);
    imprimeMatriz(c, NL, NC);

    printf("C = A^n:\n");
    for(i = 2; i < n; i++)
        multiplicaMatrizes(a, c, c, NL, NC);
    imprimeMatriz(c, NL, NC);

    return 0;
}
void multiplicaMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc)
{
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            c[i][j] = a[i][j] * b[i][j];
}
//-------------------------------------------------
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
}
//-------------------------------------------------
void imprimeMatriz(int matriz[][NC], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}
//-------------------------------------------------