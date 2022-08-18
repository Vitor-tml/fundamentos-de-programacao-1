#include <stdio.h>

int main()
{
    int x, y;
    printf("Entre com a coordenada que a bola bateu na quadra: ");
    scanf("%d %d", &x, &y);

    if(x>=0 && x<=432 && y>=0 && y<=468)
        printf("d");
    else
        printf("f");
    return 0;
}