#include <stdio.h>
#include <time.h>
#define QTD 15

typedef struct{
    int codigo;
    int telefone;
    float preco;
}Eletrodomestico;

void preencheEletrodomestico(Eletrodomestico *loja);
void imprimeEletrodomestico(Eletrodomestico loja);
float calculaMedia(Eletrodomestico *loja, int qtd);

int main()
{
    srand(time(NULL));
    Eletrodomestico loja[QTD];
    int i;
    float media;

    for(i = 0; i < QTD; i++)
    {
        preencheEletrodomestico(&loja[i]);
        imprimeEletrodomestico(loja[i]);
    }
    media = calculaMedia(&loja, QTD);
    printf("Abaixo da media(R$%.2f): \n", media);
    for(i = 0; i < QTD; i++)
        if(loja[i].preco < media)
            imprimeEletrodomestico(loja[i]);

    return 0;
}

void preencheEletrodomestico(Eletrodomestico *loja)
{
    loja->telefone = 10000000 + rand()%(99999999 - 10000000);
    loja->codigo = 100 + rand()%(999 - 100);
    loja->preco = 10 + rand()%(100 - 10);
}
void imprimeEletrodomestico(Eletrodomestico loja)
{
    printf("Codigo = %d Telefone = %d Preco = R$%.2f\n", loja.codigo, loja.telefone, loja.preco);
}
float calculaMedia(Eletrodomestico *loja, int qtd)
{
    float media = 0;
    int i;

    for(i = 0; i < qtd; i++)
        media += loja[i].preco;
    media /= qtd;
    return media;
}