#include <stdio.h>

int main()
{
    float base, altura, perimetro;

    printf("Entre com a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    
    perimetro = (2 * base) + (2 * altura);

    printf("O perimetro e': %.2f\n", perimetro);
    return 0;
}