#include <stdio.h>
#define PASSWORD 2002

int main()
{
    int attempt;

    printf("Enter the password: ");
    scanf("%d", &attempt);

    while(attempt != PASSWORD)
    {
        printf("Invalid Password!\n");
        printf("Enter the password: ");
        scanf("%d", &attempt);
    }
    printf("Allowed Access.\n");
    return 0;
}