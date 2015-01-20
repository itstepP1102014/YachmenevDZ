#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     srand(time(NULL));
   char answer;
    do
    {
        int my_number = 0;
        int computer_number = rand()%99 + 1;
        int number_of_retries = 0;
        while(my_number != computer_number)
        {
            printf("Enter a number from 1 to 99: ",my_number);
            scanf("%d",&my_number);
            number_of_retries += 1;

            if(my_number > computer_number)
            {
                printf("Bust!\n");
            }
            else if(my_number < computer_number)
            {
                printf("Shortfall!\n");
            }

        }
        printf("Congratulations! Your number of retries = %d \n",number_of_retries);
        printf("Do you wont to repeat the game?(y/n) ");
        scanf(" %c", &answer);

    } while(answer == 'y');

    return 0;
}
