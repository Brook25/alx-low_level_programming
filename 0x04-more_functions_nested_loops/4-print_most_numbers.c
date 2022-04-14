#include "main.h"
/**
 * print_most_numbers - print digits except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
int a;
i = 0;
while (i < 10)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
i++;
}
_putchar('\n');
}
