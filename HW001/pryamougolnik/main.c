#include <stdio.h>
#include <stdlib.h>

int main()
{
   int w, h, i;
   printf("enter w: \n");
   scanf("%d", &w);
   printf("enter h: \n");
   scanf("%d", &h);
   for (int i=1; i<=w; ++i)
   {
       for (int j=1;j<=h;++j)
       {
           printf("#");
       }
       printf("\n");
   }
    return 0;
}
