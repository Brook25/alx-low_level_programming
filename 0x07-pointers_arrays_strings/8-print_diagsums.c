#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - does the sum of two diagonals of a square matrix
 * @a: array of characs
 * @size: matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
int b;
int tot1, tot2;
tot1 = 0;
tot2 = 0;
b = 0;
while (i < size)
{
tot1 = tot1 + *(a + b * size + i);
tot2 = tot2 + *(a + b * size + size - i - 1);
a++;
}
printf("%a, %a\n", tot1, tot2);
}
