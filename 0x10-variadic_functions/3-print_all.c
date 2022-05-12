#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_i - function prints integer
 * @list: list of arguments
 * @s: separator
 * Return: nothing
 */
void print_i(va_list list, char *s)
{
printf("%s%d", s, va_arg(list, int));
}
/**
 * print_c - prints character
 * @list: argument character
 * @sep: separator
 */
void print_c(va_list list, char *sep)
{
printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_s - function prints string
 * @sep: separator
 * @list: list to print
 * Return: none
 */

void print_s(va_list list, char *sep)
{
char *s;
s = va_arg(list, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
}

/**
 * print_f - function prints floats
 * @sep: float value to be printed
 * @list: next argument to print
 * Return: nothing
 */
void print_f(va_list list, char *sep)
{
printf("%s%f", sep, va_arg(list, double));
}
/**
 * print_all - function prints
 * @format: list of types of args passed
 * Return: none
 */
void print_all(const char * const format, ...)
{
va_list list;
int a, b;
char *separator;

type_t ops[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s},
{NULL, NULL}
};
va_start(list, format);
a = 0;
separator = "";
while (format != NULL && format[a] != '\0')
{
b = 0;
while (b < 4)
if (format[a] == *(ops[b]).op)
{
ops[b].f(list, separator);
separator = ", ";
}
b++;
}
a++;
}
printf("\n");
va_end(list);
}
