#include <stdio.h>

int main()
{
    int a, b, c, h, l;
    printf("Entre com A, B, C, H, L: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
    if(a<0 || b<0 || c<0 || h<1 || l<1 || a>100 || b>100 || c>100 || h>100 || l>100)
        return 0;

    if( ((a<=h && b<=l)||(b<=h && a<=l)) ||
        ((a<=h && c<=l)||(c<=h && a<=l)) ||
        ((c<=h && b<=l)||(b<=h && c<=l))
      )
        printf("S");
    else
        printf("N");

    return 0;
}
