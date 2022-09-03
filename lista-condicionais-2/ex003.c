#include <stdio.h>
#include <math.h>

int main()
{
    int armstrong, operacao, centena, dezena, unidade;

    printf("Entre com um numero dee 100 a 999: ");
    scanf("%d", &armstrong);

    if(armstrong < 100 || armstrong > 999)
    {
        printf("O numero esta' fora do intervalo.\n");
        return 0;
    }
    
    centena = armstrong / 100;
    dezena = (armstrong - centena * 100) / 10;
    unidade = armstrong - 100*centena - 10*dezena;

    operacao = pow(centena, 3) + pow(dezena, 3) + pow(unidade, 3);

    if(operacao == armstrong)
    {
        printf("%d = %d%c + %d%c + %d%c\n Entao %d e' um numero de Armstrong!\n", armstrong, centena, 252, dezena, 252, unidade, 252, armstrong);
    }
    else
    {
        printf("%d != %d%c + %d%c + %d%c\n Entao %d nao e' um numero de Armstrong!\n", armstrong, centena, 252, dezena, 252, unidade, 252, armstrong);
    }
    return 0;
}