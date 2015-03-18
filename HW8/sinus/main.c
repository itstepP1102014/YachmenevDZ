#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double eps, x=-2.0;

    printf("Enter the eps accurasy (0.0001): \n");
    scanf("%lf", &eps);
    system("cls");
    printf("%c x:   %c You sin(x):   %c My sin(x):  %c Difference: %c\n",'*','*','*','*','*');
    while (x<2.1)
    {
        int i=1;
        double result=0.0,adding=x/i;
        while (fabs(adding)>=eps)
        {
            result+=adding;
            adding *= -x * x / ((i+1) * (i+2));
            i += 2;
        }
        printf("%c %2.1f %c %7.4f %7c %8.4f %4c %7.4f%6c\n",'*',x,'*',result,'*',sin(x),'*',result-sin(x),'*');
        x+=0.1;
    }

    return 0;
}
