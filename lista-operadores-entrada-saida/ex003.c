#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("Digite um inteiro: ");
    scanf("%i", &i);
    printf("Digite um float: ");
    scanf("%f", &f);

    printf("O caractere e': %c\n", c);
    printf("O inteiro e': %i\n", i);
    printf("O float e': %f\n", f);
    return 0;
}