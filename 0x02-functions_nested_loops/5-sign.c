#include "main.h"
/**
 * print_sign - return 0 not lowercase, return 1 for lowercase.
 * @n: int to be pronted
 * Return: Always 0
 */
int print_sign(int n)
{
if ((n > 0)
{
_putchar ('+');
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
