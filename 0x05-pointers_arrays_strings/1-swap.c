#include "main.h"
/**
 * swap_int - swaps integers
 * @a: 1st integer to be swapped
 * @b: 2nd integer to be swappe
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = b;
*b = t;
}
