#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, days;
    days=364;
    printf("Enter you years old: \n");
    scanf("%d", &y);
    printf("You age %d and you have lived %d days", y, y*days);

    return 0;
}
