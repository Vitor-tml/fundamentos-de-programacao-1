#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Entre com as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5)/10;
    printf("A media do aluno e' %.1f", media);
    return 0;
}