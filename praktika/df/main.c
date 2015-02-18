#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    float f=1.0/3.0;
    double d=1.0/3.0;

    printf("%.4f, %.12f, %.16f\n", f,f,f);
    printf("%.4f, %.12f, %.16f\n", d,d,d);
    printf("f= %f, d= %f",FLT_DIG, DBL_DIG);
    return 0;
}
