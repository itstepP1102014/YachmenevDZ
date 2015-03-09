#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, count,num;
    count=0;
    sum=0;
    printf("enter the number, the amount of numbers you want to get: ");
    scanf("%d", &num);

    while (++count<num)

    sum+=count;
    printf("sum=%d\n", sum);

    return 0;
}
