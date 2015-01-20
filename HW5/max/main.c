#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a,b, max;
     printf ("enter some of number: \n");
     scanf ("%d", &n);
     printf ("enter %d numbers: ", n);
     scanf ("%d", &max);
     for(i = 1; i < n ; i++)
        {
         scanf ("%d",&a);
         if(a > max)
             max = a;

     }
     printf ("you max number is %d",  max);


    return 0;
}
