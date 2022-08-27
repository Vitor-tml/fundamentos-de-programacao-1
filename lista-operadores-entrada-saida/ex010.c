#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, volume;
    printf("Entre com o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * raio * raio * raio;

    printf("O volume da esfera e': %.2f\n", volume);
    return 0;
}