#include <stdio.h>

int main()
{
    float n1, n2, media;

    printf("Entre com dois valores: ");
    scanf("%f %f", &n1, &n2);
    media = (n1+n2)/2;
    printf("A media e': %.2f", media);
    return 0;
}