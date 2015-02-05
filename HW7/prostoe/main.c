#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i=1, amount=0;
    printf("Enter a number >= 2: ");
    scanf("%d", &number);

    for(i, amount; amount <= 2, i <= number; i++)
    {
        if(number % i == 0)
        {
            amount++;
        }
    }
    if(amount == 2)
    {
        printf("Your number is simple\n");

    }
    else
    {
        printf("Your number is composite\n");
    }
    return 0;
}
