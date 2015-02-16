#include <stdio.h>
#include <stdlib.h>
void name();
void fullname();

int main()
{
    printf("Alan Yachmenyev\n");
    name();
    fullname();
    return 0;
}
void name()

{
    printf("Alan\n");
    printf("Yachmenyev\n");
}
void fullname()

{
    printf("Yachmenyev Alan Vladimirovich.\n");
}
