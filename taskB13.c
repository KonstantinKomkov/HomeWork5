#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    unsigned int a;
    int counter_1 = 0, counter_2 = 0;
    printf("Введите одно целое число\n");
    scanf("%u", &a);
    printf("Данные на входе: %u\n", a);
    while (a>0)
    {
      int num = a%10;
      if (num%2 == 0)//Если четное то
      {
        counter_1++;// Сколько раз встречается в введенном числе цифра 9
      }
      else counter_2++;//Если нечетное то
      a /= 10;
    }
    printf("Данные на выходе: четные - %d, нечетные - %d\n",counter_1,counter_2);
    return 0;
}