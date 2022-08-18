#include <stdio.h>

int main()
{
    int trigo, ovo, leite, menorquantidade;
    
    printf("Entre com a quantidade de xicaras de trigo, com a quantidade de ovos e com a quantidade de colheres de leite: ");
    scanf("%d %d %d", &trigo, &ovo, &leite);

    menorquantidade = trigo/2;

    if(menorquantidade > ovo/3)
        menorquantidade = ovo/3;
    if(menorquantidade > leite/5)
        menorquantidade = leite/5;
    
    printf("A menor quantidade de bolos que voce consegue fazer e' %d", menorquantidade);
    return 0;
}