#include "main.h"
/**
 * print_numbers - print digits
 *
 * Return: 0 Always
 */
void print_numbers(void)
{
int a;

a = 0;
while (a < 10)
{
_putchar (a + '0');
a++;
}
_putchar ('\n');
}
