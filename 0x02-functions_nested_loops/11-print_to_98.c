#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers upto 98
 *@n: the number where counting starts
 * Return: Always 0
 */
voint print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("d, ", n);
printf("%d\n", 98);
}
}
