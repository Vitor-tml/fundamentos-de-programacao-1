#include <stdio.h>
#define NL 3
#define NC NL

void imprimeMatriz(int matriz[][NC], int nl, int nc);
void leMatriz(int matriz[][NC], int nl, int nc);
int quadradoMagico(int matriz[][NC], int nl, int nc);

int main()
{
    int matriz[NL][NC];

    leMatriz(matriz, NL, NC);
    printf("\n");
    imprimeMatriz(matriz, NL, NC);

    if(quadradoMagico(matriz, NL, NC))
        printf("E'um quadrado magico.\n");
    else
        printf("Nao e'um quadrado magico.\n");
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
void leMatriz(int matriz[][NC], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {
            printf("(%d,%d) = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

int quadradoMagico(int matriz[][NC], int nl, int nc)
{
    int i, j, quadrado = 0, somaLinha = 0, somaColuna = 0, somaPrimaria = 0, somaSecundaria = 0;

    j = nc - 1;
    for(i = 0; i < nl; i++)
    {
        quadrado += matriz[0][i];       // inicia quadrado com a soma de uma linha
        somaPrimaria += matriz[i][i];   // diagonal é quando linha == coluna
        somaSecundaria += matriz[i][j]; // diagonal secundária é quando a coluna é o inverso da liha
        j--;
    }
    if(somaPrimaria != quadrado || somaSecundaria != quadrado)
        return 0;
    
    for(i = 1; i < nl; i++)
    {
        somaLinha = 0;
        somaColuna = 0;
        for(j = 0; j < nc; j++)
        {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if(somaLinha != quadrado || somaColuna != quadrado)
            return 0;
    }
    return 1;
}