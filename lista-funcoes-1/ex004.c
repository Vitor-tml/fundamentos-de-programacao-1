/* 
que receba como entrada um número de três dígitos e retorne o dígito verificador
*/
#include <stdio.h>
 
int calculaDigitoVerificador(int num);
int main()
{
    int num;

    printf("Entre com o um numero: ");
    scanf("%d", &num);

    printf("%d\n", calculaDigitoVerificador(num));
    return 0;
}

int calculaDigitoVerificador(int num)
{
    int i, soma = 0;

    for(i = 1; i <= 3; i++)
    {
        soma += (num % 10) * i;
        num /= 10;
    }
    
    return ((soma%11) % 10);
}
