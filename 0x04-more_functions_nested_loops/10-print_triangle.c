#include "main.h"
/**
 * print_triangle - prints a triangle
 *@size: print size
 * Return: Always 0
 */
void print_triangle(int size)
{
int i;
int a;
int b;
int c;
if (size > 0)
{
b = size - 1;
for (i = 0; i < size; i++)
{
for (a = b; a > 0; a--)
{
_putchar (' ');
}
for (c = 0; c <= 1; c++)
{
_putchar (35);
}
b--;
_putchar ('\n');
}
}
else
{
putchar ('\n');
}
}
