#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for (int i=2; i<27; i+=i%3)
    {
        printf("\r%d",i);
    }
    return 0;
}
