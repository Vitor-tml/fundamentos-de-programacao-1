/*
Faça um programa que receba uma opção fornecida pela usuário indicando se este deseja converter um número de
binário para decimal (opção 1) ou o contrário (opção 2). Depois o usuário deve fornece o número e o programa deve
imprimir o resultado da conversão. Esse processo deve ser repetido até que o usuário forneça a opção 0 (finaliza o
programa).
*/
#include <stdio.h>
#include <math.h>

int bin2dec(int num);
int dec2bin(int num);

int main()
{
    int numero, opcao;
    printf("Bin p/ Dec = 1 | Dec p/ Bin = 2 | Sair = 0\n");
    scanf("%d", &opcao);

    while(opcao)
    {
        printf("Entre com o numero: ");
        scanf("%d", &numero);

        if(opcao == 1)
            printf("%d = %d\n", numero, bin2dec(numero));
        if(opcao == 2)
            printf("%d = %d\n", numero, dec2bin(numero));

        printf("\nBin p/ Dec = 1 | Dec p/ Bin = 2 | Sair = 0\n");
        scanf("%d", &opcao);
    }
    return 0;
}

int bin2dec(int num)
{
    int dec = 0;
    int i = 0;

    while(num)
    {
        dec += (num % 10) * pow(2, i);
        num /= 10;
        i++;
    }
    return dec;
}
int dec2bin(int num)
{
    int i = 0, bin = 0;
    while(num)
    {
        i = 0;
        while(pow(2, i) <= num)
            i++;
        i--;
        bin += pow(10, i);
        num -= pow(2, i);
    }
    return bin;
}