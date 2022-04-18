#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer to a string
 * Return: Always 0
 */
void _puts(char *str)
{
int i;
int j;
j = str;
for (i = 0; j[i]; j++)
{
_putchar (j[i]);
}
_putchar ('\n');
}
