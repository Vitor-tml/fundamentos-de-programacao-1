#include <stdio.h>
#define ESCAPE -1000
 
int main()
{
    float values, average, sum = 0;
    int cont_of_values = 0;
    printf("Enter the values: ");
    scanf("%f", &values);

    while(values != ESCAPE)
    {
        if(values > 0)
        {
            cont_of_values++;
            sum += values;
        }

        printf("Enter the values: ");
        scanf("%f", &values);
    }

    average = sum/cont_of_values;

    printf("The amount of values positives is %d, and the average is: %.2f", cont_of_values, average);
    
    return 0;
}