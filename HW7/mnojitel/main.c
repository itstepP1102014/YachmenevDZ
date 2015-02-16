#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=2;
    printf("Enter YOUR number:\n");
    scanf("%d",&x);

    printf("%d = ",x);

    while(i<=x)
    {
        if(x%i==0)
        {
            printf("%d",i);
            x=x/i;
            if(x>1)
                printf("*");
        }
        else
            i=i+1;
    }
    return 0;
}
