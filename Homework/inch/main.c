#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float inch, ft;
    inch =2.54;
    ft = 0.3048;
    printf("enter size in inches: \n");
    scanf("%d", &n );
    printf("You size in centimeters = %.2f\n", n*inch);
    printf("You size in foot = %.4f\n", (n*inch)*ft);
    return 0;
}
