#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a;
    printf("Введите одно целое число\n");
    scanf("%d", &a);
    printf("Данные на входе: %d\n", a);
    while (a>0)
    {
      int num = a%10;
      int other num = a/10;
      int same = other num%10;
      while(other num>0)
      {
        if (num == same)
        {
          printf("Данные на выходе: YES\n");
          return 0;
        }
        other num /= 10;
      }
      a /= 10;
    }
    printf("Данные на выходе: NO\n");
    return 0;
}