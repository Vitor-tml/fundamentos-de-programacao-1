#include <stdio.h>

int main()
{
    int number, a, b, c;

    for (number = 1000; number <= 9999; number++)
    {
       // printf("aa");
        a = number / 100;
        b = (number % 1000) % 100;
        c = a + b;
        if (number == c * c)
            printf("%d\n", number);
    }
}