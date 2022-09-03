#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, resultado;
    char opcao;
    char opcao_por_extenso[4][11] = {"aritimetica", "ponderada", "geometrica", "harmonica"};

    printf("Entre com tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Entre com escolha uma das medias(A = aritmetica, P = ponderada, G = geometrica e H = harmonica): ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case 65:// A
    case 97:// a
        resultado = (n1 + n2 + n3)/3;
        opcao = 0;
        break;
    case 80://P
    case 112://p
        resultado = (n1*1 + n2*2 + n3*3)/6;
        opcao = 1;
        break;
    case 71:// G
    case 103://g
        resultado = sqrt(n1*n2*n3);
        opcao = 2;
        break;
    case 72://H
    case 104://h
        resultado = 3/(1/n1 + 1/n2 + 1/n3);
        opcao = 3;
        break;
    default:
        printf("Entrada invalida!\n");
        return 0;
        break;
    }
    printf("O resultado da media %s e': %.2f", opcao_por_extenso[opcao], resultado);
    return 0;
}