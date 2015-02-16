#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void printRhombus (int ident, int width)
void printRow (int ident, int width, int i)
{
    assert(width %2==1);
    for (int i=1; i<=width; i+=2)
    {
        for (int j=1; j<=(width-i)/2+ident; ++j)
        {
            printf(" ");
        }
        for (int j=1; j<=i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
    for (int i=width-2; i>=1; i-=2)
    {
        for (int j=1; j<=(width-i)/2+ident; ++j)
        {
            printf(" ");
        }
        for (int j=1; j<=i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }

}
int main()
{
    printRhombus (3,3);
    printRhombus (0,9);
    printRhombus (3,3);
    printRhombus (1,7);
    printRhombus (3,3);
    printRhombus (0,9);
    printRhombus (3,3);
    return 0;
}


