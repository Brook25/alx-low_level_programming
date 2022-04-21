#include "main.h"

/**
 * print_number - prints integer.
 * @n: integer input
 * Return: no return.
 */
void print_number(int n)
{
unsigned int j, l, count;
if (n < 0)
{
_putchar(45);
j = n * -1;
}
else
{
j = n;
}
l = j;
count = 1;
while (l > 9)
{
l /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((j / count) % 10) + 48);
}
}
