/*
Dados dois números inteiros positivos, faça uma função que retorne o máximo divisor comum entre eles usando o algoritmo de Euclides. Ele é baseado em subtrações sucessivas
e consiste no seguinte: a cada ciclo o maior valor é substituído pelo valor da diferença entre o maior valor e o menor
valor até que os dois valores passam a ser iguais; quando passam a ser iguais, o máximo divisor comum procurado é
um deles (tanto faz qual já que são iguais). Exemplo:
*/
#include <stdio.h>
 
int retornaMDC(int num1, int num2);
int main()
{
    int a, b;
    printf("Entre com dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("O MDC e' %d\n", retornaMDC(a, b));
    return 0;
}
int retornaMDC(int num1, int num2)
{
    while (num1 != num2)
    {
        if(num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;    
    }
    return num1;
}