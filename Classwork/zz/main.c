#include <stdio.h>
#include <stdlib.h>

int self_strlen(int i, char str[])
{
    int N;
    for(i = 0; i < str[N]; ++i)
    {
        str[i]++;
    }

    return str[i];
}

int main(int argc, char* argv[])
{
    int string;
    printf("Enter your string to consider amount of sings in it:\n");
    scanf("%s", &string);
    self_strlen(0, string);
    printf("Your string is %d sings lenght\n");

    return 0;
}
