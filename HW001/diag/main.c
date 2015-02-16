#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%2d\n",a*2);
    printf("%4d\n",b*2);
    printf("%6d\n",c*2);
    printf("%8d\n",d*2);
    return 0;
}
