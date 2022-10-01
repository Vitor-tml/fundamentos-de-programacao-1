/*
Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b. Exemplo:
5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455. Você deverá:
(a) Fazer uma função que, dado um valor inteiro n e um dígito d, 0 ď d ď 9, devolve quantas vezes o dígito d aparece
em n.
(b) Usando a função do item anterior, criar uma função que, dados dois inteiros positivos n1 e n2, retorne 1 se n1 é
permutação de n2 ou 0 caso contrário. Protótipo:
int ehPermutacao(int n1, int n2)
*/
#include <stdio.h>
 
int contadigitos(int n, int d);
int ehPermutacao(int n1, int n2);

int main()
{
    return 0;
}

int contadigitos(int n, int d)
{
    int cont = 0;
    while(n)
    {
        if(n%10 == d)
            cont++;
        n /= 10;
    }
    return cont;
}
int ehPermutacao(int n1, int n2)
{

}