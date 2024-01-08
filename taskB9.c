#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    long int a;
    printf("Введите одно целое число\n");
    scanf("%ld", &a);
    printf("Данные на входе: %ld\n", a);
    while (a>0)
    {
      int num = a%10;
      if (num%2 != 0) //Проверка на четность
      {
        printf("Данные на выходе: NO\n");
        return 0;
      }
      a /= 10;
    }
    printf("Данные на выходе: YES\n");
    return 0;
}