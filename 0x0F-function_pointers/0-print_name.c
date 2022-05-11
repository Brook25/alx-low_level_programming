#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: name of a person
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}
