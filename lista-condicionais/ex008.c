#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    // Declarando estruturas da time.h
    struct tm aniversario, atual, idade;
    time_t atual_segundos, idade_segundos;
    
    // Declarando variáveis
    int dia;
    char nomedia[7][7]= {"segunda", "terca", "quarta", "quinta", "sexta", "sabado", "domingo"};

    // Zerando memória das estruturas
    memset(&aniversario, 0, sizeof(aniversario));
    memset(&atual, 0, sizeof(atual));
    memset(&idade, 0, sizeof(idade));

    // Entrada do usuário
    printf("Entre com a sua data de nascimento(dd.mm.aaaa):");
    scanf("%d.%d.%d", &aniversario.tm_mday, &aniversario.tm_mon, &aniversario.tm_year);

    // Recebendo segundos desde 1900 da data atual e convertendo para estrutura
    time(&atual_segundos);
    atual = *localtime(&atual_segundos);

    // Ajustando para data atual
    atual.tm_year += 1900;
    atual.tm_mon += 1;

    // Calcula a diferença entre as daas
    idade.tm_mday = atual.tm_mday - aniversario.tm_mday;
    idade.tm_mon = atual.tm_mon - aniversario.tm_mon;
    idade.tm_year = atual.tm_year - aniversario.tm_year;

    dia = (aniversario.tm_mday + (aniversario.tm_mon + 1)* 26) / 10 + aniversario.tm_year % 100 + (aniversario.tm_year % 100)/4 + (aniversario.tm_year/100)/4 + 5 * aniversario.tm_year/100) % 7;

    printf("Sua idade e' %02d/%02d/%04d e %02d/%02d/%04d e' %d anos %d meses %d dias e voce nasceu em uma %s.\n", aniversario.tm_mday, aniversario.tm_mon, aniversario.tm_year, atual.tm_mday, atual.tm_mon, atual.tm_year, idade.tm_year, idade.tm_mon, idade.tm_mday, nomedia[dia]);
    return 0;
}