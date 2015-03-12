#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int m[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

void displayX0 (int i)
{
 if (i ==0)
        printf(" ");
 else if (i == 1)
    printf("X");
 else
    printf("0");
}

// отображение игровой ситуации на экран
void display ()
{
   for (int i = 0; i<5; ++i)
   {
       for(int j = 0; j <5; ++j)
       {
           if (j%2 == 0 && i%2 ==0)
           {
               displayX0(m[i/2][j/2]);
           }
           else if (i%2 == 0)
           {
               printf("|");
           }
           else
           {
               printf("-");
           }
       }
       printf("\n");
   }
}
// функция хода
// куда и чем ходит
bool motion (int where, int what)
{
  bool ok = false;
    switch (where)
    {
    case 1:
        if (m[0][0]==0)
        {
            m[0][0]=what;
            ok = true;
        }
        break;

    case 2:
        if (m[0][1]==0)
        {
        m[0][1]=what;
        ok = true;
        }
        break;
    case 3:
        if (m[0][2]==0)
        {
        m[0][2]=what;
        ok = true;
        }
        break;
    case 4:
        if (m[1][0]==0)
        {
            m[1][0]=what;
            ok = true;
        }
        break;
    case 5:
        if (m[1][1]==0)
        {
        m[1][1]=what;
        ok = true;
        }
        break;
    case 6:
        if (m[1][2]==0)
        {
        m[1][2]=what;
        ok = true;
        }
        break;
    case 7:
        if (m[2][0]==0)
        {
        m[2][0]=what;
        ok = true;
        }
        break;

    case 8:
        if (m[2][1]==0)
        {
        m[2][1]=what;
        ok = true;
        }
        break;
    case 9:
        if (m[2][2]==0)
        {
        m[2][2]=what;
        ok = true;
        }
        break;
    }
    return ok;
}
// человек ходит Х
// человек ходит первым
void man()
{
    int x;
    do
    {
    printf("enter number \n");
    scanf("%d", &x);
    }
    while (!motion(x,1));

}

void computer()
{
    int x;
    do
    {
    srand(time(NULL));
    x = 1 + rand () % 9;
    }
   while (motion(x,2));
}


// 1 - игра продолжается
// 2 - ничья
// 3 - победил комп
// 4 - победил человек
int chek ()
{
    static int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (m[i][0] == m [i][1] && m [i][1] == m[i][2])
            if (m[i][0]==1)
            return 4;
        else if (m[i][0] == 2)
            return 3;
    }

    for (int i = 0; i < 3; ++i)
    {
        if (m[0][i] == m [1][i] && m [1][i] == m[2][i])
            if (m[0][i]==1)
            return 4;
        else if (m[0][i] == 2)
            return 3;
    }
    // проверка главной диагонали
        if (m[0][0] == m [1][1] && m [1][1] == m[2][2])
           {
            if (m[0][0]==1)
            return 4;
        else if (m[0][0] == 2)
            return 3;
    }
    //проверяем выйгрыш по 2 диагонали
    if (m[2][0] == m [1][1] && m [1][1] == m[0][2])
           {
            if (m[1][1]==1)
            return 4;
        else if (m[1][1] == 2)
            return 3;
    }
    if (++count == 9)
    {
        return 2;
    }
    return 1;
    }


int main ()
{
    bool comp = false;
    bool game = true;
    while (game)
    {
        system("cls");
        display();
        if (comp)
            computer();
        else
            man();
        int r = chek();
        switch (r)
        {
        case 1:
            comp = !comp;
            break;
        case 2:
            printf("draw\n");
            game = false;
            break;
        case 3:
            printf("Computer\n");
            game = false;
            break;
        case 4:
            printf("Man\n");
            game = false;
            break;
        default:
            break;
        }

        display();
    }

    return 0;
}
