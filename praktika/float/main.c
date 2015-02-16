#include <stdio.h>
#include <stdlib.h>

int main()// вводим число например 21.3 или 2.1е+001 надо вывести десятичное и экспоненциальное
{
    float x;
    printf("enter number: ");
    scanf("%f", &x);
    printf("the number of decimal form is %d exponential form %e ", x,x);
    return 0;
}// где косяк?
