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
int result;

a = 0;
result = 0;
while (a < 10)
{
while (result <= 14)
{
if (result < 10)
{
num2 = result;
}
else
{
num1 = result / 10;
num2 = result % 10;
_putchar (num1 + '0');
}

_putchar (num2 + '0');

result++;
}
a++;
result = 0;
_ptuchar ('\n');
}

}
