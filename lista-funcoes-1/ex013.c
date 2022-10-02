/*
Faça uma função que, dados dois inteiros positivos a e b verifica se o menor deles é segmento do outro. A função deve
retornar 1 se a for segmento de b, 2 se b for segmento de a ou 0, caso contrário. Você deve usar a função do item
anterior nessa solução. Exemplo:
a       b           Retorno
1243    2212435     1 (a é segmento de b)
567890  678         2 (b é segmento de a)
235     236         0 (um não é segmento do outro)
*/
#include <stdio.h>

int ultimosDigitos(int numero, int digitos);
int ehSegmento(int a, int b);

int main()
{
    int a = 1234;
    int b = 12;
    
    printf("%d\n", ehSegmento(a, b));
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

int ehSegmento(int a, int b)
{
    int aux, aMax = 1, seg = 0;

    if(a < b)
    {
        aux = a;
        a = b;
        b = aux;
        aMax = 0;
    }

    while(a)
    {
        if(ultimosDigitos(a, b))
            seg = 1;
        a /= 10;
    }

    return (seg + (aMax * seg));
}