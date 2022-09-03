/*
Leia 2 valores reais (xey), os quais representam as coordenadas de um ponto em um plano. A seguir, determine aqual quadrante pertence o ponto. Analise também se está sobre um dos eixos cartesianos ou na origem (x=y=0).Para auaxiliar a resoluação do exercícico, a figura abaixo ilustra os quatro quadrantes no plano cartesianoXˆY, comoprimeiro quadrante iniciando no canto superior direito, o segundo no canto superior esquerdo e assim por diante.
*/
#include <stdio.h>

int main()
{
    float x, y;

    printf("Entre com as coordenadas: ");
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0)
    {
        printf("Origem.\n");
        return 0;
    }
    if(x == 0)
    {
        printf("Eixo x.\n");
        return 0;
    }
    if(y == 0)
    {
        printf("Eixo y.\n");
        return 0;
    }

    if(x > 0 && y > 0)
        printf("Q1.\n");
    else
    {
        if(x < 0 && y > 0)
            printf("Q2.\n");
        else
        {
            if(x < 0 && y < 0)
                printf("Q3.\n");
            else
                printf("Q4.\n");
            
        }
        
    }
    return 0;
}