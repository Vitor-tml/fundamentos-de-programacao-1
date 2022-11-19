#include <stdio.h>
#define QTD 5
typedef struct{
    char nome;
    int dia;
    int mes;
}Pessoa;

int main()
{
    int i, j, quantidade;
    Pessoa *cincoPessoas;

    printf("Entre com a quantidad de pessoas: ");
    scanf("%d", &quantidade);

    cincoPessoas = (Pessoa*) malloc(quantidade * sizeof(Pessoa));
    for(i = 0; i < quantidade; i++)
    {
        printf("Entre com o nome: ");
        scanf(" %c", &cincoPessoas[i].nome);

        printf("Entre com o dia e o mes de aniversario: ");
        scanf("%d/%d", &cincoPessoas[i].dia, &cincoPessoas[i].mes);
    }
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < quantidade; j++)
            if(i == cincoPessoas[j].mes)
                printf("No mes %d nasceu: %c\n", i, cincoPessoas[j].nome);
    }
    
    return 0;
}