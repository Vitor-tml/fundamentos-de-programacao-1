#include <stdio.h>

int main()
{
    int n;
    float a, b, c, average;

    printf("Enter the number of averages: ");
    scanf("%d", &n);

    for(n = n; n > 0; n--)
    {
        printf("Enter of the notes: ");
        scanf("%f %f %f", &a, &b, &c);

        average = (2*a + 3*b + 5*c)/10;

        printf("The average is: %.2f\n", average);
    }
    return 0;
}