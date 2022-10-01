/*
Escreva uma função que recebe dois inteiros n1 e n2 e retorna o maior de dois números. Desafio: na função principal,
determine o maior de três números usando apenas duas chamadas à função definida.
*/
#include <stdio.h>
 
int retornaMaior(int n1, int n2);
int main()
{
    int n1, n2, n3, maior;

    n1 = 1;
    n2 = 2;
    n3 = 3;
    maior = retornaMaior(n1, retornaMaior(n2, n3));
    
    printf("%d\n", maior);
    return 0;
}
int retornaMaior(int n1, int n2)
{
    if((n1 - n2) < 0)
        return ((n1 + n2 - (n1 - n2))/2);
    else
        return ((n1 + n2 + (n1 - n2))/2);
}
