#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 500 + 1;
    int try, attempts = 1;

    //printf("%d\n", number);
    printf("Try to guess the value.\n");
    printf("Enter the value: ");
    scanf("%d", &try);

    while (try != number)
    {
        attempts++;
        printf("Enter the value: ");
        scanf("%d", &try);
    }
    printf("You`re right!");

    if (attempts <= 3)
        printf("\\o/");
    else 
        if (attempts <= 10)
            printf(":-D");
        else
            printf(":-\\");

    return 0;
}