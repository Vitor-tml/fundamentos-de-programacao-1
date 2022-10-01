/*
O IMC (Índice de Massa Corporal) é uma medida que foi criada para dar uma indicação sobre a condição de peso de
uma população. Por sua simplicidade, ele é usado - com críticas - para avaliar a condição de indivíduos adultos. A
fórmula é: IMC = peso / (altura2
).
(a) Escreva uma função que leia o peso e a altura de um adulto e retorne o IMC.
Protótipo:
float calculaIMC(float altura, float peso);
(b) Escreva uma função do tipo void que receba como parâmetro um valor representando o IMC e mostre uma
mensagem de acordo com a sua condição:
IMC Mensagem
abaixo de 18.5 Você está abaixo do peso.
entre 18.5 e 25 Você está com o peso normal.
entre 25 e 30 Você está acima do peso.
acima de 30 Você está obeso.
Protótipo:
void imprimeMsgIMC(float imc);
(c) Na função main(), leia os dados de entrada adequados e invoque as duas funções criadas acima.
*/
#include <stdio.h>

float calculaIMC(float altura, float peso);
void imprimeIMC(float imc);
int main()
{
    float peso, altura;
    printf("Entre com seu pso e altura: ");
    scanf("%f %f", &peso, &altura);
    imprimeIMC(calculaIMC(altura, peso));
    return 0;
}
float calculaIMC(float altura, float peso)
{
    return (peso / (altura * altura));
}
void imprimeIMC(float imc)
{
    if(imc < 18.5)
        printf("Voce esta abaixo do peso.\n");
    if(imc >= 18.5 && imc <= 25)
        printf("Voce esta com o peso normal");
    if(imc >= 25 && imc <= 30)
        printf("Voce esta acima do peso");
    if(imc > 30)
        printf("Voce esta obeso");
    return;
}