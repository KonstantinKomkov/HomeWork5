#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    unsigned int a, num, min=9, max=1;
    printf("Введите одно целое натуральное число\n");
    scanf("%u", &a);
    printf("Данные на входе: %u\n", a);
    while (a>0)
    {
      num = a%10;
      if(num > max)
      {
        max = num;
      }
      if (num < min)
      {
        min = num;
      }
      a /= 10;
    }
    printf("Данные на выходе: %u %u\n",min,max);
    return 0;
}