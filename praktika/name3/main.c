#include <stdio.h>
#include <stdlib.h>
// ��������� ������ ������ ��� � ����� ������� ��� � ������ �����

int main()
{
    char ch,firstname[20];
    printf("write your first name ");
    scanf("%s", firstname);
    printf("%c%s%c\n", '"',firstname,'"');
    printf("%c%20s%c\n", '"',firstname,'"');
    printf("%c%-20s%c\n", '"',firstname,'"');
    printf("%c   %s%c\n", '"',firstname,'"');// ����� ������ ���� ���� �� 3 ������ ��� ���
                                            // � ������� ������� :)

    return 0;
}
