#include <stdio.h>
#include <stdlib.h>
// сумма квадрата чисел
int main()
{
    int sum, count,num;
    count=0;
    sum=0;
    printf("enter the number, the sum of the squares of numbers you want to get: ");
    scanf("%d", &num);

    while (++count<=num)

    sum+=count*count;
    printf("the sum of the squares of numbers =%d\n", sum);

    return 0;
}
