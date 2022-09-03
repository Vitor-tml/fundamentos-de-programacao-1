/*
Faça um programa que dados os coeficientes (a,b e c) de uma equação do 2o grau, calcule e imprima suas raízes (casoa equação possuaraízes imaginárias, o programanão deve imprimir nada).
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Entre com os coeficientes a, b e c da queacao: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if(delta < 0)
        return 0;
    
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);

    printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    return 0;
}