#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    int a,b,sum;
    printf("Введите два целых числа a и b (a ≤ b) через пробел по модулю не больше 100\n");
    scanf("%d %d", &a, &b);
    printf("Данные на входе: %d %d\n", a,b);
    for(int i=a; i<=b && i>=a ;i++)
    sum = sum + i*i;
    printf("Данные на выходе: %d\n", sum);
    return 0;
}
