#include <stdio.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg); 
int main()
{
    int segundos, hora, min, seg;
    printf("Entre com o total de segundos: ");
    scanf("%d", &segundos);
    converteHora(segundos, &hora, &min, &seg);
    printf("%02d:%02d:%02d", hora, min, seg);
    return 0;
}

void converteHora(int totalSegundos, int *hora, int *min, int *seg)
{
    *seg = totalSegundos;
    *min = *seg / 60;
    *seg = *seg % 60;
    *hora = *min / 60;
    *min = *min % 60;
    return;
}