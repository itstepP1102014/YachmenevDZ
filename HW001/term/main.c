#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time (NULL));
    int HS=0, CS=0;
    // ---

    do
    {
        HS=rand()%11+1+rand()%11+1;
        CS=rand()%11+1+rand()%11+1;
    }while(HS>21||CS>21);
//---
    printf("You score is : \n %d\n", HS);
    char answer='y';
    if (HS>11)
    {

    printf("Would you like take a one more card? (y/n):  \n");

    scanf("%c", &answer);
    }
    if ('y'==answer)
    {
        HS+=rand()%11+1;
    }
    int CompWillTake=1;
    if (CS>11)
    {
        CompWillTake=21-CS<rand()%21;
    }
    if(CompWillTake)
    {
                CS=rand()%11+1;
    }

    while (answer=='y' && CompWillTake&&HS<21&&CS<21)

        {
            printf("You score is : \n %d\n", HS);
        char answer='y';
        if (HS>11)
        {

        printf("Would you like take a one more card? (y/n):  \n");

        scanf("%c", &answer);
        }
        if ('y'==answer)
        {
            HS+=rand()%11+1;
        }
        int CompWillTake=1;
        if (CS>11)
        {
            CompWillTake=21-CS<rand()%21;
        }
        if(CompWillTake)
        {
                CS=rand()%11+1;
        }
    }
    while (answer='y' &&HS<21)
    {
     printf("You score is : \n %d\n", HS);
    char answer='y';
    if (HS>11)
    {

    printf("Would you like take a one more card? (y/n):  \n");

    scanf("%c", &answer);
    }
    if ('y'==answer)
    {
        HS+=rand()%11+1;
    }
    while(CompWillTake&&CS<21)
    {
       CompWillTake=21-CS<rand()%21;
    }
    if(CompWillTake)
    {
                CS=rand()%11+1;
    }
    if (HS==21)
    {
        printf("You are won!\n You score %d", HS);
    }
    else if (HS>21)
    {
        printf("You a lose!\n");
    }
    else if (CS<=21&&HS<CS)
    {
        printf("You a lose!\n");
    }
    else if (CS==HS)
    {
        printf("drow!");
    }
    return 0;
    }

