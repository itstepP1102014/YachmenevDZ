#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hour_1,min_1,sec_1;
    printf("Enter hh mm ss: ");
    scanf("%d%d%d",&hour_1,&min_1,&sec_1);

    int hour_2,min_2,sec_2;
    printf("Enter hh mm ss: ");
    scanf("%d%d%d",&hour_2,&min_2,&sec_2);

    int hour_3,min_3,sec_3;
    printf("Enter hh mm ss: ");
    scanf("%d%d%d",&hour_3,&min_3,&sec_3);

    printf("%02d:%02d:%02d\n", hour_1, min_1, sec_1);
    printf("%02d:%02d:%02d\n", hour_2, min_2, sec_2);
    printf("%02d:%02d:%02d\n", hour_3, min_3, sec_3);
    return 0;
}
