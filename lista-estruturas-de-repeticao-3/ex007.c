#include <stdio.h>
 
int main()
{
    int numero, i, triangulo;
    printf("Entre com um number: ");
    scanf("%d", &numero);

    for(i = 1; i < (numero - 2); i++)
    {
        triangulo = i * (i+1) * (i+2);
        if(triangulo == numero)
        {
            printf("%d * %d * %d = %d\n", i, (i+1), (i+2), triangulo, numero);
            printf("E' triangular", numero);
            break;
        }
    }
    if(triangulo != numero)
        printf("Nao e' triangular.\n");
    return 0;
}