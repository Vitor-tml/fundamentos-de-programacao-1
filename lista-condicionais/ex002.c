/*
Faça um programa que tendo como entradas (via teclado) a base e altura de um retângulo, calcule o perímetro (2*base+ 2*altura) e a área (base*altura) e imprima se o perímetro é maior que a área
*/
#include <stdio.h>

int main()
{
    float base, altura;
    printf("Entre com a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    if((2*base + 2* altura) > (base * altura))
        printf("O perimetro e' maior qua area.\n");
    return 0;
}