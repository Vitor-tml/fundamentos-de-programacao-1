#include <stdio.h>
#define N 5

void triangulodePascal(int pascal[][N], int n);
int fatorial(int n);
void imprimeTriangulo(int v[][N], int n);


int main()
{
    int pascal[N][N];

    triangulodePascal(pascal, N);
    imprimeTriangulo(pascal, N);
    return 0;
}
void triangulodePascal(int pascal[][N], int n)
{
    int i, j;
    
    for(i = 0; i < n; i++)
        for(j = 0; j < (i+1); j++)
        {
            pascal[i][j] = fatorial(i+1) / fatorial(j+1) * fatorial(i+1 - j+1);
            printf("%d--\n", fatorial(i + 1) / fatorial(j+1) * fatorial(i+1 - j+1));
        }
}

int fatorial(int n)
{
    int i, fatorial = 1;
    for(i = n; i >= 1; i--)
        fatorial *= i;
    return fatorial;
}
void imprimeTriangulo(int v[][N], int n)
{
    int i, j;
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (i+1); j++)
        {
            
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}