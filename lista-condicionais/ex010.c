#include < stdio .h >
int main()
{
    int n1, n2, n3, aux;
    if (n2 >= n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 >= n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
        if (n2 >= n3)
        {
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    printf("%d %d %d\n", n1, n2, n3);
    return (0);
}
/*
3,2,1
30, 20, 10
12, 13, 25

ordena os valores de entrada para a saida ser do menor para o maior.
*/