/*
Construa uma função que, dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a. A
função deve retornar 1 se a condição for satisfeita ou 0, caso contrário. Exemplo:
*/
#include <stdio.h>
 
int ultimosDigitos(int numero, int digitos);
int main()
{
    int numero = 1910;
    int digitos = 12;
    
    if(ultimosDigitos(numero, digitos))
        printf("%d", 1);
    else
        printf("%d", 0);
    return 0;
}
int ultimosDigitos(int numero, int digitos)
{
    int flag = 1;
    while(numero && digitos)
    {
        if(numero % 10 != digitos % 10)
            flag = 0;
        numero /= 10;
        digitos /= 10;
    }
    return flag;
}