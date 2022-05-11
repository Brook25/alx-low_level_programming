#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches an array for an integer
 * @array: array input
 * @size: number of elements in the array
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array != 0 && cmp != 0)
{
if (size <= 0)
return (-1);
for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
}
return (-1);
}
