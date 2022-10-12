/*
Implemente uma função em C que receba os valores a, b e c passados por valor, e receba também dois valores x1 e
x2 passados por referência. Em seguida, calcule e retorne as duas raízes da equação do segundo grau nas variáveis x1
e x2. Protótipo:
int calcula_raizes(float a, float b, float c, float *x1, float *x2);
Obs: o valor de retorno deve ser um valor int indicando se a equação tem 1, 2 ou nenhuma raiz real.
*/
#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2);
int main()
{
    float a, b, c, x1, x2;

    printf("ax^2 + bx + c = 0\nEntre com a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    switch (calcula_raizes(a, b, c, &x1, &x2))
    {
        case 0:
            printf("Essa equacao nao tem raizes reais.\n");
            break;
        case 1:
            printf("x = %.2f\n", x1);
            break;
        case 2:
            printf("x1 = %.2f x2 = %.2f\n", x1, x2);
            break;
    }

    return 0;
}

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b*b - 4 * a * c;

    if(delta < 0)
        return 0;

    *x1 = (-b + sqrt(delta))/ (2 * a);
    *x2 = (-b - sqrt(delta))/ (2 * a);

    if(delta == 0)
        return 1;
    else
        return 2;
}