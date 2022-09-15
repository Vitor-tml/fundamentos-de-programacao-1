#include <stdio.h>
#define hCHICO 150
#define hZE 110
#define gCHICO 2
#define gZE 3
int main()
{
    int chico = hCHICO;
    int ze = hZE;
    int years = 0;

    while (ze <= chico)
    {
        ze += gZE;
        chico += gCHICO;
        years++;
    }
    
    printf("It would take %d years for Ze' to be greater than Chico.", years);
    return 0;
}