/**
Faça os seguintes itens:
(a) Implemente uma função em C com protótipo:
int divide(int *m, int *n, int d);
que recebe três parâmetros (dois ponteiros para inteiro e um inteiro) e retorna 1 se d divide pelo menos um entre
*m e *n, 0 caso contrário. Fora isso, se d divide *m, a função deve dividir *m por d, e o mesmo para *n.
(b) Implemente uma funcao em C com protótipo:
int mmc (int m, int n);
que recebe como parametros dois inteiros positivos m e n e retorna, usando a função divide (...) acima, o
mínimo múltiplo comum entre m e n, ou seja, mmc(m,n).
(c) Implemente um programa em C que lê t inteiros positivos e calcula, usando a função mmc(...) acima, o mínimo
**/
#include <stdio.h>

int divide(int *m, int *n, int d); 
int mmc(int m, int n);

int main()
{
    int m, n;
    printf("Entre com m e n: ");
    scanf("%d %d", &m, &n);

    printf("O mmc e': %d\n", mmc(m, n));
    return 0;
}

int divide(int *m, int *n, int d)
{
    if( !(*m%d) || !(*n%d) )
    {
        printf("%2d %2d | %d\n", *m, *n, d);
        if( !(*m%d) )
            *m /= d;
        if( !(*n%d) )
            *n /= d;

        return 1;
    }
    return 0;
}

int mmc(int m, int n)
{
    int i, resultado = 1;
    if(m < n)
    {
        i = m;
        m = n;
        n = i;
    }
    i = 2;
    while (m != 1 || n != 1)
    {
        if(divide(&m, &n, i))
        {
            resultado *= i;
            i = 1;
        }        
        i++;
    }
    printf("%2d %2d | \n", m, n);
    return resultado;
}