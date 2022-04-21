#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
int *start_c, *end_c, k;
int j;
start_c = a;
end_c = a;
for (j = 0; j < n - 1; j++)
{
end_c++;
}

for (j = 0; j < n / 2; j++)
{
k = *end_c;
*end_c = *start_c;
*start_c = k;

start_c++;
end_c--;
}
}
