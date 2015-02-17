#include <stdio.h>
#include <stdlib.h>
#define MILE 1.609
#define GALLON 3.785

int main()
{
    float m,g;

    printf("Enter the number of miles surmounted: ");
    scanf("%f", &m);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%f", &g);
    printf("Per gallon you drove %.1f miles\n", m/g);
    printf("Is %.1f liters per 100 kilometers",GALLON*g/(MILE*m/100));

    return 0;
}
