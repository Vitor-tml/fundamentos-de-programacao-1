#include <stdio.h>
#define NL 10
#define NC 10

void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
int linhadoMaior(int vetor[][NC], int nl, int nc);
int colunadoMenor(int vetor[][NC], int linha, int nc);
void imprimeMatriz(int matriz[][NC], int nl, int nc);

int main()
{
    int matriz[NL][NC];
    int l, c;
    preencheMatriz(matriz, NL, NC, 0, 10);
    imprimeMatriz(matriz, NL, NC);
    l = linhadoMaior(matriz, NL, NC);
    c = colunadoMenor(matriz, l, NC);

    printf("O minimax esta na linha %d coluna %d", l, c);
    return 0;
}

int linhadoMaior(int vetor[][NC], int nl, int nc)
{
    int i, j, maiorLinha = 0, maiorColuna = 0;
    
    for(i= 0; i < nl; i++)
        for(j = 0; j < nc; j++)
        {
            if(vetor[maiorLinha][maiorColuna] < vetor[i][j])
            {
                maiorColuna = j;
                maiorLinha = i;
            }
        }
    return maiorLinha;
}
int colunadoMenor(int vetor[][NC], int linha, int nc)
{
    int i, colunaMenor = 0;

    for(i = 0; i < nc; i++)
    {
        if(vetor[linha][i] < vetor[linha][colunaMenor])
            colunaMenor = i;
    }
    return colunaMenor;
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
