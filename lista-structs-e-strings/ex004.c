#include <stdio.h>

typedef struct
{
    float p[3];
    float M;
} Provas;
typedef struct
{
    int ra;
    int frequencia;
    Provas Ps;
} Aluno;

int main(void)
{
    int n, i, j;
    float desvios_Ps[3] = {0.0, 0.0, 0.0};
    float medias_Ps[3] = {0.0, 0.0, 0.0};
    Aluno* vetAlunos;

    printf("Entre com a quantidade de alunos: ");
    scanf("%d", &n);

    vetAlunos = (Aluno *) malloc(n * sizeof(Aluno));

    leNota(&vetAlunos, n);
    imprimeAluno(vetAlunos[0]);
}

void leNota(Aluno *aluno, int qtd)
{
    int i;

    for(i = 0; i < qtd; i++)
    {
        printf("Entre com o RA do aluno: ");
        scanf("%d", &aluno[i].ra);
        printf("Entre com as notas do aluno: ");
        scanf("%f %f %f", aluno[i].Ps.p[0], aluno[i].Ps.p[1], aluno[i].Ps.p[2]);
        aluno[i].Ps.M = (aluno[i].Ps.p[0] + aluno[i].Ps.p[1] + aluno[i].Ps.p[2]) / 3;
    }
}
void imprimeAluno(Aluno fulano)
{
    printf("RA: %d\n", fulano.ra);
    printf("Prova 0: %f\n", fulano.Ps.p[0]);
    printf("Prova 1: %f\n", fulano.Ps.p[1]);
    printf("Prova 2: %f\n", fulano.Ps.p[2]);
    printf("Media; %f\n", fulano.Ps.M);
}