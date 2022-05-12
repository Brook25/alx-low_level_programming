#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers
 * @separator: string to be printed
 * @n: number of parameters
 * Return: sum of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int a;
int b = 0;
va_start(arg, n);
for (a = 0; a < n; a++)
{
b = va_arg(arg, int);
if (a < (n - 1) && separator != 0)
printf("%d%s", b, separator);
else
printf("%d", b);
}
va_end(arg);
printf("\n");
}
