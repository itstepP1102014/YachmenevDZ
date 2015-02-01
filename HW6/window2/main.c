#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, w;
    printf("Enter height and width:\n");
    scanf("%d%d", &h, &w);
    for(int i=1; i<=h; ++i)
    {
        for(int j=1; j<=w; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
