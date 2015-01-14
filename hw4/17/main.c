#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=1; i<=33; i+=2)
    {
       printf("%d#3\t%d\n", i, i*i*i);
    }

    return 0;
}
