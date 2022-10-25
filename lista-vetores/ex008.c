#include <stdio.h>
#define MAX 100 
#define TAM 10

void imprimeVetor(int vetor[], int tamanho);
void preencheVetor(int vetor[], int tamanho, int limLow, int limHigh);
float mediadosPares(int vetor[], int tamanho, int *maior, int *menor);

int main()
{
    int vetor[MAX], maior, menor;
    float media;
    preencheVetor(vetor, TAM, 0, 100);
    imprimeVetor(vetor, TAM);
    media = mediadosPares(vetor, TAM, &maior, &menor);
    printf("A media dos pares e` %.2f\n O maior e': %d e o menor e': %d\n", media, maior, menor);
    return 0;
}

float mediadosPares(int vetor[], int tamanho, int *maior, int *menor)
{
    int i, pares = 0;
    float media;

    *maior = *menor = vetor[0];
    for(i = 0; i < tamanho; i++)
    {
        if(*maior < vetor[i])
            *maior = vetor[i];
        if(*menor > vetor[i])
            *menor = vetor[i];
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