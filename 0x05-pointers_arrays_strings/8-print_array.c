#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integer
 * @a: A pointed to an int to be changed
 * @n: return value n
 * Return: Always 0
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
