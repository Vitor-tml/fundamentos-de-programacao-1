#include <stdio.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h>
    #define LIMPA "cls"
#else
    #define LIMPA "clear"
#endif
#define NL 4
#define NC 4

void imprimeMatriz(int matriz[][NC], int nl, int nc);
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh);
void somaMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc);
void subtraiMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc);
void multiplicaMatrizes(int a[][NC], int c[][NC], int nl, int nc, int num);

int main()
{
    srand(time(NULL));
    int opcao;
    int a[NL][NC];
    int b[NL][NC];
    int c[NL][NC];
    int criado = 0;
    int num;

    preencheMatriz(a, NL, NC, 0, 0);
    preencheMatriz(b, NL, NC, 0, 0);

    do
    {
        printf("Entre com uma opcao:");
        printf("\n- (0) criar duas matrizes 10 x 10 com valores inteiros ");
        printf("\n- (1) imprimir as matrizes originais ");
        printf("\n- (2) somar as duas matrizes e imprimir o resultado ");
        printf("\n- (3) subtrair a primeira matriz da segunda e imprimir o resultado ");
        printf("\n- (4) multiplicar uma constante à primeira matriz e imprimir o resultado ");
        printf("\n- (5) limpa tela");
        printf("\n- (-1) sair\nOpcao: ");
        scanf("%d", &opcao);
        printf("\n\n");
        switch (opcao)
        {
        case 0:
            preencheMatriz(a, NL, NC, 0, 10);
            preencheMatriz(b, NL, NC, 0, 10);
            criado = 1;
            break;

        case 1:
            if (criado)
            {
                imprimeMatriz(a, NL, NC);
                imprimeMatriz(b, NL, NC);
            }
            else
                printf("As matrizes nao foram criadas. Selecione criar antes de usar essa opcao.\n");
            break;

        case 2:
            somaMatrizes(a, b, c, NL, NC);
            imprimeMatriz(c, NL, NC);
            break;

        case 3:
            subtraiMatrizes(a, b, c, NL, NC);
            imprimeMatriz(c, NL, NC);
            break;

        case 4:
            if (criado)
            {
                printf("Por qual numero? ");
                scanf("%d", &num);
                multiplicaMatrizes(a, c, NL, NC, num);
                imprimeMatriz(c, NL, NC);
            }
            else
                printf("As matrizes nao foram criadas. Selecione criar antes de usar essa opcao.\n");
            break;

        case 5:
            system(LIMPA);
            break;

        case -1:
            printf("Ate mais.\n");
            break;

        default:
            printf("Opcao invalida, tente novamente.\n");
            continue;
            break;
        }

    } while (opcao != -1);

    return 0;
}
void somaMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc)
{
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            c[i][j] = a[i][j] + b[i][j];
}
void subtraiMatrizes(int a[][NC], int b[][NC], int c[][NC], int nl, int nc)
{
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            c[i][j] = b[i][j] - a[i][j];
}
void multiplicaMatrizes(int a[][NC], int c[][NC], int nl, int nc, int num)
{
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            c[i][j] = a[i][j] * num;
}

//-------------------------------------------------
void preencheMatriz(int matriz[][NC], int nl, int nc, int limLow, int limHigh)
{
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            matriz[i][j] = limLow + rand() % (limHigh - limLow + 1);
}
//-------------------------------------------------
void imprimeMatriz(int matriz[][NC], int nl, int nc)
{
    int i, j;

    for (i = 0; i < nl; i++)
    {
        for (j = 0; j < nc; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}