#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix
 * of integers
 * @a: values of the array
 * @size: size of square
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b = 0;
	int val = 0;
	int sum1, sum2;

	sum1 = sum2 = 0;
	while (b < (size * size))
	{
		val = *(a + b);
		sum1 = sum1 + val;
		b = b + size + 1;
	}
	b = size - 1;
	while (b < ((size * size) - 1))
	{
		val = *(a + b);
		sum2 = sum2 + val;
		b = b + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
