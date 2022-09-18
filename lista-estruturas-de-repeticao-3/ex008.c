#include <stdio.h>
 
int main()
{
    int numero, unidade, dezena;
    
    printf("Entre com um numero: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    numero /= 10;
    while(numero)
    {
        if(unidade != numero % 10)
        {
            printf("Os digitos NAO sao todos iguais\n");
            break;
        }
        unidade = numero % 10;
        numero /= 10;
        if(!numero)
            printf("Os digitos sao todos iguais\n");
    }
    return 0;
}