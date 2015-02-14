#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float timeyears=3.156e+7;

    printf("Enter your age in years: ");
    scanf("%d", & age);
    printf("you have lived %.2f in seconds", age*timeyears);

    return 0;
}
