#include <stdio.h>
#define MAX 100 
#define TAM 10

void imprimeVetor(int vetor[], int tamanho);
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh);
float mediadosPares(int vetor[], int tamanho);

int main()
{
    int vetor[MAX];
    float media;
    preencheVetor(vetor, TAM, 0, 100);
    imprimeVetor(vetor, TAM);
    printf("A media dos pares e` %.2f\n", mediadosPares(vetor, TAM));
    return 0;
}

float mediadosPares(int vetor[], int tamanho)
{
    int i, pares = 0;
    float media;

    for(i = 0; i < tamanho; i++)
    {
        if(!(vetor[i] % 2))
        {
            pares++;
            media += vetor[i];
        }
    }
    return (media/pares);
}
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
//-----------