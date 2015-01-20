#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, a1 = 1, a2 = 1, a3, i = 3;
    printf("enter the desired number of digits: ");
    scanf("%d", &number);
    if(number == 1)
    {
        printf("%d", a1);
    }
    else
    {
        printf("%d %d ", a1, a2);
        for(i; i <= number; ++i)
        {
            a3 = a2 + a1;
            printf("%u ", a3);

            a1 = a2;
            a2 = a3;
        }
    }

    return 0;
}
