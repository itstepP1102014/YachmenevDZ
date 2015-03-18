#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, factorial=1;
    printf("enter number");
    scanf("%d", &n);
    for (int i=1; i<=n; ++i)
    {
        factorial*=i;
    }
    printf("Factorial is you number = %d.", factorial);
    return 0;
}
