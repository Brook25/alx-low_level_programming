#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *@n: print num
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i;
int a;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (a = 0; a < i; a++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
