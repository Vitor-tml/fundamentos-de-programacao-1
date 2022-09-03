/*
Desafio: Faça um programa que:
•Gere dois números aleatórios,n1en2, inteiros positivos e no intervalor1,100s
•Escolha aleatoriamente uma das operações aritméticas a seguir:soma, subtração, multiplicação, quociente da divisão (parte inteira da divisão), resto da divisão.
•Peça ao usuário que forneça o resultado da operação aritmética escolhida considerando os valores den1en2.
•Monitore o tempo de resposta do usuário (dica: use uma função da bibliotecatime.h).
•Exiba uma mensagem dizendo se o usuário acertou ou errou a resposta, acompanhada do tempo calculado.Dica: use a funçãorand().
Não se esqueça da inicialização da semente:srand(time(NULL)).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n1, n2, operacao, resultado, resposta;
    char simbolo[4] = {'+', '*', '/', '%'};
    time_t inicio_segudos, fim_segundos, tempo_gasto;
    
    n1 = rand()%100 + 1;
    n2 = rand()%100 + 1;
    operacao = rand()%5;

    time(&inicio_segudos);
    printf("Qual o resultado de %d %c %d?: ", n1, simbolo[operacao], n2);
    scanf("%d", &resposta);
    time(&fim_segundos);
    tempo_gasto = fim_segundos - inicio_segudos;

    switch (operacao)
    {
    case 0:
        resultado = n1 + n2;
        break;
    case 1:
        resultado = n1 * n2;
        break;
    case 2:
        resultado = n1 / n2;
        break;
    case 3:
        resultado = n1 % n2;
        break;
    }

    if(resultado == resposta)
        printf("Voce acertou em %li segungos.\n", tempo_gasto);
    else
        printf("Voce errou em %li segungos. A resposta correta e' %d.\n", tempo_gasto, resultado);
    return 0;
}