void imprimeVetor(int vetor[], int tamanho);
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh);

void imprimeMatriz(int matriz[][NC], int nl, int nc);
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
void leMatriz(int matriz[][NC], int nl, int nc);


//-------------------------------------------------
void imprimeVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
//-------------------------------------------------
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh)
{
    int i;

    for(i = 0; i < tamanho; i++)
        vetor[i] = limLow + rand()%(limHigh - limLow + 1);

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
//-------------------------------------------------
