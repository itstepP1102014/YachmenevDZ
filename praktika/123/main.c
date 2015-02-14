#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Enter number: ");
    scanf("%f", &num);
    printf("Entered a number %f or %e", num,num);

    return 0;
}
