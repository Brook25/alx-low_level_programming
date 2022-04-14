#include "main.h"
/**
 * more_numbers - prints numbers 10 to 14 10 times
 *
 * Return: Always (0)
 */
void more_numbers(void)
{
int a;
int num1;
int num2;
int res;

a = 0;
res = 0;
while (a < 10)
{
while (res <= 14)
{
if (res < 10)
{
num2 = res;
}
else
{
num1 = res / 10;
num2 = res % 10;
_putchar (num1 + '0');
}

_putchar (num2 + '0');
res++;
}
a++;
result = 0;
_ptuchar('\n');
}
}
