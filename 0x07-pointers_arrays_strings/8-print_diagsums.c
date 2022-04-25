#include "main.h"
#include <stdio.h>

/*
 * print_diagsums - does the sum of two diagonals of a square matrix
 * @a: array of characs
 * @size: matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{

int b;
int total1, total2;

total1 = 0;
total2 = 0;

b = 0;
while (b < size)
{

total1 = total1 + *(a + b * size + b);
total2 = total2 + *(a + b * size + size - b - 1);

b++;

}

printf("%d, %d\n", total1, total2);

}
