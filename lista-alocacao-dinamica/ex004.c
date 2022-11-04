#include <stdio.h>
#include <stdlib.h>
#include "../funcoes-basicas.c"

int** alocaMatriz(int nl, int nc);

int main()
{
    int **m;
    m = alocaMatriz(2,2);
    preencheMatriz(m, 2, 2, 0, 4);
    imprimeMatriz(m, 2, 2);
}

int** alocaMatriz(int nl, int nc)
{
    int i, **m;

    for(i = 0; i < nl; i++)
        m[i] = (int *) malloc(nc * sizeof(int *));
    return m;
}