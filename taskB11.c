#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    unsigned int a, num;
    printf("Введите одно целое число\n");
    scanf("%u", &a);
    printf("Данные на входе: %u\n", a);
    printf("Данные на выходе: ");
    while (a>0)
    {
      num = a%10;
      printf("%u",num);
      a /= 10;
    }
    return 0;
}