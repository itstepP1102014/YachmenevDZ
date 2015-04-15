#include <stdio.h>
#include <stdlib.h>


int main()
{
int p,i=0;
static int a[10]={10,11,12,13,14,15,16,17,18,19};
while(i<10/2)
{
p=a[i];
a[i]=a[9-i];
a[9-i]=p;
i++;
}
i=0;
while(i<10)
      printf(" %d",a[i++]);
      return 0;
}
