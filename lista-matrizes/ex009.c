#include <stdio.h>
#include <time.h>
#define NL 5
#define NC 10

void preencheVetor(char vetor[], int tamanho, int limLow, int limHigh);
void imprimeVetor(char vetor[], int tamanho);
void imprimeMatriz(char matriz[][NC], int nl, int nc);
void preencheMatriz(char matriz[][NC], int nl, int nc, int limLow, int limHigh);
void notaAlunos(char gabarito[], char respostas[][NC], int nota[], int nl, int nc);


int main()
{
    srand(time(NULL));
    char gabaritoResposta[NC];
    char gabaritoAlunos[NL][NC];
    int notas[NL] = {};
    int i;

    printf("Gabarito: \n");
    preencheVetor(gabaritoResposta, NC, 'a', 'd');
    imprimeVetor(gabaritoResposta, NC);

    printf("Resposta dos Alunos: \n");
    preencheMatriz(gabaritoAlunos, NL, NC, 'a', 'd');
    imprimeMatriz(gabaritoAlunos, NL, NC);
    
    printf("Nota do alunos: \n");
    notaAlunos(gabaritoResposta, gabaritoAlunos, notas, NL, NC);
    for(i = 0; i < NL; i++)
        printf("Aluno %d: Nota %d\n", i, notas[i]);

    return 0;
}
void notaAlunos(char gabarito[], char respostas[][NC], int nota[], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            if(respostas[i][j] == gabarito[j])
            {
                nota[i] += 20;
            }
}
//-------------------------------------------------
void preencheVetor(char vetor[], int tamanho, int limLow, int limHigh)
{
    int i;

    for(i = 0; i < tamanho; i++)
        vetor[i] = limLow + rand()%(limHigh - limLow + 1);

}
//-------------------------------------------------
void imprimeVetor(char vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
        printf("%c ", vetor[i]);
    printf("\n");
}
//-------------------------------------------------
void preencheMatriz(char matriz[][NC], int nl, int nc, int limLow, int limHigh)
{
    int i, j;

    for(i = 0; i < nl; i++)
        for(j = 0; j < nc; j++)
            matriz[i][j] = limLow + rand()%(limHigh - limLow + 1);
}
//-------------------------------------------------
void imprimeMatriz(char matriz[][NC], int nl, int nc)
{
    int i, j;

    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
            printf("%c ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}
//-------------------------------------------------