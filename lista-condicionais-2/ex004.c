#include <stdio.h>

int main()
{
    float a, b, c;
    float ab, ac, bc;
    printf("Entre com 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);

    ab = a + b;
    ac = a + c;
    bc = c + b;

    if (ab > c && ac > b && bc > a)
        if (a == b && a == c && c == b) // Todos os lados iguais
            printf("o triangulo e' equilatero.\n");
        else if (a == b || a == c || b == c) // Dois lados iguais
            printf("Triangulo isosceles.\n");
        else // Nenhum lado igual
            printf("Triangulo escaleno.");
    else
        printf("Nao e' um triangulo.\n");
    return 0;
}