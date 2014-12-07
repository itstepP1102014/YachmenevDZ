#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,p;
    printf("enter number: ");
    scanf("%d", &x);
    printf("enter degree: ");
    scanf("%d", &p);
    printf("%d\n",(int) pow(x,p));
    return 0;

}
/* For - Цикл  используется тогда, когда количество повторений цикла заранее известно или
может быть вычислено. While - Цикл используется тогда, когда количество повторений цикла заранее неизвестно
и не может быть вычислено.*/

