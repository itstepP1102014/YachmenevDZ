#include <stdio.h>
#include <stdlib.h>
// программа просит ввести имя а затем выводит его в разных видах

int main()
{
    char ch,firstname[20];
    printf("write your first name ");
    scanf("%s", firstname);
    printf("%c%s%c\n", '"',firstname,'"');
    printf("%c%20s%c\n", '"',firstname,'"');
    printf("%c%-20s%c\n", '"',firstname,'"');
    printf("%c   %s%c\n", '"',firstname,'"');// здесь должно быть поле на 3 больше чем имя
                                            // я вставил пробелы :)

    return 0;
}
