/*
Escreva uma função que arredonda um valor dado. O número deve ser arredondado para o inteiro mais próximo. Se
o número for equidistante de dois inteiros, deve ser arredondado para o valor de maior magnitude. Ou seja, 1.5 é
arredondado para 2, e -1.5 é arredondado para -2. O protótipo da função deve ser:
int arredonda (float x);
*/
#include <stdio.h>
#include <math.h>
 
int arredonda(float x);
int main()
{
    float num;
    printf("Entre com um numero: ");
    scanf("%f", &num);
    printf("%d\n", arredonda(num));
    return 0;
}

int arredonda(float x)
{
    int aux;

    aux = x;

    aux = 10*x - 10*aux;

    if(abs(aux) >= 5)
        x += aux/abs(aux);
    
    aux = x;
    return aux;
}