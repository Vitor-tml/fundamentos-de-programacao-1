#include <stdio.h>
 
int main()
{
    int factorial, result = 1;

    printf("Enter a number: ");
    scanf("%d", &factorial);

    printf("%d! = ", factorial);
    for(factorial = factorial; factorial > 0; factorial--)
    {
        result *= factorial;
        printf("%d ", factorial);
        if(factorial != 1)
        printf("* ");
    }
    printf("= %d", result);
    
    return 0;
}