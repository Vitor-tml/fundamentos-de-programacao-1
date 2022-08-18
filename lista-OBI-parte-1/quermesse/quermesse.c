#include <stdio.h>

int ganhador(int participantes);
int main()
{
    int N, premiado;

    printf("Entre com numero de participantes da festa e com a lista de entrada: ");
    scanf("%d", &N);
    premiado = ganhador(N);
    printf("O ganhador e' %d", premiado);

    return 0;
}
int ganhador(int participantes)
{
    int ordem_de_entrada[participantes], i, premiado;

    for(i=0; i<participantes; i++)
    {
        scanf("%d", &ordem_de_entrada[i]);
        if(ordem_de_entrada[i] == (i+1))
            premiado = i + 1;
    }
    return premiado;
}
