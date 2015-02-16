#include <stdio.h>
#include <stdlib.h>

int main()
{
    float growth;



    printf("enter your growth: ");
    scanf("%f", &growth);
    printf("\nyour growth in inch = %.2f",  growth/2.54);

    return 0;
}
