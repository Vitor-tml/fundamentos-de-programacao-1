#include <stdio.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
}Tempo;

Tempo converteHora(int totalSegundos); 

int main()
{
    Tempo estruturaTempo;
    int segundos;

    printf("Entre com o total de segundos: ");
    scanf("%d", &segundos);
    estruturaTempo = converteHora(segundos);
    printf("%02d:%02d:%02d", estruturaTempo.horas, estruturaTempo.minutos, estruturaTempo.segundos);
    return 0;
}

Tempo converteHora(int totalSegundos)
{
    Tempo convertido;
    convertido.segundos = totalSegundos;
    convertido.minutos = convertido.segundos / 60;
    convertido.segundos = convertido.segundos % 60;
    convertido.horas = convertido.minutos / 60;
    convertido.minutos = convertido.minutos % 60;
    return convertido;
}