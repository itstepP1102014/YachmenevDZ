#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, N; // если сделать N = 11, то рисует ромб, а если число вводит пользователь, то ромб не получается

  printf("enter the diagonal of the rhombus ");
  scanf("%d", & N);
  int center = N / 2;// перенес эту строку с 7 позиции и все получилось :)
  for(i = 0; i < N; ++i)
  {
    for(j = 0; j < N; ++j)
    {
      if(i <= center)
      {
        // Верхняя половина ромба
        if(j >= center - i && j <= center + i)
          printf("*");
        else
          printf(" ");
      }
      else
      {
        // Нижняя половина ромба
        if(j >= center + i - N + 1 && j <= center - i + N - 1)
          printf("*");
        else
         printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
