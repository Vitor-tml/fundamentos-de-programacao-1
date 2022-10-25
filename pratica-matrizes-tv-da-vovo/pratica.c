#include <stdio.h>
#include <time.h>
#include <math.h>

#define NL 1000
#define NC 1000

void imprimeMatriz(int matriz[][NC], int nl, int nc);
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
void deslocaMatriz(int matriz[][NC], int nl, int nc, int x, int y);
void copiaMatriz(int a[][NC], int b[][NC], int nl, int nc);


int main()
{
    int matriz[NL][NC];
    int m, n, x, y;

    printf("Entre com M e N: ");
    scanf("%d %d", &m, &n);
    if( m < 0 || m > NL || n < 0 || n > NC)
    {
        printf("Entradas invalidas.\n");
        return 0;
    }
    preencheMatriz(matriz, m, n, 0, 10);
    printf("Matriz original: \n");
    imprimeMatriz(matriz, m, n);
    printf("Entre com o deslocamento: ");
    scanf("%d %d", &x, &y);

    if(x < 0 || x > NL || y < 0 || y > NL)
    {
        printf("Entrada invalida.");
        return 0;
    }

    while (!(x == 0 && y == 0))
    {
        deslocaMatrix(matriz, m, n, x, y);
        imprimeMatriz(matriz, m, n);
        printf("Entre com o deslocamento: ");

        scanf("%d %d", &x, &y);

        if(x < -NL || x > NL || y < -NL || y > NL)
        {
            printf("Entrada invalida.");

            return 0;
        }
    }

    return 0;
}
void deslocaMatrix(int matriz[][NC], int nl, int nc, int x, int y)
{
    int i, j;
    int dx, dy;
    dx = (x < 0)? -1: 1;
    dy = (y < 0)? -1: 1;

    for(i = 1; i <= abs(x); i++)
        deslocaMatriz(matriz, nl, nc, dx, 0);
    for(j = 1; j <= abs(y); j++)
        deslocaMatrix(matriz, nl, nc, dy, 1);
}
void deslocaMatriz(int matriz[][NC], int nl, int nc, int x, int y)
{
    int i, j, nx, ny;
    int copia[NC][NC];

    copiaMatriz(matriz, copia, nl, nc);

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {   
            ny = y + i;
            if(i + y > nl - 1)
                ny = nl - (y + i);
            if(i + y < 0)
                ny = nl - i + y;

            nx = x + j;
            if(j + x > nc - 1)
                nx = nc - (x + j);
            if(j + x < 0)
                nx = nc - j + x;

            matriz[ny][nx] = copia[i][j];
        }
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
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}
//-------------------------------------------------
void copiaMatriz(int a[][NC], int b[][NC], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            b[i][j] = a[i][j];
}