#include <stdio.h>
#include <stdlib.h>

int main() //��������� ������ ������ ��� � �������
            // � ����� ������� ������� � ���
{
    char firstname[20], lastname[20];
    printf("write your first and last name ");
    scanf("%s%s", firstname, lastname);
    printf("%c%s, %s%c",'"', lastname,firstname,'"');


    return 0;
}
