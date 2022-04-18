#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer to a string
 * Return: Always 0
 */
void _puts(char *str)
{
int i = 0;
for (str[i]++)
{
_putchar (str[i]);
}
_putchar ('\n');
}
