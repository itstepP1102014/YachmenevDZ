#include <stdio.h>
#include <stdlib.h>

int main()
{   int r,h;
    printf("Enter r:");
    scanf("%d",&r);
    printf("Enter h:");
    scanf("%d",&h);
    printf("V=%f\n",3.14*r*r*h/3);
    printf("S=%f\n",3.14*r*r*+sqrt(r*r+h*h));
    return 0;
}
