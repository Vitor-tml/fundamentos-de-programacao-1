#include <stdio.h>
 
int main()
{
    int n1, n2, a , b, mdc;

    printf("Enter of two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;
    do{
        mdc = a % b;

        a = b;
        b = mdc;
    }while (mdc != 0);
    
    printf("The MMC is %d.\n", (n1*n2)/a);
    return 0;
}