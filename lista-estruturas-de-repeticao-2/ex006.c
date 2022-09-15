#include <stdio.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int number = rand()%500 + 1;
    printf("Hello Word!");
    return 0;
}