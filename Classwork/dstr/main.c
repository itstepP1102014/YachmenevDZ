#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cubed(float n);

int main()
{
    float n;
    printf("enter the number: ");
    scanf("%f", &n);
    cubed(n);

    return 0;
}
void cubed(float n)
{

    float cub=n*n*n;
    printf("cubed you number = %1.2f\n",cub);

}
