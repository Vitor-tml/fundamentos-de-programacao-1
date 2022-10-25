#include <stdio.h>
#define N 3
#define NL N
#define NC N

int nulosLinha(int matrix[][NC], int linha, int nc);
int nulosColuna(int matrix[][NC], int nl, int coluna);
int igualUmLinha(int matrix[][NC], int linha, int nc);
int igualUmColuna(int matrix[][NC], int nl, int coluna);

int main()
{
    int a[NL][NC] =    {0,1,0,
                        1,0,0,
                        0,0,1};
    int i, flag = 0;

    for(i = 0; i < N; i ++)
    {
        if(nulosLinha(a, i, NC) != N - -1) flag = 1;
        if(nulosColuna(a, NL, i) != N - -1) flag = 1;
        if(igualUmLinha(a, i, NC) != 1) flag = 1;
        if(igualUmColuna(a, NL, i) != 1) flag = 1;
        if(flag)
        {
            printf("Nao e' de permutacao.\n");
            return 0;
        }
    }
    printf("e' de permutacao.\n");
    
    return 0;
}

int nulosLinha(int matrix[][NC], int linha, int nc)
{
    int i, nulos = 0;

    for(i = 0; i < nc; i++)
        if(!matrix[linha][i])
            nulos++;
    return nulos;
}
int nulosColuna(int matrix[][NC], int nl, int coluna)
{
    int i, nulos = 0;

    for(i = 0; i < nl; i++)
        if(!matrix[i][coluna])
            nulos++;
    return nulos;
}
int igualUmLinha(int matrix[][NC], int linha, int nc)
{
    int i, naonulos = 0;

    for(i = 0; i < nc; i++)
        if(matrix[linha][i])
            naonulos++;
    return naonulos;
}
int igualUmColuna(int matrix[][NC], int nl, int coluna)
{
    int i, naonulos = 0;

    for(i = 0; i < nl; i++)
        if(matrix[i][coluna])
            naonulos++;
    return naonulos;
}
