#include <stdio.h>

int main()
{
    int dias, horas, minutos, segundos, totalsegundos;

    printf("Entre com a quanidade de segundos: ");
    scanf("%d", &totalsegundos);

    segundos = totalsegundos;
    minutos = segundos / 60;
    segundos = segundos % 60;
    horas = minutos / 60;
    minutos =  minutos % 60;
    dias = horas / 24;
    horas = horas % 24;

    printf("%d segundos correspontem a %d dias, %d horas, %d minutos e %d segundos.", totalsegundos, dias, horas, minutos, segundos);
    return 0;
}