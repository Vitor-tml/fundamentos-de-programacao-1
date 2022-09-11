#include <stdio.h>
 
int main()
{
    int number, i, sum;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 0; i < number; i++)
    {
        
        if(number % i == 0)
            sum = sum + i;
    }
    if(sum == number)
        printf("This is a perfect number");
    else
        printf("This is not a perfect number");
    return 0;
}