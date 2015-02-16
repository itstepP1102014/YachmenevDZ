#include <stdio.h>
#include <stdlib.h>
void one_tree();
void two();


int main()
{

    printf("Begin now!\n");
    one_tree();
    printf("Order!");
    return 0;
}

void one_tree()

{
    printf("one\n");
    two();
    printf("tree\n");
}

void two()

{
    printf("two\n");
}
