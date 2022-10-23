#include <stdio.h>
#define N 7

void triangulodePascal(int pascal[][N], int n);
void preenchePascal(int vetor[][N], int linha, int coluna);
void imprimeTriangulo(int v[][N], int n);

int main()
{
    int pascal[N][N];
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j <= i; j++)
        {
            preenchePascal(pascal, i, j);
        }

    imprimeTriangulo(pascal, N);
    return 0;
}
void preenchePascal(int vetor[][N], int linha, int coluna)
{
    if (coluna == 0 || linha == coluna)
        vetor[linha][coluna] = 1;
    else
        vetor[linha][coluna] = vetor[linha - 1][coluna - 1] + vetor[linha - 1][coluna];
}
void imprimeTriangulo(int v[][N], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (i + 1); j++)
        {

            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}