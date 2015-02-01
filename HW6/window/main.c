#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, w;
    printf("Enter height and width:\n");
    scanf("%d%d", &h, &w);
    system("cls");

    for(int i=1; i<=h; ++i)
    {
        for(int j=1; j<=w; ++j)
        {
            if(i==1 || i==h || j==1 || j==w)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
