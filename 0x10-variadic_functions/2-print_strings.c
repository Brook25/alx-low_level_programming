#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function prints strings
 * @separator: string to be printed
 * @n: number of parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a;
char *b;
va_start(args, n);
for (a = 0; a < n; a++)
{
b = va_arg(args, char*);
if (b == NULL)
printf("(nil)");
else
{
if (a < (n - 1) && separator != 0)
printf("%s%s", b, separator);
else
printf("%s", b);
}
}
va_end(args);
printf("\n");
}
