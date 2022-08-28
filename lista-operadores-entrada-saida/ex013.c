#include <stdio.h>

int main()
{
    float km, l, consumo;

    printf("Entre com a distancia percorrida e o consumo do automovel: ");
    scanf("%f %f", &km, &l);

    consumo = km/l;

    printf("O consumo medio do altomovel e': %.3f km/l", consumo);
    return 0;
}