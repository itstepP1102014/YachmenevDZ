#include <stdio.h>
#include <stdlib.h>
int pow(x,y);
int main()
{

    int x,y,p=1;
    printf("enter number: ");
    scanf ("%d", &x);
    printf("enter degree: ");
    scanf("%d", &y);

        for (int i=1; i<=y; ++i)
        {
         p*=x;
        }
        printf("%d", p);


    return 0;
}
/* For - ����  ������������ �����, ����� ���������� ���������� ����� ������� �������� ���
����� ���� ���������. While - ���� ������������ �����, ����� ���������� ���������� ����� ������� ����������
� �� ����� ���� ���������.*/

