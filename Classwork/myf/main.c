#include <stdio.h>
#include <stdlib.h>
#include <myf.h>

int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("gcd(%d,%d)=%d\n", a, b, gcd (a,b));
    printf("lcm(%d,%d)=%d\n", a, b, lcm (a,b));
    return 0;
}
