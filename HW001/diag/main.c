#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%2d*2=%d\n",a,a*2);
    printf("%4d*2=%d\n",b,b*2);
    printf("%6d*2=%d\n",c,c*2);
    printf("%8d*2=%d\n",d,d*2);
    return 0;
}
