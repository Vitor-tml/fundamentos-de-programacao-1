/*
Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área) ou se são iguais.
*/
#include <stdio.h>

int main()
{
    float base, altura;
    printf("Entre com a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    if ((2 * base + 2 * altura) > (base * altura))
        printf("O perimetro e' maior qua area.\n");
    else 
        if ((2 * base + 2 * altura) == (base * altura))
            printf("A area e o perimetro sao iguais.\n");
        else
            printf("A area e' maior que o perimetro.\n");
    return 0;
}