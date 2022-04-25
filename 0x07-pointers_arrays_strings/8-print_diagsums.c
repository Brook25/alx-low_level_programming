#include <stdio.h>
/**
 * print_diagsums - the sum of two diagonals of a square matrix of integers
 * @a: array of chars
 *@size: number matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int tot1, tot2;

tot1 = 0;
tot2 = 0;

i = 0;
while (i < size)
{
tot1 = tot1 + *(a + i * size + i);
tot2 = tot2 + *(a + i * size + size - i - 1);
i++;
}

printf("%i, %i\n", tot1, tot2);

}
