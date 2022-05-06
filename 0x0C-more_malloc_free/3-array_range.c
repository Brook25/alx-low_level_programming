#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: minimum integer
 * @max: maximum integer
 * Return: array
 */
int *array_range(int min, int max)
{
int num, k;
if (min > max)
return (0);
num = malloc((max - min + 1) * sizeof(int));
if (num == NULL)
return (0);
while (k <= max - min)
num[k++] = min++;
return (num);
}
