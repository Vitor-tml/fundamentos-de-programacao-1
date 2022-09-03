/*
OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vãotomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo,contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número de alunose o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos os alunos emonitores em apenas uma viagem
*/
#include <stdio.h>

int main()
{
    int alunos, monitores;
    printf("Entre com o numero de alunos e o numero de monitores: ");
    scanf("%d %d", &alunos, &monitores);

    if((alunos + monitores) <= 50)
        printf("E' possivel levar em uma viagem.\n");
    else
        printf("Nao e' possivel levar em uma viagem.\n");
    return 0;
}