#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a, counter=0;
    printf("Введите одно целое число\n");
    scanf("%d", &a);
    printf("Данные на входе: %d\n", a);
    while (a>0)
    {
      int num = a%10;
      if (num == 9)
      {
        counter++;// Сколько раз встречается в введенном числе цифра 9
      }
      a /= 10;
    }
    if (counter == 1)
    {
      printf("Данные на выходе: YES\n");
    }
    else
    printf("Данные на выходе: NO\n");
    return 0;
}